
  int m1p=2;
  int m1n=3;
  int m2p=4;
  int m2n=5;
  
  void setup() {
  // put your setup code here, to run once:

  pinMode(m1p,1);
  pinMode(m1n,1);

  pinMode(m2p,1);
  pinMode(m2n,1);


}

void loop() {

  digitalWrite(m1p,HIGH);
    digitalWrite(m1n,LOW);
  digitalWrite(m2p,HIGH);
  digitalWrite(m2n,LOW);

  // put your main code here, to run repeatedly:

}
