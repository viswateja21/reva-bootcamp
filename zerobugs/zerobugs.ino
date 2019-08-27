// 2-dimensional array of row pin numbers:
int R[] = {2,7,A5,5,13,A4,12,A2};  
// 2-dimensional array of column pin numbers:
int C[] = {6,11,10,3,A3,4,8,9};    
  
unsigned char biglove[8][8] =        
{  
  0,0,0,0,0,0,0,0,  
  0,1,1,0,0,1,1,0,  
  1,1,1,1,1,1,1,1,  
  1,1,1,1,1,1,1,1,  
  1,1,1,1,1,1,1,1,  
  0,1,1,1,1,1,1,0,  
  0,0,1,1,1,1,0,0,  
  0,0,0,1,1,0,0,0,  
};  
unsigned char R1[8][8] =      
{  
  1,1,1,1,1,0,0,0,  
  1,0,0,0,0,1,0,0,  
  1,0,0,0,1,0,0,0,  
  1,0,0,1,0,0,0,0,  
  1,0,1,0,0,0,0,0,  
  1,0,0,1,0,0,0,0,  
  1,0,0,0,1,0,0,0,  
  1,0,0,0,0,1,0,0,  
}; 
unsigned char O[8][8] =        
{  
  0,0,0,0,0,0,0,0,  
  0,1,1,1,1,1,1,0,  
  0,1,0,0,0,0,1,0,  
  0,1,0,0,0,0,1,0,  
  0,1,0,0,0,0,1,0,  
  0,1,0,0,0,0,1,0,  
  0,1,1,1,1,1,1,0,  
  0,0,0,0,0,0,0,0,  
}; 

unsigned char Z[8][8] =      
{  
  0,0,0,0,0,0,0,0,  
  0,1,1,1,1,1,1,0,  
  0,0,0,0,0,1,0,0,  
  0,0,0,0,1,0,0,0,  
  0,0,0,1,0,0,0,0,  
  0,0,1,0,0,0,0,0,  
  0,1,1,1,1,1,1,0,  
  0,0,0,0,0,0,0,0,  
}; 
unsigned char E[8][8] =     
{  
  0,0,0,0,0,0,0,0,  
  0,1,1,1,1,1,1,0,  
  0,1,0,0,0,0,0,0,  
  0,1,1,1,1,1,1,0,  
  0,1,0,0,0,0,0,0,
  0,1,1,1,1,1,1,0, 
  0,0,0,0,0,0,0,0,    
  0,0,0,0,0,0,0,0,  
}; 
unsigned char smalllove[8][8] =      
{  
  0,0,0,0,0,0,0,0,  
  0,0,0,0,0,0,0,0,  
  0,0,1,0,0,1,0,0,  
  0,1,1,1,1,1,1,0,  
  0,1,1,1,1,1,1,0,  
  0,0,1,1,1,1,0,0,  
  0,0,0,1,1,0,0,0,  
  0,0,0,0,0,0,0,0,  
};  
unsigned char B[8][8] =      
{  
  0,0,0,0,0,0,0,0,  
  0,1,1,1,1,1,1,0,  
  0,1,0,0,0,0,1,0,  
  0,1,0,1,1,1,1,0,  
  0,1,0,1,1,1,1,0,  
  0,1,0,0,0,0,1,0,  
  0,1,1,1,1,1,1,0,  
  0,0,0,0,0,0,0,0,  
};  
unsigned char U[8][8] =    
{  
  0,0,0,0,0,0,0,0,  
  0,0,1,0,0,1,0,0,  
  0,0,1,0,0,1,0,0,  
  0,0,1,0,0,1,0,0,  
  0,0,1,0,0,1,0,0,  
  0,0,1,1,1,1,0,0,  
  0,0,0,0,0,0,0,0,  
  0,0,0,0,0,0,0,0,  
};  
unsigned char G[8][8] =      
{  
  0,0,0,0,0,0,0,0,  
  0,1,1,1,1,1,1,0,  
  0,1,0,0,0,0,0,0,  
  0,1,0,0,0,0,0,0,  
  0,1,0,1,1,1,1,0,  
  0,1,0,0,0,0,1,0,  
  0,1,1,1,1,1,1,0,  
  0,0,0,0,0,0,0,0,  
};  
unsigned char S[8][8] =    
{  
  0,0,0,0,0,0,0,0,  
  0,1,1,1,1,1,1,0,  
  0,1,0,0,0,0,0,0,  
  0,1,1,1,1,1,1,0,  
  0,0,0,0,0,0,1,0,  
  0,1,1,1,1,1,1,0,  
  0,0,0,0,0,0,0,0,  
  0,0,0,0,0,0,0,0,  
};    
void setup()  
{  
   // iterate over the pins:
  for(int i = 0;i<8;i++)  
  // initialize the output pins:
  {  
    pinMode(R[i],OUTPUT);  
    pinMode(C[i],OUTPUT);  
  }  
}  
  
void loop()  
{  
  for(int i = 0 ; i < 100 ; i++)        //Loop display 100 times 
  {  
    Display(Z);                   //Display "Z" 
  } 
  for(int i = 0 ; i < 100 ; i++)        //Loop display 100 times 
  {  
    Display(E);                   //Display "E"  
  }  
  for(int i = 0 ; i < 100 ; i++)        //Loop display 100 times 
  {  
    Display(R1);                   //Display "R"  
  } 
  for(int i = 0 ; i < 100 ; i++)        //Loop display 100 times 
  {  
    Display(O);                   //Display "O"  
  }    

  for(int i = 0 ; i < 100 ; i++)        //Loop display 100 times 
  {  
    Display(B);                   //Display "B"  
  } 
  for(int i = 0 ; i < 100 ; i++)        //Loop display 100 times 
  {  
    Display(U);                   //Display "U"  
  } 
  for(int i = 0 ; i < 100 ; i++)        //Loop display 100 times 
  {  
    Display(G);                   //Display "G"  
  }
  for(int i = 0 ; i < 100 ; i++)        //Loop display 100 times 
  {  
    Display(S);                   //Display "S"  
  }
  for(int i = 0 ; i < 50 ; i++)         //Loop display 50 times
  {     
    Display(biglove);                 //Display the "Big Heart" 
  }  
   for(int i = 0 ; i < 100 ; i++)        //Loop display 100 times 
  {  
    Display(smalllove);                   //Display the "Small Heart"  
  }
}  
  
void Display(unsigned char dat[8][8])    
{  
  for(int c = 0; c<8;c++)  
  {  
    digitalWrite(C[c],LOW);//use thr column 
    //loop
    for(int r = 0;r<8;r++)  
    {  
      digitalWrite(R[r],dat[r][c]);  
    }  
    delay(1);  
    Clear();  //Remove empty display light
  }  
}  
  
void Clear()                          
{  
  for(int i = 0;i<8;i++)  
  {  
    digitalWrite(R[i],LOW);  
    digitalWrite(C[i],HIGH);  
  }  
}  
