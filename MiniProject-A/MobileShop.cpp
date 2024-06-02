#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class mobile_phone{
   public:
   mobile_phone(int price , string name){
   cout<<"<-----------Invoices----------->"<<endl;  
   cout<<endl; 
   cout<<"$ Generic Name : Mobile Phone"<<endl;
   cout<<"$ Model Name : "<<name<<endl;
   cout<<"$ Maximum Retail Price : "<<(price + ((price)*0.1))<<" /-"<<endl;
   cout<<"$ Month And Year Of Manufacturering : April 2024"<<endl;
   cout<<"$ Telephone : 7030570988"<<endl;
   cout<<"$ Email : chavanyash127@gmail.com"<<endl;
   cout<<"$ Website : www.ycshop.xyz"<<endl;
  }
};

void Show_Mobile_List(void);
void choose_Mobile_brand(void);
void apple_mobile_series(void);
void samsung_mobile_series(void);
void vivo_mobile_series(void);
void oppo_mobile_series(void);
void oneplus_mobile_series(void);


void base_model(void);
void plus_model(void);
void pro_model(void);
void pro_max_model(void);

void sa_series(void);
void m_series(void);
void sf_series(void);
void s_series(void);

void v_series(void);
void y_series(void);
void t_series(void);
void x_series(void);

void of_series(void);
void oa_series(void);
void find_series(void);
void reno_series(void);

void best_series(void);
void nord_series(void);

void userData(int,string);



int main(){

 char startValue; 

 cout<<"$ Please Press s To Start Purchase Mobile."<<endl;
 start:
 cout<<"Input Here : " ; 
 cin>>startValue;


 if(startValue =='s' || startValue == 'S'){
     Show_Mobile_List();
}

 else{
      cout<<"$ Fail To Start Purchasing Please Press s To Start Purchase Mobile."<<endl;
      goto start;
}

  return 0;

}

void Show_Mobile_List(void){
     cout <<endl;
     cout<<"#####  Welcome To YC Shop | We Have Top 5 Mobile Brands  #####"<<endl;
     cout<<endl;
     cout<<"1. Apple"<<endl;
     cout<<"2. Samsung"<<endl;
     cout<<"3. Vivo"<<endl;
     cout<<"4. Oppo"<<endl;
     cout<<"5. Oneplus"<<endl;
     cout<<endl;

     choose_Mobile_brand();
}



void choose_Mobile_brand(){
     cout<<"$ Choose A Mobile Brand. [Enter Number ex. For Samsung --> 2]"<<endl;
     cout<<endl;
     char brand;
     cout<<"Input Here : ";
     cin>>brand;
   

     switch (brand){

     case '1':
      apple_mobile_series();
        break;

     case '2':
       samsung_mobile_series(); 
        break;

     case '3':
      vivo_mobile_series();
        break;

     case '4':
       oppo_mobile_series(); 
        break;

     case '5':
      oneplus_mobile_series();
        break;   
     
     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile Brand."<<endl;
       choose_Mobile_brand();
      break;

     }
}

void apple_mobile_series(){
   cout<<endl;
   cout<<"$ Thats Great To Choose Apple."<<endl;
   cout<<endl;
   cout<<"1. Base Model"<<endl;
   cout<<"2. Plus Model"<<endl;
   cout<<"3. Pro Model"<<endl;
   cout<<"4. Pro Max Model"<<endl;
   cout<<endl;
   cout<<"$ Choose The Series "<<endl;
   cout<<endl;
   char apple;
   cout<<"Input Here : ";
   cin>>apple;

  switch (apple){

     case '1':
     base_model();
        break;

     case '2':
      plus_model();
        break;

     case '3':
      pro_model();
        break;

     case '4':
      pro_max_model();
        break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile Series."<<endl;
      apple_mobile_series();
      break;

     }

}    

 void samsung_mobile_series(){
   cout<<endl;
   cout<<"$ Thats Great To Choose Samsung."<<endl;
   cout<<endl;
   cout<<"1. A Series"<<endl;
   cout<<"2. M Series"<<endl;
   cout<<"3. F Series"<<endl;
   cout<<"4. S Series"<<endl;
   cout<<endl;
   cout<<"$ Choose The Series "<<endl;
   cout<<endl;
   char samsung;
   cout<<"Input Here : ";
   cin>>samsung;

switch (samsung){

     case '1':
     sa_series();
        break;

     case '2':
     m_series();
        break;

     case '3':
     sf_series();
        break;

     case '4':
     s_series();
        break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile Series."<<endl;
      samsung_mobile_series();
      break;

     }
 }

