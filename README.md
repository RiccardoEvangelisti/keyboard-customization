# keyboard-customization
Dear future me,
this is how you've customized your keyboard using QMK

QMK Firmware
---
[QMK Firmware](https://docs.qmk.fm/newbs_getting_started)

[Example](https://www.reddit.com/r/Keychron/comments/1bdroa5/how_to_set_individual_backlight_colours/) (first comment)


Keychron K3 Pro Ansi RGB
---
The firmware is NOT on the main git repo, but in a fork made by Keychron

#### Download firmware from git
`git clone --recurse-submodules  https://github.com/Keychron/qmk_firmware.git`

#### Move to right branch
The keyboard is on another branch
`git checkout wireless_playground`

#### Setup QMK
Make sure you're using the qmk from the above git and not from the original link
`qmk setup`

#### First compiling
Find your keyboard in the `keyboards` folder and compile with default keyboard-mapping
`qmk compile -kb keychron/k3_pro/ansi/rgb -km default`

#### Set the default keyboard
`qmk config user.keyboard=keychron/k3_pro/ansi/rgb`

#### Create new keymap
Set a keymap name (mine is "RiccardoEvangelisti") that will be a new folder like: `qmk_firmware\keyboards\keychron\k3_pro\ansi\rgb\keymaps\RiccardoEvangelisti`
`qmk new-keymap`

#### Customize
Create the files `keymap.c`, `config.h`, `rules.mk` inside the above folder

#### Custom compiling
Since you have inserted the default keyboard, you don't need to specify it again
`qmk compile -km "RiccardoEvangelisti"`

#### Flashing
I like to use qmk_toolbox. Follow the [doc](https://docs.qmk.fm/newbs_flashing)
