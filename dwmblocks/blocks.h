// dwmblocks/blocks.h
static const Block blocks[] = {
    /* Battery */
    {"", "~/.local/bin/dwmblocks/timeout-wrapper 2 ~/.local/bin/dwmblocks/battery-lean", 30, 1},
    
    /* Volume */
    {"", "~/.local/bin/dwmblocks/timeout-wrapper 2 ~/.local/bin/dwmblocks/volume", 0, 2},
    
    /* CPU/Load/Temp */
    {"", "~/.local/bin/dwmblocks/timeout-wrapper 2 ~/.local/bin/dwmblocks/cpu", 2, 3},
    
    /* Disk Usage */
    {"", "~/.local/bin/dwmblocks/timeout-wrapper 2 ~/.local/bin/dwmblocks/disk", 60, 4},
    
    /* Backlight */
    {"", "~/.local/bin/dwmblocks/timeout-wrapper 2 ~/.local/bin/dwmblocks/backlight", 0, 5},
    
    /* Temperature */
    {"", "~/.local/bin/dwmblocks/timeout-wrapper 2 ~/.local/bin/dwmblocks/temp", 5, 6},
    
    /* Now Playing */
    {"", "~/.local/bin/dwmblocks/timeout-wrapper 2 ~/.local/bin/dwmblocks/nowplaying", 1, 7},
    
    /* Public IP */
/*    {"", "~/.local/bin/dwmblocks/timeout-wrapper 5 ~/.local/bin/dwmblocks/publicip", 1800, 8},*/
    
    /* Network Speed */
    {"", "~/.local/bin/dwmblocks/timeout-wrapper 2 ~/.local/bin/dwmblocks/netspeed", 2, 9},
    
    /* Weather */
    /*{"", "~/.local/bin/dwmblocks/timeout-wrapper 5 ~/.local/bin/dwmblocks/weather", 1800, 10},*/
    
    /* System Updates */
    {"", "~/.local/bin/dwmblocks/timeout-wrapper 5 ~/.local/bin/dwmblocks/updates", 3600, 11},
    
    /* Torrents */
   /* {"", "~/.local/bin/dwmblocks/timeout-wrapper 2 ~/.local/bin/dwmblocks/torrents", 10, 12},*/
    
    /* Keyboard Layout */
    {"", "~/.local/bin/dwmblocks/timeout-wrapper 1 ~/.local/bin/dwmblocks/kblayout", 0, 13},
    
    /* Pomodoro */
    {"", "~/.local/bin/dwmblocks/timeout-wrapper 1 ~/.local/bin/dwmblocks/pomodoro", 0, 14},
    
    /* WiFi */
    {"", "~/.local/bin/dwmblocks/timeout-wrapper 2 ~/.local/bin/wifi-status", 5, 15},
    
    /* Date/Time */
    {"", "date '+%b %d (%a) %I:%M%p '", 1, 16},
};

// sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " ";
static unsigned int delimLen = 5;