void vivo_mobile_series(){
   cout<<endl;
   cout<<"$ Thats Great To Choose Vivo."<<endl;
   cout<<endl;
   cout<<"1. V Series"<<endl;
   cout<<"2. Y Series"<<endl;
   cout<<"3. T Series"<<endl;
   cout<<"4. X Series"<<endl;
   cout<<endl;
   cout<<"$ Choose The Series "<<endl;
   cout<<endl;
   char vivo;
   cout<<"Input Here : ";
   cin>>vivo;


switch (vivo){

     case '1':
     v_series();
        break;

     case '2':
     y_series();
        break;

     case '3':
     t_series();
        break;

     case '4':
     x_series();
        break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile Series."<<endl;
      vivo_mobile_series();
      break;

     }

}

void oppo_mobile_series(){
   cout<<endl;
   cout<<"$ Thats Great To Choose Oppo."<<endl;
   cout<<endl;
   cout<<"1. F Series"<<endl;
   cout<<"2. A Series"<<endl;
   cout<<"3. Find series"<<endl;
   cout<<"4. Reno series"<<endl;
   cout<<endl;
   cout<<"$ Choose The Series "<<endl;
   cout<<endl;
   char oppo;
   cout<<"Input Here : ";
   cin>>oppo;


switch (oppo){

     case '1':
     of_series();
        break;

     case '2':
     oa_series();
        break;

     case '3':
     find_series();
        break;

     case '4':
     reno_series();
        break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile Series."<<endl;
      oppo_mobile_series();
      break;

     }
}

void oneplus_mobile_series(){
   cout<<endl;
   cout<<"$ Thats Great To Choose Oneplus."<<endl;
   cout<<endl;
   cout<<"1. Best Series"<<endl;
   cout<<"2. Nord Series"<<endl;
   cout<<endl;
   cout<<"$ Choose The Series "<<endl;
   cout<<endl;
   char oneplus;
     cout<<"Input Here : ";
     cin>>oneplus;



switch (oneplus){

     case '1':
      best_series();
        break;

     case '2':
      nord_series();
        break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile Series."<<endl;
      oneplus_mobile_series();
      break;

     }
}

void base_model(void){
   int base_model_price;
   string base_model_name;

   cout<<endl;
   cout<<"$ Thats Great To Choose Base Model."<<endl;
   cout<<endl;
   cout<<"1. Iphone 13"<<endl;
   cout<<"2. Iphone 14"<<endl;
   cout<<"3. Iphone 15"<<endl;
   cout<<endl;
   cout<<"$ Choose The Model "<<endl;
   cout<<endl;
   char base;
   cout<<"Input Here : ";
   cin>>base;

    switch (base){
     case '1':
      cout<<endl;
      base_model_price = 52000;
      base_model_name = "Iphone 13";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(base_model_price, base_model_name);   
      break;
 
     case '2':
      cout<<endl;
      base_model_price = 68000;
      base_model_name = "Iphone 14";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(base_model_price, base_model_name);   
      break;

     case '3':
      cout<<endl;
      base_model_price = 72000;
      base_model_name = "Iphone 15";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(base_model_price, base_model_name);   
      break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile."<<endl;
       base_model();
       break;
    }   
}


void plus_model(void){
 int plus_model_price;
 string plus_model_name; 

  cout<<endl;
  cout<<"$ Thats Great To Choose Plus Model."<<endl;
  cout<<endl;
  cout<<"1. Iphone 14 Plus"<<endl;
  cout<<"2. Iphone 15 Plus"<<endl;
  cout<<endl;
  cout<<"$ Choose The Model "<<endl;
  cout<<endl;
  char plus;
  cout<<"Input Here : ";
  cin>>plus;

   switch (plus){

     case '1':
      cout<<endl;
      plus_model_price = 78000;
      plus_model_name = "Iphone 14 Plus";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(plus_model_price, plus_model_name);   
      break;

     case '2':
      cout<<endl;
      plus_model_price = 80500;
      plus_model_name = "Iphone 15 Plus";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(plus_model_price, plus_model_name);   
      break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile."<<endl;
       plus_model();
       break;
    }   
}

