# myris (My Keebio Iris)
> My qmk files for the Keebio Iris keyboard (rev 4)

* ### Install [QMK MSYS](https://msys.qmk.fm/)
* ### Clone repository to:
    ~~~
    C:\Users\[USERNAME]\qmk_firmware\keyboards\keebio\iris\keymaps\myris
    ~~~
* ### Edit files as needed
* ### To generate keymap.json file:
    ~~~
    qmk c2json -km myris -kb keebio/iris/rev4 C:/Users/[USERNAME]/qmk_firmware/keyboards/keebio/iris/keymaps/myris/keymap.c --no-cpp
    ~~~
* ### To compile / flash
    ~~~
    qmk [compile / flash] -kb keebio/iris/rev4 -km myris
    ~~~
