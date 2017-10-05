#define INTERACT_NONE 0
#define INTERACT_MERGE 1
#define INTERACT_BOUNCE 2
#define INTERACT_TALK 3
#define INTERACT_CHARGE 4

#define TYPE_EEMCS 0
#define TYPE_ET 1
#define TYPE_BMS 2
#define TYPE_TNW 3
#define TYPE_ITC 4

class Pulse{
  int x, y;
  byte size, speed;
  bool moveDir;
  Color color;

  //Interaction:
  //0: None
  //1: Merge
  //2: Bounce
  //3: Talk
  //4: Charge
  byte interaction;

  //Turn gravity on/off for this pulse
  bool gravity;

  //Lose mass while moving yes/no
  bool loseMoveMass;

  //How fast to decay over time (size points per second)
  byte decay;

  //Movement resistance. Can be use to make pulses 'sticky'.
  byte resistance;

  //Min/max saturation of the colours for this pulse.
  byte minSat, maxSat;

  Pulse(Edge _startEdge, bool _moveDir, byte _type){
    if(moveDir){
      x = _startEdge.startX;
      y = _startEdge.startY;
    }
    else{
      x = _startEdge.endX;
      y = _startEdge.endY;
    }
    moveDir = _moveDir;
    
    if(_type == TYPE_EEMCS){
      speed = random(80, 160);
      size = random(40, 60);
      color.setHSB(random(360), random(0, 20), 100); //Low saturated colours
      interaction = INTERACT_CHARGE;
      gravity = false;
      loseMoveMass = false;
      decay = 10; //Decay quite fast, since they will charge each other
    }
    
    
  }
};