void pro_model(void){
   int pro_model_price;
   string pro_model_name; 

   cout<<endl;
   cout<<"$ Thats Great To Choose Pro Model."<<endl;
   cout<<endl;
   cout<<"1. Iphone 13 Pro"<<endl;
   cout<<"2. Iphone 14 Pro"<<endl;
   cout<<"3. Iphone 15 Pro"<<endl;
   cout<<endl;
   cout<<"$ Choose The Model "<<endl;
   cout<<endl;
   char pro;
   cout<<"Input Here : ";
   cin>>pro;

     switch (pro){
     case '1':
      cout<<endl;
      pro_model_price = 120000;
      pro_model_name = "Iphone 13 Pro";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(pro_model_price, pro_model_name);   
      break;
 
     case '2':
      cout<<endl;
      pro_model_price = 130000;
      pro_model_name = "Iphone 14 Pro";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(pro_model_price, pro_model_name);   
      break;

     case '3':
      cout<<endl;
      pro_model_price = 150000;
      pro_model_name = "Iphone 15 Pro";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(pro_model_price, pro_model_name);   
      break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile."<<endl;
       pro_model();
       break;
    }   
}

void pro_max_model(void){
    int pro_max_model_price;
   string pro_max_model_name; 

   cout<<endl;
   cout<<"$ Thats Great To Choose Pro Max Model."<<endl;
   cout<<endl;
   cout<<"1. Iphone 13 Pro Max"<<endl;
   cout<<"2. Iphone 14 Pro Max"<<endl;
   cout<<"3. Iphone 15 Pro Max"<<endl;
   cout<<endl;
   cout<<"$ Choose The Model "<<endl;
   cout<<endl;
   char pro_max;
   cout<<"Input Here : ";
   cin>>pro_max;

   switch (pro_max){
     case '1':
      cout<<endl;
      pro_max_model_price = 135000;
      pro_max_model_name = "Iphone 13 Pro Max";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(pro_max_model_price, pro_max_model_name);   
      break;
 
     case '2':
      cout<<endl;
      pro_max_model_price = 150000;
      pro_max_model_name = "Iphone 14 Pro Max";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(pro_max_model_price, pro_max_model_name);   
      break;

     case '3':
      cout<<endl;
      pro_max_model_price = 200000;
      pro_max_model_name = "Iphone 15 Pro Max";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(pro_max_model_price, pro_max_model_name);   
      break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile."<<endl;
       pro_max_model();
       break;
    }   
}

void sa_series(void){
    int sa_series_price;
    string sa_series_name; 

   cout<<endl;
   cout<<"$ Thats Great To Choose A Series."<<endl;
   cout<<endl;
   cout<<"1. Samsung Galaxy A55"<<endl;
   cout<<"2. Samsung Galaxy A35"<<endl;
   cout<<"3. Samsung Galaxy A15"<<endl;
   cout<<endl;
   cout<<"$ Choose The Model "<<endl;
   cout<<endl;
   char sa;
   cout<<"Input Here : ";
   cin>>sa;

   switch (sa){
     case '1':
      cout<<endl;
      sa_series_price = 37500;
      sa_series_name = "Samsung Galaxy A55";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(sa_series_price, sa_series_name);   
      break;
 
     case '2':
      cout<<endl;
       sa_series_price = 27000;
       sa_series_name = "Samsung Galaxy A35";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(sa_series_price, sa_series_name);    
      break;

     case '3':
      cout<<endl;
      sa_series_price = 18000;
      sa_series_name = "Samsung Galaxy A15";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(sa_series_price, sa_series_name);   
      break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile."<<endl;
       sa_series();
       break;
    }   
}

