

class LED{
  public:
    byte channel, ledID;
    int xPos, yPos;
    LED* nextLED;
  
    LED(byte _channel, byte _ledID, int _xPos, int _yPos){
      channel = _channel;
      ledID = _ledID;
      xPos = _xPos;
      yPos = _yPos;
    }

    void draw(){
      
    }

    void sedColor(Color c){
      set_ledLib(channel*ledsPerStrip+ledID, c.red(),c.green(),c.blue());
    }
};

