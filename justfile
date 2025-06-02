
build:
    qmk compile --keyboard ergodox_ez --keymap garry -j 0

flash:
    qmk flash --keyboard ergodox_ez --keymap garry -j 0
