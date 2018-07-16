#include <ArduinoSTL.h>
#include <vector>
#include <MPU6050.h>
using namespace std;
MPU6050 LVgen_mpu;

void Test_MPU6050_1(){
    unsigned short wireUID_343_ = 0;
    unsigned short wireUID_310_ = 0;
    unsigned int wireUID_277_ = 104;
    long wireUID_3051_ = 115200;
    Serial.begin(wireUID_3051_);
    LVgen_mpu.begin(wireUID_343_, wireUID_310_, wireUID_277_);
    /***** BEGIN WhileLoop ********/
    bool wireUID_2935_ = false; //LoopEndRef.
    int iteratorUID_2656 = 0; //loop iterator
    do{
     //shift register init and get front value
        String wireUID_2899_ = " ";
        String wireUID_2902_;
        String wireUID_2905_;
        String wireUID_2908_;
        String wireUID_2911_;
        long wireUID_2917_ = 10;
        double wireUID_2926_;
        double wireUID_2929_;
        double wireUID_2932_;
        Vector wireUID_2938_;
        wireUID_2938_ = LVgen_mpu.readNormalizeAccel();
        wireUID_2932_ = *(double*) ((void*) &wireUID_2938_ + 0);
        wireUID_2929_ = *(double*) ((void*) &wireUID_2938_ + sizeof(double));
        wireUID_2926_ = *(double*) ((void*) &wireUID_2938_ + sizeof(double) + sizeof(double));
        
        wireUID_2911_ = String(wireUID_2932_);
        wireUID_2908_ = String(wireUID_2929_);
        wireUID_2905_ = String(wireUID_2926_);
        wireUID_2902_ = wireUID_2911_ + wireUID_2899_ + wireUID_2908_ + wireUID_2899_ + wireUID_2905_;
        Serial.println(wireUID_2902_);
        delay(wireUID_2917_);
         //C code
        
         //output assgn.
        iteratorUID_2656++; //iterator increment
    }while(!wireUID_2935_); //negation because in LabVIEW it is when stop (oposite)
    /****** END WhileLoop */
    
}

void setup(){}
void loop(){
    Test_MPU6050_1();
}
