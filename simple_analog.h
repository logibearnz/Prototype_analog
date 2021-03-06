#pragma once

#include <pebble.h>

#define NUM_CLOCK_TICKS 16

static const struct GPathInfo ANALOG_BG_POINTS[] = {
  {4, (GPoint []) { //12
      {70, 0},
      {74, 0},
      {74, 8},
      {70, 8}
    }
  },
  { 4, (GPoint []){ //1
      {112, 0},
      {116, 0},
      {111, 8},
      {107, 8}
    }
  },
  { 4, (GPoint []){ //2
      {136, 45},
      {144, 40},
      {144, 44},
      {136, 49}
    }
  },
   {4, (GPoint []) { //3
      {136, 83},
      {144, 83},
      {144, 85},
      {136, 85}
    }
  },
  { 4, (GPoint []){ //4
      {136, 118},
      {144, 123},
      {144, 127},
      {136, 122}
    }
  },
  { 4, (GPoint []){ //5
      {108, 160},
      {112, 160},
      {116, 168},
      {112, 168}
    }
  },
  { 4, (GPoint []){ //6
      {70, 160},
      {74, 160},
      {74, 168},
      {70, 168}
    }
  },
  { 4, (GPoint []){ //7
      {35, 160},
      {31, 160},
      {28, 168},
      {32, 168}
    }
  },
  { 4, (GPoint []){ //8
      {8, 118},
      {-1, 123},
      {-1, 127},
      {8, 122}
    }
  },
  { 4, (GPoint []){ //9
      {-1, 83},
      {8, 83},
      {8, 85},
      {-1, 85}
    }
  },
  { 4, (GPoint []){ //10
      {8, 45},
      {-1, 40},
      {-1, 44},
      {8, 49}
    }
  },
  { 4, (GPoint []){ //11
      {32, 0},
      {28, 0},
      {34, 8},
      {38, 8}
    }
  },
  { 4, (GPoint []){ //TOP LINE
      {-1, -1},
      {145, -1},
      {145, 1},
      {-1, 1}
    }
  },
  { 4, (GPoint []){ //RIGHT LINE
      {141, 0},
      {144, 0},
      {144, 168},
      {141, 168}
    }
  },
 { 4, (GPoint []){ //BOTTOM LINE
      {-1, 166},
      {145, 166},
      {145, 169},
      {-1, 169}
    }
 },
 { 4, (GPoint []){ //BOTTOM LINE
      {-1, -1},
      {2, -1},
      {2, 169},
      {-1, 169}
    }
 },
  
  
  
 
};

static const GPathInfo MINUTE_HAND_POINTS = {
  4,
  (GPoint []) {
    { 4, -65 },
    { -4, -65 },
    { -4,  3},
    {4, 3}
  }

};

static const GPathInfo HOUR_HAND_POINTS = {
  4, (GPoint []){
    { -4, 3 },
    { 4, 3 },
    { 4,  -35},
    {-4, -35}
  }
};
