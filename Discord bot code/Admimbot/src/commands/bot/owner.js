const Discord = require('discord.js');

module.exports = async (client, interaction, args) => {
    client.embed({
        title: `・Owner information`,
        desc: `____________________________`,
        thumbnail: client.user.avatarURL({ dynamic: true, size: 1024 }),
        fields: [{
            name: "<:blue_crown:1012017210992115812> ┆ Owner name",
            value: `>>> Corwin\nUo`,
            inline: true,
        },
        {
            name: "<:discord:1012017257158824027> ┆ Discord tag",
            value: `>>> Corwin#0001\nUo#1428`,
            inline: true,
        }],
        type: 'editreply'
    }, interaction)
}

 