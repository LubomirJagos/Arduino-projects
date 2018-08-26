#include <ArduinoSTL.h>
#include <vector>
using namespace std;

void ShiftReg_Test_1(){
    /*feedback and shift regs. declarations */
    vector<vector<long>> shiftRegister_377;
    bool shiftRegisterInitBool_377 = true;
    
    vector<vector<long>> shiftRegister_151;
    bool shiftRegisterInitBool_151 = true;
    
    /* END feedback and shift regs declarations */
    vector<long> wireUID_465_;
    vector<long> wireUID_256_ = vector<long>();
    long wireUID_620_ = 3;
    vector<long> wireUID_542_;
    vector<long> wireUID_259_;
    vector<long> wireUID_211_ = vector<long>();
    /**** BEGIN ForLoop *****/
    
    int iteratorUID_63 = 0; //loop iterator
    for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_620_; LVHardcodedCnt++){
        if (shiftRegisterInitBool_151){
            shiftRegister_151.push_back(wireUID_211_);
            shiftRegisterInitBool_151 = false;
        } // shift regs
        /*feedback and shift regs. declarations */
        vector<vector<long>> shiftRegister_467;
        bool shiftRegisterInitBool_467 = true;
        
        /* END feedback and shift regs declarations */
        long wireUID_589_ = 3;
        vector<long> wireUID_457_;
        vector<long> wireUID_353_ = vector<long>();
        vector<long> wireUID_146_;
        vector<long> wireUID_125_ = shiftRegister_151.front(); shiftRegister_151.erase(shiftRegister_151.begin());
        long wireUID_98_ = iteratorUID_63 /*Diagram owned wire terminal*/;
        wireUID_146_.insert(wireUID_146_.end(), wireUID_125_.begin(), wireUID_125_.end());
        wireUID_146_.insert(wireUID_146_.end(), wireUID_98_);
        /**** BEGIN ForLoop *****/
        
        int iteratorUID_290 = 0; //loop iterator
        for (int LVHardcodedCnt = 0;  LVHardcodedCnt < wireUID_589_; LVHardcodedCnt++){
            if (shiftRegisterInitBool_467){
                shiftRegister_467.push_back(wireUID_353_);
                shiftRegisterInitBool_467 = false;
            } // shift regs
            /*feedback and shift regs. declarations */
            
            /* END feedback and shift regs declarations */
            long wireUID_429_ = iteratorUID_290 /*Diagram owned wire terminal*/;
            vector<long> wireUID_416_;
            vector<long> wireUID_383_ = shiftRegister_467.front(); shiftRegister_467.erase(shiftRegister_467.begin());
            wireUID_416_.insert(wireUID_416_.end(), wireUID_383_.begin(), wireUID_383_.end());
            wireUID_416_.insert(wireUID_416_.end(), wireUID_429_);
             /* C code*/
            
            shiftRegister_467.push_back(wireUID_416_); /* output assignements */
            iteratorUID_290++; //iterator increment
        }
        wireUID_457_ = shiftRegister_467.front();
        /***** END ForLoop ******/
         /* C code*/
        wireUID_542_ = wireUID_457_;
        shiftRegister_151.push_back(wireUID_146_); /* output assignements */
        iteratorUID_63++; //iterator increment
    }
    wireUID_259_ = shiftRegister_151.front();
    /***** END ForLoop ******/
    /***** BEGIN WhileLoop ********/
    bool wireUID_120_ = false; //LoopEndRef.
    int iteratorUID_91 = 0; //loop iterator
    do{
        if (shiftRegisterInitBool_377){
            shiftRegister_377.push_back(wireUID_256_);
            shiftRegisterInitBool_377 = false;
        } //shift register init and get front value
        /*feedback and shift regs. declarations */
        
        /* END feedback and shift regs declarations */
        long wireUID_533_ = iteratorUID_91 /*Diagram owned wire terminal*/;
        vector<long> wireUID_361_;
        vector<long> wireUID_300_ = shiftRegister_377.front(); shiftRegister_377.erase(shiftRegister_377.begin());
        wireUID_361_.insert(wireUID_361_.end(), wireUID_300_.begin(), wireUID_300_.end());
        wireUID_361_.insert(wireUID_361_.end(), wireUID_533_);
         //C code
        
        shiftRegister_377.push_back(wireUID_361_); //output assgn.
        iteratorUID_91++; //iterator increment
    }while(!wireUID_120_); //negation because in LabVIEW it is when stop (oposite)
    wireUID_465_ = shiftRegister_377.front();
    /****** END WhileLoop */
    
}

void setup(){}
void loop(){
    ShiftReg_Test_1();
}
