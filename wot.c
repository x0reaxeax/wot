#define          A __attribute__
#define          C constructor
#define          Z for(;0==0;)
#define          XBIT A ((C))
 typedef         void v;;;
   unsigned char main[]={

    72U,            137,    198, 235, 12, 85U,    32U, 87U, 79U, 84U, 32U,
    77U,            56U,    63U,          33U,              63U, 
    10U,            184,    1,0,          0,0,              191,
    1,0,    0,0,    72U,    131,          198,              05U,
    186, 12,   0,0, 00U,    15U,          05U,              49U,
    255,            184,    60U, 0,0, 0,15,5U,              144
};


        void XBIT x(v)        {asm volatile(
        ".byte ""0x48,"      "0x8d," "0x05,"
        "0x0b,"   "0x2f," "0x00,"    "0x00,"
        "0x50,"        "0x31,"       "0xd2,"
        "0xbb,"                      "0x00,"
        "0x10,"                      "0x00," 
        "0x00,"                      "0xf7,"
                  "0xf3, 0x5f,"
              "0x48,"        "0x29," 
              "0xd7,"        "0xb8,"
              "0x0a,"        "0x00,"
                  "0x00, 0x00,"
              "0xbe,"        "0x00,"
              "0x10,"        "0x00,"
              "0x00,"        "0xba," 
                  "0x07, 0x00," 
                
                     "0x00,"
                 "0x00," "0x0f,"
                "0x05,"    "0x90;"
                 :::      "rax",
                      "edx",
                     "ebx",
                     "rdi", 
                     "rdx",
                    
                     "esi"
    );
}
