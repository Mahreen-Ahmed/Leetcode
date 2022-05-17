class Solution {
public:
    string intToRoman(int num) {
     string output;
   std::vector<string> v{"0","I","II","III", "IV", "V", "VI", "VII", "VIII", "IX"} ;
   //int num=20;
   int thousands=num/1000;
   num=num%1000;
   int hundreds=num/100;
   num=num%100;
   int tens=num/10;
   num=num%10;
   int units=num/1;
   if(thousands!=0){
       switch(thousands){
           case 1:
           output+="M";break;
            case 2:
           output+="MM";break;
            case 3:
           output+="MMM";break;
           
       }
   }
    if(hundreds!=0){
       if(hundreds==4){
           output+="CD";
           
       }
       else if(hundreds==9){
           output+="CM";
       }
       else{
          switch(hundreds){
              case 1:output+="C";break;
               case 2:output+="CC";break;
                case 3:output+="CCC";break;
                 case 5:output+="D";break;
                  case 6:output+="DC";break;
                   case 7:output+="DCC";break;
                    case 8:output+="DCCC";break;
                    
          }
       }
       
   }
    if (tens!=0){
    //  
    
    switch(tens){
        case 1:output+="X";break;
        case 2:output+="XX";break;
        case 3:output+="XXX";break;
        case 4: output+="XL";break;
        case 5: output+="L";break;
        case 6:output+="LX";break;
            case 7:output+="LXX";break;
        case 8:output+="LXXX";break;
        case 9: output+="XC";break;
        
    }
  
   }
   if(units !=0){
       for(int i=1;i<v.size();i++){
           if( units == i){
           output+=v[i];
           break;
           }
       }
   }
   
   
   return output;
    }
};