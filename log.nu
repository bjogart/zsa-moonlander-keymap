C:/Users/Jasper/Documents/hid_listen.exe
    # | where =~ '(0x[A-F0-9]+,)?[0-9]+,[0-9]+,[0-9]{1,2}'
    # | tee { print $in }
    # | save --append D:/project/zsa-moonlander-keymap/log.csv