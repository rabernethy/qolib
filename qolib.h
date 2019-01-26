#define DEBUG
#ifndef _qolib_h
#define _qolib_h
#define max(a,b) \
 ({ __typeof__ (a) _a = (a); \
 __typeof__ (b) _b = (b); \
 _a > _b ? _a : _b; })
#define min(a,b) \
 ({ __typeof__ (a) _a = (a); \
 __typeof__ (b) _b = (b); \
 _a < _b ? _a : _b; })


//When we have a reference this needs to be front page
typedef union qol_num {
	//Unions require knowing the type, though every
	//generic in C requires knowing the type 
	int i; //stores 4 bytes -2 mil to +2 mil
	int f; //stores 4 bytes including point

	//Next 2 are 8 bytes, useful but maybe make it a toggle using define
	//problem with having these in the union means that no matter
	//what is stored the size allocated will always be 8 bytes
	long long int lli; 	//Stores an 8 bit integer
	double d;						//Stores an 8 bit float
} qol_num;

void qol_cab(char * msg);

qol_num * stopwatch( int (*f)() ,double test_num);

void print_array(int * i);


#ifdef DEBUG
//Debug only functions here
#endif

#endif