void m_series(void){
   int m_series_price;
   string m_series_name; 

   cout<<endl;
   cout<<"$ Thats Great To Choose M Series."<<endl;
   cout<<endl;
   cout<<"1. Samsung Galaxy M55"<<endl;
   cout<<"2. Samsung Galaxy M34"<<endl;
   cout<<"3. Samsung Galaxy M15"<<endl;
   cout<<endl;
   cout<<"$ Choose The Model "<<endl;
   cout<<endl;
   char m;
   cout<<"Input Here : ";
   cin>>m;

   switch (m){
     case '1':
      cout<<endl;
      m_series_price = 25000;
      m_series_name = "Samsung Galaxy M55";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(m_series_price, m_series_name);   
      break;
 
     case '2':
      cout<<endl;
      m_series_price = 24000;
      m_series_name = "Samsung Galaxy M34";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(m_series_price, m_series_name);     
      break;

     case '3':
      cout<<endl;
      m_series_price = 12500;
      m_series_name = "Samsung Galaxy M15";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(m_series_price, m_series_name);    
      break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile."<<endl;
       m_series();
       break;
    }   
}

void sf_series(void){
   int sf_series_price;
   string sf_series_name; 

   cout<<endl;
   cout<<"$ Thats Great To Choose F Series."<<endl;
   cout<<endl;
   cout<<"1. Samsung Galaxy F54"<<endl;
   cout<<"2. Samsung Galaxy F34"<<endl;
   cout<<"3. Samsung Galaxy F15"<<endl;
   cout<<endl;
   cout<<"$ Choose The Model "<<endl;
   cout<<endl;
   char sf;
   cout<<"Input Here : ";
   cin>>sf;

   switch (sf){
     case '1':
      cout<<endl;
      sf_series_price = 22500;
      sf_series_name = "Samsung Galaxy F54";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(sf_series_price, sf_series_name);   
      break;
 
     case '2':
      cout<<endl;
      sf_series_price = 13700;
      sf_series_name = "Samsung Galaxy F34";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(sf_series_price, sf_series_name);      
      break;

     case '3':
      cout<<endl;
      sf_series_price = 11800;
      sf_series_name = "Samsung Galaxy F15";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(sf_series_price, sf_series_name);    
      break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile."<<endl;
       sf_series();
       break;
    }   
}
void s_series(void){
    int s_series_price;
    string s_series_name; 

   cout<<endl;
   cout<<"$ Thats Great To Choose S Series."<<endl;
   cout<<endl;
   cout<<"1. Samsung Galaxy S24"<<endl;
   cout<<"2. Samsung Galaxy S23"<<endl;
   cout<<"3. Samsung Galaxy S22"<<endl;
   cout<<endl;
   cout<<"$ Choose The Model "<<endl;
   cout<<endl;
   char s;
   cout<<"Input Here : ";
   cin>>s;

    switch (s){
     case '1':
      cout<<endl;
      s_series_price = 62950;
      s_series_name = "Samsung Galaxy S24";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(s_series_price, s_series_name);   
      break;
 
     case '2':
      cout<<endl;
       s_series_price = 46360;
       s_series_name = "Samsung Galaxy S23";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(s_series_price, s_series_name);      
      break;

     case '3':
      cout<<endl;
       s_series_price = 35000;
       s_series_name = "Samsung Galaxy S22";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(s_series_price, s_series_name);    
      break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile."<<endl;
       s_series();
       break;
    }   
}

