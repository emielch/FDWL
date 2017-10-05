class Edge{
  public: 
  int startX, startY, endX, endY;
  byte sn[2] = {-1,-1};
  byte en[2] = {-1,-1};

  Edge(int _startX, int _startY, int _endX, int _endY, byte _sn0, byte _sn1, byte _en0, byte _en1){
    startX = _startX;
    startY = _startY;
    endX = _endX;
    endY = _endY;
    sn[0] = _sn0;
    sn[1] = _sn1;
    en[0] = _en0;
    en[1] = _en1;    
  }
  
};

