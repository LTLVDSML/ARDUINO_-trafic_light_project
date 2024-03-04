// définition de la broche 2 de la carte en tant que variable
const int Port_Led[] = {2,3,4,7,8,9,4,5,10,11} ;
//const int Port_Bouton = 8 ;
//const int Port_Bouton2 = 10 ;
boolean etat[]={LOW,HIGH,HIGH,HIGH,HIGH,LOW,HIGH,LOW,LOW,HIGH};
int on=0;
int on2=5;
int p=7;
int p2=8;

void setup() {
  // put your setup code here, to run once:
for(int i=0 ; i<10 ; i++){
    pinMode(Port_Led[i],OUTPUT);
    }
    
for (int j=0 ; j<10 ; j++){
    digitalWrite(Port_Led[j],etat[j]);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
delay(16500);// vert rouge

etat[p2]=!etat[p2];
etat[p2+1]=!etat[p2+1];
p2++;
affichage();
delay(5500);//pieton vert

etat[on]=!etat[on];
etat[on+1]=!etat[on+1];
on++;
etat[p2]=!etat[p2];
etat[p2-1]=!etat[p2-1];
p2=p2-1;
affichage();
delay(5000);//orange rouge

etat[on]=!etat[on];
etat[on+1]=!etat[on+1];
on++;
affichage();
delay(3000);//rouge rouge

etat[on2]=!etat[on2];
etat[on2-2]=!etat[on2-2];
on2= on2 -2;
affichage();
delay(22000);//rouge vert

etat[on2]=!etat[on2];
etat[on2+1]=!etat[on2+1];
on2++;
affichage();
delay(5000);//rouge orange

etat[on2]=!etat[on2];
etat[on2+1]=!etat[on2+1];
on2++;
affichage();
delay(3000);//rouge rouge

etat[on]=!etat[on];
etat[on-2]=!etat[on-2];
on = on-2;
affichage();
//vert rouge

}

void affichage(){
  for(int i = 0; i<10;i++){
  digitalWrite(Port_Led[i], etat[i]); 
}
}
  