void v_series(void){
    int v_series_price;
    string v_series_name; 

   cout<<endl;
   cout<<"$ Thats Great To Choose V Series."<<endl;
   cout<<endl;
   cout<<"1. Vivo V30"<<endl;
   cout<<"2. Vivo V29"<<endl;
   cout<<"3. Vivo V28"<<endl;
   cout<<endl;
   cout<<"$ Choose The Model "<<endl;
   cout<<endl;
   char v;
   cout<<"Input Here : ";
   cin>>v;

    switch (v){
     case '1':
      cout<<endl;
      v_series_price = 31000;
      v_series_name = "Vivo V30";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(v_series_price, v_series_name);   
      break;
 
     case '2':
      cout<<endl;
      v_series_price = 27380;
      v_series_name = "Vivo V29";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(v_series_price, v_series_name);       
      break;

     case '3':
      cout<<endl;
      v_series_price = 26300;
      v_series_name = "Vivo V28";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(v_series_price, v_series_name);   
      break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile."<<endl;
       v_series();
       break;
    }   
}
void y_series(void){
    int y_series_price;
    string y_series_name; 

   cout<<endl;
   cout<<"$ Thats Great To Choose Y Series."<<endl;
   cout<<endl;
   cout<<"1. Vivo Y200"<<endl;
   cout<<"2. Vivo Y150"<<endl;
   cout<<"3. Vivo Y100"<<endl;
   cout<<endl;
   cout<<"$ Choose The Model "<<endl;
   cout<<endl;
   char y;
   cout<<"Input Here : ";
   cin>>y;

   switch (y){
     case '1':
      cout<<endl;
      y_series_price = 22000;
      y_series_name = "Vivo Y200";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(y_series_price, y_series_name);   
      break;
 
     case '2':
      cout<<endl;
      y_series_price = 21350;
      y_series_name = "Vivo Y150";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(y_series_price, y_series_name);        
      break;

     case '3':
      cout<<endl;
      y_series_price = 20200;
      y_series_name = "Vivo Y100";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(y_series_price, y_series_name);    
      break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile."<<endl;
       y_series();
       break;
    }   
}
void t_series(void){
   int t_series_price;
   string t_series_name; 

   cout<<endl;
   cout<<"$ Thats Great To Choose T Series."<<endl;
   cout<<endl;
   cout<<"1. Vivo T3"<<endl;
   cout<<"2. Vivo T2"<<endl;
   cout<<"3. Vivo T1"<<endl;
   cout<<endl;
   cout<<"$ Choose The Model "<<endl;
   cout<<endl;
   char t;
   cout<<"Input Here : ";
   cin>>t;

   switch (t){
     case '1':
      cout<<endl;
      t_series_price = 20000;
      t_series_name = "Vivo T3";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(t_series_price, t_series_name);   
      break;
 
     case '2':
      cout<<endl;
      t_series_price = 16000;
      t_series_name = "Vivo T2";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(t_series_price, t_series_name);        
      break;

     case '3':
      cout<<endl;
      t_series_price = 13000;
      t_series_name = "Vivo T1";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(t_series_price, t_series_name);     
      break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile."<<endl;
       t_series();
       break;
    }   
}
void x_series(void){
   int x_series_price;
   string x_series_name; 

   cout<<endl;
   cout<<"$ Thats Great To Choose X Series."<<endl;
   cout<<endl;
   cout<<"1. Vivo X100"<<endl;
   cout<<"2. Vivo X90"<<endl;
   cout<<"3. Vivo X60"<<endl;
   cout<<endl;
   cout<<"$ Choose The Model "<<endl;
   cout<<endl;
   char x;
   cout<<"Input Here : ";
   cin>>x;

   switch (x){
     case '1':
      cout<<endl;
      x_series_price = 64000;
      x_series_name = "Vivo X100";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(x_series_price, x_series_name);   
      break;
 
     case '2':
      cout<<endl;
      x_series_price = 51000;
      x_series_name = "Vivo X90";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(x_series_price, x_series_name);        
      break;

     case '3':
      cout<<endl;
      x_series_price = 38000;
      x_series_name = "Vivo X60";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(x_series_price, x_series_name);     
      break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile."<<endl;
       x_series();
       break;
    }   
}

 void of_series(void){
   int of_series_price;
   string of_series_name;

   cout<<endl;
   cout<<"$ Thats Great To Choose F Series."<<endl;
   cout<<endl;
   cout<<"1. Oppo F25"<<endl;
   cout<<"2. Oppo F23"<<endl;
   cout<<"3. Oppo F21"<<endl;
   cout<<endl;
   cout<<"$ Choose The Model "<<endl;
   cout<<endl;
   char of;
   cout<<"Input Here : ";
   cin>>of;

   switch (of){
     case '1':
      cout<<endl;
      of_series_price = 24000;
      of_series_name = "Oppo F25";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(of_series_price, of_series_name);   
      break;
 
     case '2':
      cout<<endl;
      of_series_price = 21500;
      of_series_name = "Oppo F23";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(of_series_price, of_series_name);         
      break;

     case '3':
      cout<<endl;
      of_series_price = 19800;
      of_series_name = "Oppo F21";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(of_series_price, of_series_name); 
      break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile."<<endl;
       of_series();
       break;
    }   
 }
 void oa_series(void){
   int oa_series_price;
   string oa_series_name;

   cout<<endl;
   cout<<"$ Thats Great To Choose A Series."<<endl;
   cout<<endl;
   cout<<"1. Oppo A79"<<endl;
   cout<<"2. Oppo A59"<<endl;
   cout<<"3. Oppo A38"<<endl;
   cout<<endl;
   cout<<"$ Choose The Model "<<endl;
   cout<<endl;
   char oa;
   cout<<"Input Here : ";
   cin>>oa;

   switch (oa){
     case '1':
      cout<<endl;
      oa_series_price = 17500;
      oa_series_name = "Oppo A79";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(oa_series_price, oa_series_name);   
      break;
 
     case '2':
      cout<<endl;
      oa_series_price = 15500;
      oa_series_name = "Oppo A59";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(oa_series_price, oa_series_name);          
      break;

     case '3':
      cout<<endl;
      oa_series_price = 10500;
      oa_series_name = "Oppo A38";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(oa_series_price, oa_series_name); 
      break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile."<<endl;
       oa_series();
       break;
    }   
 }
 void find_series(void){
    int find_series_price;
    string find_series_name;

   cout<<endl;
   cout<<"$ Thats Great To Choose Find Series."<<endl;
   cout<<endl;
   cout<<"1. Oppo Find X7 Ultra"<<endl;
   cout<<"2. Oppo Find X6 Ultra"<<endl;
   cout<<"3. Oppo Find X5 Ultra"<<endl;
   cout<<endl;
   cout<<"$ Choose The Model "<<endl;
   cout<<endl;
   char find;
   cout<<"Input Here : ";
   cin>>find;

   switch (find){
     case '1':
      cout<<endl;
      find_series_price = 79300;
      find_series_name = "Oppo Find X7 Ultra";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(find_series_price, find_series_name);   
      break;
 
     case '2':
      cout<<endl;
      find_series_price = 77990;
      find_series_name = "Oppo Find X6 Ultra";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(find_series_price, find_series_name);         
      break;

     case '3':
      cout<<endl;
      find_series_price = 71900;
      find_series_name = "Oppo Find X5 Ultra";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(find_series_price, find_series_name);
      break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile."<<endl;
       find_series();
       break;
    }   
 }
 void reno_series(void){
   int reno_series_price;
   string reno_series_name;

   cout<<endl;
   cout<<"$ Thats Great To Choose Reno Series."<<endl;
   cout<<endl;
   cout<<"1. Oppo Reno11 pro"<<endl;
   cout<<"2. Oppo Reno10 pro"<<endl;
   cout<<"3. Oppo Reno9 pro"<<endl;
   cout<<endl;
   cout<<"$ Choose The Model "<<endl;
   cout<<endl;
   char reno;
   cout<<"Input Here : ";
   cin>>reno;

   switch (reno){
     case '1':
      cout<<endl;
      reno_series_price = 36260;
      reno_series_name = "Oppo Reno11 Pro";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(reno_series_price, reno_series_name);   
      break;
 
     case '2':
      cout<<endl;
      reno_series_price = 34200;
      reno_series_name = "Oppo Reno10 Pro";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(reno_series_price, reno_series_name);         
      break;

     case '3':
      cout<<endl;
      reno_series_price = 25000;
      reno_series_name = "Oppo Reno9 Pro";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(reno_series_price, reno_series_name);
      break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile."<<endl;
       reno_series();
       break;
    }   
 }

 void best_series(void){
   int best_series_price;
   string best_series_name;

   cout<<endl;
   cout<<"$ Thats Great To Choose Best Series."<<endl;
   cout<<endl;
   cout<<"1. Oneplus 12R"<<endl;
   cout<<"2. Oneplus 11R"<<endl;
   cout<<"3. Oneplus 10R"<<endl;
   cout<<endl;
   cout<<"$ Choose The Model "<<endl;
   cout<<endl;
   char best;
   cout<<"Input Here : ";
   cin>>best;

   switch (best){
     case '1':
      cout<<endl;
      best_series_price = 40000;
      best_series_name = "Oneplus 12R";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(best_series_price, best_series_name);   
      break;
 
     case '2':
      cout<<endl;
      best_series_price = 36000;
      best_series_name = "Oneplus 11R";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(best_series_price, best_series_name); 
      break;

     case '3':
      cout<<endl;
      best_series_price = 32750;
      best_series_name = "Oneplus 10R";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(best_series_price, best_series_name); 
      break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile."<<endl;
       best_series();
       break;
    }   
 }
 void nord_series(void){
   int nord_series_price;
   string nord_series_name;

   cout<<endl;
   cout<<"$ Thats Great To Choose Nord Series."<<endl;
   cout<<endl;
   cout<<"1. Oneplus Nord CE4"<<endl;
   cout<<"2. Oneplus Nord CE3"<<endl;
   cout<<"3. Oneplus Nord CE2"<<endl;
   cout<<endl;
   cout<<"$ Choose The Model "<<endl;
   cout<<endl;
   char nord;
   cout<<"Input Here : ";
   cin>>nord;

   switch (nord){
     case '1':
      cout<<endl;
      nord_series_price = 33000;
      nord_series_name = "Oneplus Nord CE4";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(nord_series_price, nord_series_name);   
      break;
 
     case '2':
      cout<<endl;
      nord_series_price = 18990;
      nord_series_name = "Oneplus Nord CE3";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(nord_series_price, nord_series_name); 
      break;

     case '3':
      cout<<endl;
      nord_series_price = 17000;
      nord_series_name = "Oneplus Nord CE2";

      cout<<"$ Your Order Has Been Received."<<endl;
      cout<<endl;
      userData(nord_series_price, nord_series_name); 
      break;

     default:
       cout<<endl;
       cout<<"$ Fail To Choose A Mobile."<<endl;
       nord_series();
       break;
    }   
 }



