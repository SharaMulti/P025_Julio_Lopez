/* Amerike university
     Author: Julio López
     Date: 25/04/25
     Practice #: 25
     Description: This program shall use constructors to show data, but this time one wont use a argument*/
 
     #include <iostream>
     using namespace std;

     class Head
     {
     private:
     string Color; 
     double Lenght;

     public:
     
     Head(string ColorX = "Black", double LenghtX = .62)
     {
        Color = ColorX;
        Lenght = LenghtX;
     }
     void setColor(string Color1)
     {
        Color = Color1;
     }
     string getColor()
     {
        return Color;
     }
     void setLenght(double Lenght1)
     {
        Lenght = Lenght1;
     }
     double getLenght()
     {
        return Lenght;
     }
    };

     class Body
     {
        private:
        string Skin;
        double Height;

        public:
        Body(string SkinX = "White", double HeightX = 1.67)
        {
            Skin = SkinX;
            Height = HeightX;
         }
         void setSkin(string Skin1)
         {
            Skin = Skin1;
         }
         string getSkin()
         {
            return Skin;
         }
         void setHeight(double Height1)
         {
            Height = Height1;
         }
         double getHeight()
         {
            return Height;
         }

     };
    
     int main(){

        Head twin1;
        Head twin2;
        Body ttwin1;
        Body ttwin2;

     cout << twin1.getColor() << "\n";
     cout << twin1.getLenght() << "\n";
     cout << ttwin1.getSkin() << "\n";
     cout << ttwin1.getHeight() << "\n";
     cout << "\n";

     cout << twin2.getColor() << "\n";
     cout << twin2.getLenght() << "\n";
     cout << ttwin2.getSkin() << "\n";
     cout << ttwin2.getHeight() << "\n";
     cout << "\n";
    
    
     return 0;
    }