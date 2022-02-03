int i = 0;
int result;


void setup() {
    
  Serial.begin(9600);
  
}

void loop() {

  result = isEven(i);
  Serial.print(i);
  Serial.print(" : ");
  if(result == 1){
    Serial.println("Even");  
  } else{
    Serial.println("Odd");  
  }
  i++;
  delay(500);
}

int isEven(int a){

    if(a%2 == 0){
      return 1;  
    } else{
      return 0;  
    }
}