void userData(int mobile_price, string mobile_name){
    string mobile_no;
    int quantity = 1;
    string name;

    cin.ignore();
    cout<<"$ Enter Your Full Name : ";
    getline(cin,name);
    cin.clear();

   mobileNo:
   
     try{
         cout<<"$ Enter Your Mobile Number : ";
         cin>>mobile_no;
         cin.clear();

      if(mobile_no.length()!=10){
        throw "$ Please Enter Valid Mobile Number";
        cout<<endl;

           }

      else{
      goto Quantity;
        }
      }

    catch(const char* msg){
        cout<<msg<<endl;
        goto mobileNo;
    }

   Quantity:

    cout<<"$ Enter The No Of Quantity : ";
    cin>>quantity;
    cout<<endl;
    cout<<endl;
    cout<<"<-----------Your Bill----------->"<<endl;
    cout<<endl;
    cout<<"$ Thank You "<<name<<" You Purchase "<<mobile_name<<"."<<endl;
    cout<<"$ The One Item Price Is "<<mobile_price<<" /- And You Perches "<<quantity<<" Item."<<endl;
    cout<<"$ Your Total Bill Amount After 5% Discount Is "<<((mobile_price)*(quantity) - (mobile_price)*(quantity)*(0.05))<<" /-"<<endl; 
    cout<<endl;
    mobile_phone m(mobile_price , mobile_name);
    cout<<endl;
    cout<<endl;
   
    ofstream out;
    out.open("UserData.txt",ios:: out |ios::app);

    if(!out.is_open()){
       cout<<"$ Thank You.";
    }

    out<<"Customer Name : "<<name<<endl;
    out<<"Mobile No.    : "<<mobile_no<<endl;
    out<<"Mobile Name   : "<<mobile_name<<endl;
    out<<"Mobile Price  : "<<mobile_price<<" /-"<<endl;
    out<<endl;

    cout<<"$ Thank You For Purchase Mobile From YC Shop."<<endl;
    out.close();

    cout<<endl;
    cout<<endl;  

 }
