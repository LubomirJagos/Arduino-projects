#include <ArduinoSTL.h>
#include <vector>
using namespace std;

void Test_D13_Toggle(){
    /*feedback and shift regs. declarations */
    vector< bool > shiftRegister_406;
    bool shiftRegisterInitBool_406 = true;
    
    /* END feedback and shift regs declarations */
    bool wireUID_161_ = false;
    long wireUID_134_ = 13;
    bool wireUID_109_ = true;
    pinMode(wireUID_134_,wireUID_109_?OUTPUT:INPUT);
    /***** BEGIN WhileLoop ********/
    bool wireUID_803_ = false; //LoopEndRef.
    int iteratorUID_297 = 0; //loop iterator
    do{
        if (shiftRegisterInitBool_406){
            shiftRegister_406.push_back(wireUID_161_);
            shiftRegisterInitBool_406 = false;
        } //shift register init and get front value
        /*feedback and shift regs. declarations */
        
        /* END feedback and shift regs declarations */
        long wireUID_604_ = 3000;
        bool wireUID_504_;
        bool wireUID_425_ = shiftRegister_406.front(); shiftRegister_406.erase(shiftRegister_406.begin());
        long wireUID_401_ = wireUID_134_;
        digitalWrite(wireUID_401_,wireUID_425_?HIGH:LOW);
        wireUID_504_ = !wireUID_425_;
        delay(wireUID_604_);
        
        
         //C code
        
        shiftRegister_406.push_back(wireUID_504_); //output assgn.
        iteratorUID_297++; //iterator increment
    }while(!wireUID_803_); //negation because in LabVIEW it is when stop (oposite)
    
    /****** END WhileLoop */
    
    
    
}

void setup(){
    Test_D13_Toggle();
}
void loop(){
}
