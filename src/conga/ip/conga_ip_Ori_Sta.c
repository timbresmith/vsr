
#include "conga_ip_Ori_Sta.h"


double * conga_ip_99_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_99_2(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_99_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_99_4(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_99_5(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_99_6(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[8] * b[0] ;
	
	
	//_e13
	r[1] = a[7] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[6] * b[0] ;
	
	
	//_e1no
	r[3] = a[5] * b[0] ;
	
	
	//_e2no
	r[4] = a[4] * b[0]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[0] ;
	
	
	//_e12noni
	r[6] = a[2] * b[0] ;
	
	
	//_e13noni
	r[7] = a[1] * b[0]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_99_7(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_99_8(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_99_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_99_10(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[4]  * -1  + a[7] * b[0]  * -1  + a[8] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[4]  + a[6] * b[0]  + a[8] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[4]  * -1  + a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_no
	r[3] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[3] ;
	
	
	//_e13no
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	//_e12ni
	r[7] = a[2] * b[4] ;
	
	
	//_e13ni
	r[8] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[4] ;
	
	
	//_e1noni
	r[10] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_99_11(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_99_12(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_99_13(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e1ni
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_99_14(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[0] ;
	
	
	//_e3
	r[2] = a[3] * b[0]  * -1 ;
	
	
	//_e12ni
	r[3] = a[2] * b[0] ;
	
	
	//_e13ni
	r[4] = a[1] * b[0]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_99_15(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_99_16(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_99_17(double * a, double * b, double *r) { 
	
	//_e12no
	r[0] = a[2] * b[0] ;
	
	
	//_e13no
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23no
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_99_18(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e1ni
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_19(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1  + a[7] * b[0]  * -1  + a[8] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3]  + a[6] * b[0]  + a[8] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1  + a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_no
	r[3] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[3] ;
	
	
	//_e13ni
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	//_e1noni
	r[7] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_99_20(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_99_21(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_22(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_99_23(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_99_24(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_99_25(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_99_26(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_99_27(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_28(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_99_29(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_99_30(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_99_31(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_99_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[7]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12ni
	r[4] = a[2] * b[7] ;
	
	
	//_e13ni
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_99_33(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_99_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[11]  * -1  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[11]  + a[6] * b[8]  + a[8] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[11]  * -1  + a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_no
	r[3] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12ni
	r[5] = a[2] * b[11] ;
	
	
	//_e13ni
	r[6] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[11] ;
	
	
	//_e1noni
	r[8] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_99_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[7] * b[5]  * -1  + a[8] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[6] * b[5]  + a[8] * b[7]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[6] * b[6]  + a[7] * b[7] ;
	
	
	//_no
	r[3] = a[3] * b[5]  * -1  + a[4] * b[6]  * -1  + a[5] * b[7]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_99_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12no
	r[4] = a[2] * b[7] ;
	
	
	//_e13no
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_99_37(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_99_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[6] * b[11]  + a[8] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[6] * b[12]  + a[7] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e1noni
	r[5] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_99_39(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_99_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[15]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[15]  + a[6] * b[11]  + a[8] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[15]  * -1  + a[6] * b[12]  + a[7] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12no
	r[5] = a[2] * b[14] ;
	
	
	//_e13no
	r[6] = a[1] * b[14]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[14] ;
	
	
	//_e12ni
	r[8] = a[2] * b[15] ;
	
	
	//_e13ni
	r[9] = a[1] * b[15]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[15] ;
	
	
	//_e1noni
	r[11] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_99_41(double * a, double * b, double *r) { 
	
	//_e1no
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_99_42(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3] ;
	
	
	//_e1ni
	r[1] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_99_43(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[1]  * -1  + a[8] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[1]  + a[8] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[2]  + a[7] * b[3] ;
	
	
	//_no
	r[3] = a[3] * b[1]  * -1  + a[4] * b[2]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_99_44(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7] ;
	
	
	//_e1no
	r[1] = a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  + a[2] * b[4]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  + a[1] * b[4] ;
	
	
	//_e1ni
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_99_45(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_e12
	r[1] = a[8] * b[3] ;
	
	
	//_e13
	r[2] = a[7] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[3] ;
	
	
	//_e1no
	r[4] = a[5] * b[3] ;
	
	
	//_e2no
	r[5] = a[4] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[3] ;
	
	
	//_noni
	r[7] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12noni
	r[8] = a[2] * b[3] ;
	
	
	//_e13noni
	r[9] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_99_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10] ;
	
	
	//_e12
	r[1] = a[2] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11] ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_99_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13] ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[8] * b[15] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[7] * b[15]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[6] * b[15] ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[5] * b[15] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1  + a[4] * b[15]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7]  + a[3] * b[15] ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	//_e12noni
	r[11] = a[2] * b[15] ;
	
	
	//_e13noni
	r[12] = a[1] * b[15]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[15] ;
	
	
	return r;
}

double * conga_ip_99_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[11]  * -1  + a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[11]  + a[6] * b[7]  + a[8] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[11]  * -1  + a[6] * b[8]  + a[7] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[5] = a[2] * b[10] ;
	
	
	//_e13no
	r[6] = a[1] * b[10]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[2] * b[11] ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[11] ;
	
	
	//_e1noni
	r[11] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_99_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12no
	r[5] = a[2] * b[10] ;
	
	
	//_e13no
	r[6] = a[1] * b[10]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[2] * b[11] ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_99_50(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12ni
	r[4] = a[2] * b[3] ;
	
	
	//_e13ni
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_99_51(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12no
	r[1] = a[2] * b[3] ;
	
	
	//_e13no
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_99_52(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e12
	r[1] = a[8] * b[7] ;
	
	
	//_e13
	r[2] = a[7] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[7] ;
	
	
	//_e1no
	r[4] = a[5] * b[7] ;
	
	
	//_e2no
	r[5] = a[4] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[7] ;
	
	
	//_e1ni
	r[7] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_noni
	r[10] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12noni
	r[11] = a[2] * b[7] ;
	
	
	//_e13noni
	r[12] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_99_53(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[7]  * -1  + a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[7]  + a[6] * b[4]  + a[8] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1  + a[6] * b[5]  + a[7] * b[6] ;
	
	
	//_no
	r[3] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12ni
	r[5] = a[2] * b[7] ;
	
	
	//_e13ni
	r[6] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[7] ;
	
	
	//_e1noni
	r[8] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_99_54(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	//_e1ni
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_99_55(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_99_56(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_99_57(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_noni
	r[1] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_99_58(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7] ;
	
	
	//_noni
	r[1] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_ip_99_59(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[8] * b[3] ;
	
	
	//_e13
	r[2] = a[7] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[3] ;
	
	
	//_e1no
	r[4] = a[5] * b[3] ;
	
	
	//_e2no
	r[5] = a[4] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[3] ;
	
	
	//_e1ni
	r[7] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e12noni
	r[10] = a[2] * b[3] ;
	
	
	//_e13noni
	r[11] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_99_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	//_e1ni
	r[1] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_noni
	r[4] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	return r;
}

double * conga_ip_99_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[14]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[14]  + a[6] * b[11]  + a[8] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[14]  * -1  + a[6] * b[12]  + a[7] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12ni
	r[5] = a[2] * b[14] ;
	
	
	//_e13ni
	r[6] = a[1] * b[14]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[14] ;
	
	
	//_e1noni
	r[8] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_99_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[8] * b[14] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[7] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[6] * b[14] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[5] * b[14] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[4] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[14] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12noni
	r[11] = a[2] * b[14] ;
	
	
	//_e13noni
	r[12] = a[1] * b[14]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_99_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[10]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[10]  + a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[10]  * -1  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[5] = a[2] * b[9] ;
	
	
	//_e13no
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[9] ;
	
	
	//_e12ni
	r[8] = a[2] * b[10] ;
	
	
	//_e13ni
	r[9] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[10] ;
	
	
	//_e1noni
	r[11] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_99_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[6] * b[8]  + a[8] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_99_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[8] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[7] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[6] * b[10] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[5] * b[10] ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[10] ;
	
	
	//_noni
	r[7] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12noni
	r[8] = a[2] * b[10] ;
	
	
	//_e13noni
	r[9] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_99_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[6] ;
	
	
	//_e13no
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e1noni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_67(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[1]  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e1ni
	r[1] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_noni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_99_68(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[6]  * -1  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[6]  + a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[3] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12ni
	r[5] = a[2] * b[6] ;
	
	
	//_e13ni
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[6] ;
	
	
	//_e1noni
	r[8] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_69(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12ni
	r[4] = a[2] * b[6] ;
	
	
	//_e13ni
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_99_70(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6] ;
	
	
	//_e1ni
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_99_71(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3] ;
	
	
	//_e1ni
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_99_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9]  + a[7] * b[10]  + a[8] * b[11] ;
	
	
	//_e12
	r[1] = a[2] * b[12]  + a[8] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[12]  * -1  + a[7] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[12]  + a[6] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[5] * b[13] ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[13] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_noni
	r[10] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e12noni
	r[11] = a[2] * b[13] ;
	
	
	//_e13noni
	r[12] = a[1] * b[13]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_99_73(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[0]  + a[8] * b[1] ;
	
	
	//_e13
	r[1] = a[1] * b[0]  * -1  + a[7] * b[1]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0]  + a[6] * b[1] ;
	
	
	//_e1no
	r[3] = a[5] * b[1] ;
	
	
	//_e2no
	r[4] = a[4] * b[1]  * -1 ;
	
	
	//_e3no
	r[5] = a[3] * b[1] ;
	
	
	//_e12noni
	r[6] = a[2] * b[1] ;
	
	
	//_e13noni
	r[7] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_99_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[7]  * -1  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[7]  + a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[7]  * -1  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[6] ;
	
	
	//_e13no
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[2] * b[7] ;
	
	
	//_e13ni
	r[8] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[7] ;
	
	
	//_e1noni
	r[10] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[6] * b[9]  + a[8] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[10]  + a[7] * b[11] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e1noni
	r[5] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_99_76(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e1ni
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_noni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_99_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[6]  * -1  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[6]  + a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[6]  * -1  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e12ni
	r[4] = a[2] * b[6] ;
	
	
	//_e13ni
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6] ;
	
	
	//_e1noni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_78(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e1noni
	r[5] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_99_79(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_noni
	r[1] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_99_80(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_noni
	r[1] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_81(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_99_83(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3]  + a[8] * b[4] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1  + a[7] * b[4]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3]  + a[6] * b[4] ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[4] ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[4]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[4] ;
	
	
	//_e12noni
	r[6] = a[2] * b[4] ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_99_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9] ;
	
	
	//_e12
	r[1] = a[2] * b[10]  + a[8] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1  + a[7] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  + a[6] * b[11] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[5] * b[11] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[11] ;
	
	
	//_noni
	r[7] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12noni
	r[8] = a[2] * b[11] ;
	
	
	//_e13noni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_99_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[6] * b[8]  + a[8] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[11] ;
	
	
	//_e13no
	r[5] = a[1] * b[11]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[11] ;
	
	
	//_e1noni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_99_86(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_99_87(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[8] * b[3] ;
	
	
	//_e13
	r[1] = a[7] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[6] * b[3] ;
	
	
	//_e1no
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[3] ;
	
	
	//_e2no
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_e3no
	r[5] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[3] ;
	
	
	//_e12noni
	r[6] = a[2] * b[3] ;
	
	
	//_e13noni
	r[7] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_99_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	//_e1no
	r[1] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_noni
	r[4] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	return r;
}

double * conga_ip_99_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[7] * b[11]  * -1  + a[8] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[6] * b[11]  + a[8] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[6] * b[12]  + a[7] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1  + a[5] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12no
	r[5] = a[2] * b[14] ;
	
	
	//_e13no
	r[6] = a[1] * b[14]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[14] ;
	
	
	//_e1noni
	r[8] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_99_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[8] * b[14] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[7] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[6] * b[14] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[5] * b[14] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[4] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[14] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12noni
	r[11] = a[2] * b[14] ;
	
	
	//_e13noni
	r[12] = a[1] * b[14]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_99_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[10]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[10]  + a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[10]  * -1  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[9] ;
	
	
	//_e13no
	r[5] = a[1] * b[9]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[9] ;
	
	
	//_e12ni
	r[7] = a[2] * b[10] ;
	
	
	//_e13ni
	r[8] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[10] ;
	
	
	//_e1noni
	r[10] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_99_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[6] * b[8]  + a[8] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_no
	r[3] = a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e1noni
	r[5] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_99_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[8] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[7] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[6] * b[10] ;
	
	
	//_e1no
	r[4] = a[5] * b[10] ;
	
	
	//_e2no
	r[5] = a[4] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[10] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12noni
	r[11] = a[2] * b[10] ;
	
	
	//_e13noni
	r[12] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_99_94(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_99_95(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[4] = a[2] * b[6] ;
	
	
	//_e13no
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_99_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9] ;
	
	
	//_e12
	r[1] = a[2] * b[10]  + a[8] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1  + a[7] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  + a[6] * b[11] ;
	
	
	//_e1no
	r[4] = a[5] * b[11] ;
	
	
	//_e2no
	r[5] = a[4] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[11] ;
	
	
	//_e1ni
	r[7] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12noni
	r[11] = a[2] * b[11] ;
	
	
	//_e13noni
	r[12] = a[1] * b[11]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_99_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9] ;
	
	
	//_e1no
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_noni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_99_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[9] ;
	
	
	//_e13no
	r[5] = a[1] * b[9]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[9] ;
	
	
	//_e1noni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_99_99(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_noni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_99_100(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7]  + a[7] * b[8]  + a[8] * b[9] ;
	
	
	//_e1ni
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_noni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_99_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[9]  * -1  + a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[9]  + a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[9]  * -1  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12ni
	r[5] = a[2] * b[9] ;
	
	
	//_e13ni
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[9] ;
	
	
	//_e1noni
	r[8] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_99_102(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[3]  + a[8] * b[4] ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1  + a[7] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[6] * b[4] ;
	
	
	//_e1no
	r[4] = a[5] * b[4] ;
	
	
	//_e2no
	r[5] = a[4] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[4] ;
	
	
	//_e1ni
	r[7] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e12noni
	r[10] = a[2] * b[4] ;
	
	
	//_e13noni
	r[11] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_99_103(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[2]  + a[7] * b[3]  + a[8] * b[4] ;
	
	
	//_noni
	r[1] = a[0] * b[2]  + a[1] * b[3]  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_ip_99_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[7]  + a[8] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[8]  + a[7] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e1noni
	r[5] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_99_105(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e12
	r[1] = a[8] * b[9] ;
	
	
	//_e13
	r[2] = a[7] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[5] * b[9] ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[9] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e12noni
	r[10] = a[2] * b[9] ;
	
	
	//_e13noni
	r[11] = a[1] * b[9]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_99_106(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[4]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[3] ;
	
	
	//_e13no
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[3] ;
	
	
	//_e12ni
	r[6] = a[2] * b[4] ;
	
	
	//_e13ni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[4] ;
	
	
	return r;
}

double * conga_ip_99_107(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[6]  * -1  + a[8] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[6]  + a[8] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1  + a[5] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e1noni
	r[5] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_99_108(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e1ni
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_109(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	//_e12ni
	r[3] = a[2] * b[3] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_99_110(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1noni
	r[5] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_111(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	//_noni
	r[1] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_99_112(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[0]  + a[7] * b[1]  + a[8] * b[2] ;
	
	
	//_noni
	r[1] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_99_113(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[0]  * -1  + a[8] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[0]  + a[8] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_no
	r[3] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_99_114(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3] ;
	
	
	//_noni
	r[1] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_99_115(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_116(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[1]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[1] * b[0]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[0] ;
	
	
	//_e12ni
	r[6] = a[2] * b[1] ;
	
	
	//_e13ni
	r[7] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[8] = a[0] * b[1] ;
	
	
	return r;
}

double * conga_ip_99_117(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	//_ni
	r[1] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_99_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13] ;
	
	
	//_e1no
	r[1] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[4] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_noni
	r[7] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	return r;
}

double * conga_ip_99_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[13]  * -1  + a[7] * b[9]  * -1  + a[8] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[13]  + a[6] * b[9]  + a[8] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[13]  * -1  + a[6] * b[10]  + a[7] * b[11] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1  + a[5] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12no
	r[5] = a[2] * b[12] ;
	
	
	//_e13no
	r[6] = a[1] * b[12]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[12] ;
	
	
	//_e12ni
	r[8] = a[2] * b[13] ;
	
	
	//_e13ni
	r[9] = a[1] * b[13]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[13] ;
	
	
	//_e1noni
	r[11] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_99_120(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[6]  + a[8] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1  + a[7] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[6] * b[7] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[7] ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[7] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e12noni
	r[10] = a[2] * b[7] ;
	
	
	//_e13noni
	r[11] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_99_121(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9]  + a[7] * b[10]  + a[8] * b[11] ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_noni
	r[7] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11] ;
	
	
	return r;
}

double * conga_ip_99_122(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[1] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_123(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e1no
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_124(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e1no
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_noni
	r[7] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_99_125(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[0]  * -1  + a[8] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[0]  + a[8] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_no
	r[3] = a[3] * b[0]  * -1  + a[4] * b[1]  * -1  + a[5] * b[2]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[3] ;
	
	
	//_e13no
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	//_e1noni
	r[7] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_99_126(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e1no
	r[1] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_99_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13] ;
	
	
	//_e12
	r[1] = a[2] * b[14] ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14] ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	return r;
}

double * conga_ip_99_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[14]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[14]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[14]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12no
	r[5] = a[2] * b[13] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[2] * b[14] ;
	
	
	//_e13ni
	r[9] = a[1] * b[14]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[14] ;
	
	
	//_e1noni
	r[11] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_99_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[8] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[7] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[6] * b[10] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[10] ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[10] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12noni
	r[11] = a[2] * b[10] ;
	
	
	//_e13noni
	r[12] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_99_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[13]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[13]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[13]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12ni
	r[5] = a[2] * b[13] ;
	
	
	//_e13ni
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[13] ;
	
	
	//_e1noni
	r[8] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_99_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	return r;
}

double * conga_ip_99_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_99_134(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_99_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e12
	r[1] = a[2] * b[13] ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	return r;
}

double * conga_ip_99_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[14]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[14]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[14]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12no
	r[5] = a[2] * b[13] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[2] * b[14] ;
	
	
	//_e13ni
	r[9] = a[1] * b[14]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[14] ;
	
	
	//_e1noni
	r[11] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_99_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[11]  + a[7] * b[12]  + a[8] * b[13] ;
	
	
	//_e12
	r[1] = a[8] * b[14] ;
	
	
	//_e13
	r[2] = a[7] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[14] ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[5] * b[14] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1  + a[4] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7]  + a[3] * b[14] ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	//_e12noni
	r[11] = a[2] * b[14] ;
	
	
	//_e13noni
	r[12] = a[1] * b[14]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_99_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8] ;
	
	
	//_e12
	r[1] = a[8] * b[9] ;
	
	
	//_e13
	r[2] = a[7] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[9] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[9] ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[9] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12noni
	r[11] = a[2] * b[9] ;
	
	
	//_e13noni
	r[12] = a[1] * b[9]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_99_139(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[7]  * -1  + a[8] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[7]  + a[8] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[8]  + a[7] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1  + a[5] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e1noni
	r[5] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_99_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12no
	r[5] = a[2] * b[13] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e1noni
	r[8] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_99_141(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[4] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_99_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[6]  + a[8] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1  + a[7] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[6] * b[7] ;
	
	
	//_e1no
	r[4] = a[5] * b[7] ;
	
	
	//_e2no
	r[5] = a[4] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[7] ;
	
	
	//_noni
	r[7] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12noni
	r[8] = a[2] * b[7] ;
	
	
	//_e13noni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_99_143(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_99_144(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12
	r[1] = a[8] * b[6] ;
	
	
	//_e13
	r[2] = a[7] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[6] ;
	
	
	//_e1no
	r[4] = a[5] * b[6] ;
	
	
	//_e2no
	r[5] = a[4] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[3] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_noni
	r[10] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12noni
	r[11] = a[2] * b[6] ;
	
	
	//_e13noni
	r[12] = a[1] * b[6]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_99_145(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[4]  + a[8] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[5]  + a[7] * b[6] ;
	
	
	//_no
	r[3] = a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1noni
	r[5] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_99_146(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_99_148(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_149(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e12no
	r[3] = a[2] * b[3] ;
	
	
	//_e13no
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_99_150(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1no
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[4]  + a[8] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[5]  + a[7] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[7] ;
	
	
	//_e13no
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[7] ;
	
	
	//_e1noni
	r[7] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_99_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e12
	r[1] = a[8] * b[7] ;
	
	
	//_e13
	r[2] = a[7] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[7] ;
	
	
	//_e1no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[7] ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[7] ;
	
	
	//_noni
	r[7] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12noni
	r[8] = a[2] * b[7] ;
	
	
	//_e13noni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_99_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8]  + a[7] * b[9]  + a[8] * b[10] ;
	
	
	//_e12
	r[1] = a[8] * b[11] ;
	
	
	//_e13
	r[2] = a[7] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[11] ;
	
	
	//_e1no
	r[4] = a[1] * b[2]  * -1  + a[2] * b[3]  * -1  + a[5] * b[11] ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  + a[2] * b[4]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  + a[1] * b[4]  + a[3] * b[11] ;
	
	
	//_e1ni
	r[7] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_noni
	r[10] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	//_e12noni
	r[11] = a[2] * b[11] ;
	
	
	//_e13noni
	r[12] = a[1] * b[11]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_99_154(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[5] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[4] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[5] = a[2] * b[6] ;
	
	
	//_e13no
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[2] * b[7] ;
	
	
	//_e13ni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_99_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6] ;
	
	
	//_e1no
	r[1] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_noni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_99_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[3]  * -1  + a[8] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[3]  + a[8] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  * -1  + a[5] * b[5]  * -1 ;
	
	
	//_e12no
	r[4] = a[2] * b[6] ;
	
	
	//_e13no
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e1noni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[8]  * -1  + a[8] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[8]  + a[8] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e1noni
	r[5] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[6] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[7] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_99_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[8] ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[8] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[7] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[6] * b[10] ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[5] * b[10] ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[10] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e12noni
	r[10] = a[2] * b[10] ;
	
	
	//_e13noni
	r[11] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[10] ;
	
	
	return r;
}

double * conga_ip_99_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[5] * b[13]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[4] * b[13]  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[13]  * -1  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12ni
	r[5] = a[2] * b[13] ;
	
	
	//_e13ni
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[13] ;
	
	
	//_e1noni
	r[8] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_99_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e12
	r[1] = a[8] * b[13] ;
	
	
	//_e13
	r[2] = a[7] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[5] * b[13] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[13] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12noni
	r[11] = a[2] * b[13] ;
	
	
	//_e13noni
	r[12] = a[1] * b[13]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_99_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10]  + a[7] * b[11]  + a[8] * b[12] ;
	
	
	//_e12
	r[1] = a[8] * b[13] ;
	
	
	//_e13
	r[2] = a[7] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[13] ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[5] * b[13] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[13] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12noni
	r[11] = a[2] * b[13] ;
	
	
	//_e13noni
	r[12] = a[1] * b[13]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_99_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[7] * b[10]  * -1  + a[8] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[6] * b[10]  + a[8] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1  + a[5] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12no
	r[5] = a[2] * b[13] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e1noni
	r[8] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_99_163(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[4]  * -1  + a[8] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[4]  + a[8] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[6] * b[5]  + a[7] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_99_164(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[6] * b[3]  + a[7] * b[4]  + a[8] * b[5] ;
	
	
	//_e12
	r[1] = a[8] * b[6] ;
	
	
	//_e13
	r[2] = a[7] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[6] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[5] * b[6] ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[6] ;
	
	
	//_noni
	r[7] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12noni
	r[8] = a[2] * b[6] ;
	
	
	//_e13noni
	r[9] = a[1] * b[6]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_99_165(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[3]  + a[4] * b[4]  + a[5] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_166(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[1] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_99_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[19]  + a[4] * b[20]  + a[5] * b[21]  + a[6] * b[22]  + a[7] * b[23]  + a[8] * b[24] ;
	
	
	//_e1
	r[1] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[5] * b[30]  * -1  + a[7] * b[26]  * -1  + a[8] * b[27]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[4] * b[30]  + a[6] * b[26]  + a[8] * b[28]  * -1 ;
	
	
	//_e3
	r[3] = a[0] * b[7]  + a[1] * b[8]  + a[3] * b[30]  * -1  + a[6] * b[27]  + a[7] * b[28] ;
	
	
	//_no
	r[4] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11]  + a[3] * b[26]  * -1  + a[4] * b[27]  * -1  + a[5] * b[28]  * -1 ;
	
	
	//_ni
	r[5] = a[0] * b[12]  + a[1] * b[13]  + a[2] * b[14] ;
	
	
	//_e12
	r[6] = a[2] * b[25]  + a[8] * b[31] ;
	
	
	//_e13
	r[7] = a[1] * b[25]  * -1  + a[7] * b[31]  * -1 ;
	
	
	//_e23
	r[8] = a[0] * b[25]  + a[6] * b[31] ;
	
	
	//_e1no
	r[9] = a[1] * b[16]  * -1  + a[2] * b[17]  * -1  + a[5] * b[31] ;
	
	
	//_e2no
	r[10] = a[0] * b[16]  + a[2] * b[18]  * -1  + a[4] * b[31]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[17]  + a[1] * b[18]  + a[3] * b[31] ;
	
	
	//_e1ni
	r[12] = a[1] * b[19]  * -1  + a[2] * b[20]  * -1 ;
	
	
	//_e2ni
	r[13] = a[0] * b[19]  + a[2] * b[21]  * -1 ;
	
	
	//_e3ni
	r[14] = a[0] * b[20]  + a[1] * b[21] ;
	
	
	//_noni
	r[15] = a[0] * b[22]  + a[1] * b[23]  + a[2] * b[24] ;
	
	
	//_e12no
	r[16] = a[2] * b[29] ;
	
	
	//_e13no
	r[17] = a[1] * b[29]  * -1 ;
	
	
	//_e23no
	r[18] = a[0] * b[29] ;
	
	
	//_e12ni
	r[19] = a[2] * b[30] ;
	
	
	//_e13ni
	r[20] = a[1] * b[30]  * -1 ;
	
	
	//_e23ni
	r[21] = a[0] * b[30] ;
	
	
	//_e1noni
	r[22] = a[1] * b[26]  * -1  + a[2] * b[27]  * -1 ;
	
	
	//_e2noni
	r[23] = a[0] * b[26]  + a[2] * b[28]  * -1 ;
	
	
	//_e3noni
	r[24] = a[0] * b[27]  + a[1] * b[28] ;
	
	
	//_e12noni
	r[25] = a[2] * b[31] ;
	
	
	//_e13noni
	r[26] = a[1] * b[31]  * -1 ;
	
	
	//_e23noni
	r[27] = a[0] * b[31] ;
	
	
	return r;
}


