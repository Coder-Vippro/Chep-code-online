
if(NOT "/workspaces/Chep-code-online/build/external/catch/stamp/catch-gitinfo.txt" IS_NEWER_THAN "/workspaces/Chep-code-online/build/external/catch/stamp/catch-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/workspaces/Chep-code-online/build/external/catch/stamp/catch-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E remove_directory "/workspaces/Chep-code-online/build/external/catch/src"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/workspaces/Chep-code-online/build/external/catch/src'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/local/bin/git"  clone --no-checkout --depth 1 --no-single-branch "https://github.com/Bareflank/catch.git" "src"
    WORKING_DIRECTORY "/workspaces/Chep-code-online/build/external/catch"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/Bareflank/catch.git'")
endif()

execute_process(
  COMMAND "/usr/local/bin/git"  checkout v1.2 --
  WORKING_DIRECTORY "/workspaces/Chep-code-online/build/external/catch/src"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'v1.2'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/local/bin/git"  submodule update --recursive --init 
    WORKING_DIRECTORY "/workspaces/Chep-code-online/build/external/catch/src"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/workspaces/Chep-code-online/build/external/catch/src'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/workspaces/Chep-code-online/build/external/catch/stamp/catch-gitinfo.txt"
    "/workspaces/Chep-code-online/build/external/catch/stamp/catch-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/workspaces/Chep-code-online/build/external/catch/stamp/catch-gitclone-lastrun.txt'")
endif()

