

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

    void addColor(Color c){
      Color currCol = getColor();
      currCol.add(c);
      setColor(currCol);
    }

    void setColor(Color c){
      set_ledLib(channel*ledsPerStrip+ledID, c.red(),c.green(),c.blue());
    }

    Color getColor(){
      return get_ledLib(channel*ledsPerStrip+ledID);
    }
};

