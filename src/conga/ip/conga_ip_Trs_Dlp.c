
#include "conga_ip_Trs_Dlp.h"


double * conga_ip_70_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_70_2(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_70_3(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_70_4(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_70_5(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_70_6(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[6] * b[0]  * -1 ;
	
	
	//_e2ni
	r[1] = a[5] * b[0] ;
	
	
	//_e3ni
	r[2] = a[4] * b[0]  * -1 ;
	
	
	//_e12noni
	r[3] = a[2] * b[0] ;
	
	
	//_e13noni
	r[4] = a[1] * b[0]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[0] ;
	
	
	//_e123ni
	r[6] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_70_7(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_70_8(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_70_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[3] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[8] ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_70_10(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12no
	r[4] = a[2] * b[3] ;
	
	
	//_e13no
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	//_e12ni
	r[7] = a[2] * b[4]  + a[3] * b[0]  * -1 ;
	
	
	//_e13ni
	r[8] = a[1] * b[4]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[4]  + a[3] * b[2]  * -1 ;
	
	
	//_e1noni
	r[10] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e123
	r[13] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_70_11(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_70_12(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_70_13(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_70_14(double * a, double * b, double *r) { 
	
	//_e12ni
	r[0] = a[2] * b[0] ;
	
	
	//_e13ni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23ni
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_70_15(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_70_16(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_70_17(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[5] * b[0] ;
	
	
	//_e3
	r[2] = a[4] * b[0]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[0] ;
	
	
	//_e13no
	r[4] = a[1] * b[0]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[0] ;
	
	
	//_e123
	r[6] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_70_18(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e2ni
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3ni
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5] ;
	
	
	//_noni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_70_19(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12ni
	r[1] = a[2] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e13ni
	r[2] = a[1] * b[3]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_70_20(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_70_21(double * a, double * b, double *r) { 
	
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

double * conga_ip_70_22(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_70_23(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_70_24(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_70_25(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_70_26(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_70_27(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_70_28(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_70_29(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_70_30(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_70_31(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_70_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
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

double * conga_ip_70_33(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_70_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  * -1  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10] ;
	
	
	//_e12ni
	r[4] = a[2] * b[11]  + a[3] * b[8]  * -1 ;
	
	
	//_e13ni
	r[5] = a[1] * b[11]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[11]  + a[3] * b[10]  * -1 ;
	
	
	//_e1noni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_70_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_ni
	r[3] = a[3] * b[4]  * -1  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7] ;
	
	
	//_e12ni
	r[4] = a[3] * b[5]  * -1 ;
	
	
	//_e13ni
	r[5] = a[3] * b[6]  * -1 ;
	
	
	//_e23ni
	r[6] = a[3] * b[7]  * -1 ;
	
	
	//_e1noni
	r[7] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_70_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5]  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6]  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12no
	r[4] = a[2] * b[7] ;
	
	
	//_e13no
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[7] ;
	
	
	//_e123
	r[7] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_70_37(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_70_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  * -1  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13] ;
	
	
	//_e12ni
	r[5] = a[3] * b[11]  * -1 ;
	
	
	//_e13ni
	r[6] = a[3] * b[12]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[13]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_70_39(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	//_ni
	r[4] = a[3] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_70_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[6] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5]  + a[5] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6]  + a[4] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  * -1  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13] ;
	
	
	//_e12no
	r[5] = a[2] * b[14] ;
	
	
	//_e13no
	r[6] = a[1] * b[14]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[14] ;
	
	
	//_e12ni
	r[8] = a[2] * b[15]  + a[3] * b[11]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[15]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[15]  + a[3] * b[13]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	//_e123
	r[14] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_70_41(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3] ;
	
	
	//_e12
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_70_42(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_70_43(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3] ;
	
	
	//_e12ni
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e13ni
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e23ni
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_70_44(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[4] ;
	
	
	//_e12
	r[1] = a[3] * b[2]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[4]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  + a[2] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  + a[1] * b[4] ;
	
	
	//_e1ni
	r[7] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_70_45(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[3] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	//_e2ni
	r[1] = a[3] * b[1]  + a[5] * b[3] ;
	
	
	//_e3ni
	r[2] = a[3] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12noni
	r[4] = a[2] * b[3] ;
	
	
	//_e13noni
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[3] ;
	
	
	//_e123ni
	r[7] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_70_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7] ;
	
	
	//_e12
	r[1] = a[2] * b[11]  + a[3] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[11]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[11]  + a[3] * b[7]  * -1 ;
	
	
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

double * conga_ip_70_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7] ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[3] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[11]  + a[6] * b[15]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1  + a[3] * b[12]  + a[5] * b[15] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10]  + a[3] * b[13]  + a[4] * b[15]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	//_e12noni
	r[11] = a[2] * b[15] ;
	
	
	//_e13noni
	r[12] = a[1] * b[15]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[15] ;
	
	
	//_e123ni
	r[14] = a[3] * b[15] ;
	
	
	return r;
}

double * conga_ip_70_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  + a[6] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[1]  + a[5] * b[10] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  + a[4] * b[10]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  * -1  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9] ;
	
	
	//_e12no
	r[5] = a[2] * b[10] ;
	
	
	//_e13no
	r[6] = a[1] * b[10]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[2] * b[11]  + a[3] * b[7]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1  + a[3] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[11]  + a[3] * b[9]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	//_e123
	r[14] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_70_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[6] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5]  + a[5] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6]  + a[4] * b[10]  * -1 ;
	
	
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
	
	
	//_e123
	r[11] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_70_50(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12ni
	r[1] = a[2] * b[3] ;
	
	
	//_e13ni
	r[2] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_70_51(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  + a[6] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[1]  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12no
	r[4] = a[2] * b[3] ;
	
	
	//_e13no
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	//_e123
	r[7] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_70_52(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[6] * b[7]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5]  + a[5] * b[7] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6]  + a[4] * b[7]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12noni
	r[4] = a[2] * b[7] ;
	
	
	//_e13noni
	r[5] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[7] ;
	
	
	//_e123ni
	r[7] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_70_53(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12ni
	r[1] = a[2] * b[7]  + a[3] * b[4]  * -1 ;
	
	
	//_e13ni
	r[2] = a[1] * b[7]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[7]  + a[3] * b[6]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_70_54(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
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

double * conga_ip_70_55(double * a, double * b, double *r) { 
	
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

double * conga_ip_70_56(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[7]  + a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[7]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  + a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_70_57(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[3] * b[4] ;
	
	
	//_e2ni
	r[2] = a[3] * b[5] ;
	
	
	//_e3ni
	r[3] = a[3] * b[6] ;
	
	
	//_noni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_70_58(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[3] * b[5] ;
	
	
	//_e2ni
	r[2] = a[3] * b[6] ;
	
	
	//_e3ni
	r[3] = a[3] * b[7] ;
	
	
	//_noni
	r[4] = a[0] * b[5]  + a[1] * b[6]  + a[2] * b[7] ;
	
	
	return r;
}

double * conga_ip_70_59(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[5] * b[3] ;
	
	
	//_e3ni
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_e12noni
	r[3] = a[2] * b[3] ;
	
	
	//_e13noni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[5] = a[0] * b[3] ;
	
	
	//_e123ni
	r[6] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_70_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1 ;
	
	
	//_e1ni
	r[1] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[8] ;
	
	
	//_e2ni
	r[2] = a[0] * b[5]  + a[2] * b[7]  * -1  + a[3] * b[9] ;
	
	
	//_e3ni
	r[3] = a[0] * b[6]  + a[1] * b[7]  + a[3] * b[10] ;
	
	
	//_noni
	r[4] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	return r;
}

double * conga_ip_70_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  * -1  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13] ;
	
	
	//_e12ni
	r[5] = a[2] * b[14]  + a[3] * b[11]  * -1 ;
	
	
	//_e13ni
	r[6] = a[1] * b[14]  * -1  + a[3] * b[12]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[14]  + a[3] * b[13]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_70_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[10]  + a[6] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[3] * b[11]  + a[5] * b[14] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[3] * b[12]  + a[4] * b[14]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12noni
	r[11] = a[2] * b[14] ;
	
	
	//_e13noni
	r[12] = a[1] * b[14]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[14] ;
	
	
	//_e123ni
	r[14] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_70_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[5] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[9]  * -1 ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12no
	r[4] = a[2] * b[9] ;
	
	
	//_e13no
	r[5] = a[1] * b[9]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[9] ;
	
	
	//_e12ni
	r[7] = a[2] * b[10]  + a[3] * b[6]  * -1 ;
	
	
	//_e13ni
	r[8] = a[1] * b[10]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[10]  + a[3] * b[8]  * -1 ;
	
	
	//_e1noni
	r[10] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e123
	r[13] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_70_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[3] * b[7]  * -1  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10] ;
	
	
	//_e12ni
	r[5] = a[3] * b[8]  * -1 ;
	
	
	//_e13ni
	r[6] = a[3] * b[9]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[10]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_70_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[3] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[3] * b[6]  + a[6] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[3] * b[7]  + a[5] * b[10] ;
	
	
	//_e3ni
	r[9] = a[3] * b[8]  + a[4] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12noni
	r[11] = a[2] * b[10] ;
	
	
	//_e13noni
	r[12] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10] ;
	
	
	//_e123ni
	r[14] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_70_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12no
	r[4] = a[2] * b[6] ;
	
	
	//_e13no
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[3] * b[3]  * -1 ;
	
	
	//_e13ni
	r[8] = a[3] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[3] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e123
	r[13] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_70_67(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e2ni
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3ni
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6] ;
	
	
	//_noni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_70_68(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12ni
	r[1] = a[2] * b[6]  + a[3] * b[3]  * -1 ;
	
	
	//_e13ni
	r[2] = a[1] * b[6]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23ni
	r[3] = a[0] * b[6]  + a[3] * b[5]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_70_69(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
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

double * conga_ip_70_70(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1ni
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_70_71(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3ni
	r[5] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_70_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[12]  + a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[12]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[12]  + a[3] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[9]  + a[6] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[3] * b[10]  + a[5] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8]  + a[3] * b[11]  + a[4] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_e12noni
	r[11] = a[2] * b[13] ;
	
	
	//_e13noni
	r[12] = a[1] * b[13]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[13] ;
	
	
	//_e123ni
	r[14] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_70_73(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[0] ;
	
	
	//_e13
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[0] ;
	
	
	//_e1ni
	r[3] = a[6] * b[1]  * -1 ;
	
	
	//_e2ni
	r[4] = a[5] * b[1] ;
	
	
	//_e3ni
	r[5] = a[4] * b[1]  * -1 ;
	
	
	//_e12noni
	r[6] = a[2] * b[1] ;
	
	
	//_e13noni
	r[7] = a[1] * b[1]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[1] ;
	
	
	//_e123ni
	r[9] = a[3] * b[1] ;
	
	
	return r;
}

double * conga_ip_70_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[6] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[6]  * -1 ;
	
	
	//_ni
	r[3] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12no
	r[4] = a[2] * b[6] ;
	
	
	//_e13no
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e12ni
	r[7] = a[2] * b[7]  + a[3] * b[3]  * -1 ;
	
	
	//_e13ni
	r[8] = a[1] * b[7]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23ni
	r[9] = a[0] * b[7]  + a[3] * b[5]  * -1 ;
	
	
	//_e1noni
	r[10] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e123
	r[13] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_70_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[11] ;
	
	
	//_e12ni
	r[5] = a[3] * b[9]  * -1 ;
	
	
	//_e13ni
	r[6] = a[3] * b[10]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[11]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_70_76(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1ni
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e2ni
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[3] * b[7] ;
	
	
	//_e3ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[8] ;
	
	
	//_noni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_70_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_ni
	r[3] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12ni
	r[4] = a[2] * b[6]  + a[3] * b[3]  * -1 ;
	
	
	//_e13ni
	r[5] = a[1] * b[6]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[6]  + a[3] * b[5]  * -1 ;
	
	
	//_e1noni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_70_78(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12ni
	r[4] = a[3] * b[6]  * -1 ;
	
	
	//_e13ni
	r[5] = a[3] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[3] * b[8]  * -1 ;
	
	
	//_e1noni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_70_79(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1ni
	r[1] = a[3] * b[4] ;
	
	
	//_e2ni
	r[2] = a[3] * b[5] ;
	
	
	//_e3ni
	r[3] = a[3] * b[6] ;
	
	
	//_noni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_70_80(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1ni
	r[1] = a[3] * b[3] ;
	
	
	//_e2ni
	r[2] = a[3] * b[4] ;
	
	
	//_e3ni
	r[3] = a[3] * b[5] ;
	
	
	//_noni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_70_81(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_ni
	r[3] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12ni
	r[4] = a[3] * b[3]  * -1 ;
	
	
	//_e13ni
	r[5] = a[3] * b[4]  * -1 ;
	
	
	//_e23ni
	r[6] = a[3] * b[5]  * -1 ;
	
	
	//_e1noni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_70_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12ni
	r[5] = a[3] * b[6]  * -1 ;
	
	
	//_e13ni
	r[6] = a[3] * b[7]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[8]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_70_83(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[3]  + a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[3]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  + a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[6] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[5] * b[4] ;
	
	
	//_e3ni
	r[9] = a[4] * b[4]  * -1 ;
	
	
	//_e12noni
	r[10] = a[2] * b[4] ;
	
	
	//_e13noni
	r[11] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[4] ;
	
	
	//_e123ni
	r[13] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_70_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[10]  + a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  + a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[3] * b[7]  + a[6] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[3] * b[8]  + a[5] * b[11] ;
	
	
	//_e3ni
	r[9] = a[3] * b[9]  + a[4] * b[11]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12noni
	r[11] = a[2] * b[11] ;
	
	
	//_e13noni
	r[12] = a[1] * b[11]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[11] ;
	
	
	//_e123ni
	r[14] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_70_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[6] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5]  + a[5] * b[11] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6]  + a[4] * b[11]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[3] * b[7]  * -1  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10] ;
	
	
	//_e12no
	r[5] = a[2] * b[11] ;
	
	
	//_e13no
	r[6] = a[1] * b[11]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[11] ;
	
	
	//_e12ni
	r[8] = a[3] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[3] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[10]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	//_e123
	r[14] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_70_86(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[3] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_70_87(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[6] * b[3]  * -1 ;
	
	
	//_e2ni
	r[8] = a[5] * b[3] ;
	
	
	//_e3ni
	r[9] = a[4] * b[3]  * -1 ;
	
	
	//_e12noni
	r[10] = a[2] * b[3] ;
	
	
	//_e13noni
	r[11] = a[1] * b[3]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[3] ;
	
	
	//_e123ni
	r[13] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_70_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7] ;
	
	
	//_e12
	r[1] = a[3] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[7] = a[3] * b[8] ;
	
	
	//_e2ni
	r[8] = a[3] * b[9] ;
	
	
	//_e3ni
	r[9] = a[3] * b[10] ;
	
	
	//_noni
	r[10] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	return r;
}

double * conga_ip_70_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[6] * b[14]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5]  + a[5] * b[14] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6]  + a[4] * b[14]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  * -1  + a[4] * b[11]  + a[5] * b[12]  + a[6] * b[13] ;
	
	
	//_e12no
	r[5] = a[2] * b[14] ;
	
	
	//_e13no
	r[6] = a[1] * b[14]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[14] ;
	
	
	//_e12ni
	r[8] = a[3] * b[11]  * -1 ;
	
	
	//_e13ni
	r[9] = a[3] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[13]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[11]  * -1  + a[2] * b[12]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[11]  + a[2] * b[13]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[12]  + a[1] * b[13] ;
	
	
	//_e123
	r[14] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_70_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[10]  + a[6] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[3] * b[11]  + a[5] * b[14] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[3] * b[12]  + a[4] * b[14]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12noni
	r[11] = a[2] * b[14] ;
	
	
	//_e13noni
	r[12] = a[1] * b[14]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[14] ;
	
	
	//_e123ni
	r[14] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_70_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3]  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[5] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5]  + a[4] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12no
	r[5] = a[2] * b[9] ;
	
	
	//_e13no
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[9] ;
	
	
	//_e12ni
	r[8] = a[2] * b[10]  + a[3] * b[6]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[10]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[10]  + a[3] * b[8]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e123
	r[14] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_70_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_ni
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  * -1  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10] ;
	
	
	//_e12ni
	r[4] = a[3] * b[8]  * -1 ;
	
	
	//_e13ni
	r[5] = a[3] * b[9]  * -1 ;
	
	
	//_e23ni
	r[6] = a[3] * b[10]  * -1 ;
	
	
	//_e1noni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_70_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[9] ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9] ;
	
	
	//_e1ni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[6]  + a[6] * b[10]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[3] * b[7]  + a[5] * b[10] ;
	
	
	//_e3ni
	r[6] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[8]  + a[4] * b[10]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12noni
	r[8] = a[2] * b[10] ;
	
	
	//_e13noni
	r[9] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[10] ;
	
	
	//_e123ni
	r[11] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_70_94(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_70_95(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3]  + a[6] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5]  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12no
	r[4] = a[2] * b[6] ;
	
	
	//_e13no
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[6] ;
	
	
	//_e123
	r[7] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_70_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10] ;
	
	
	//_e1ni
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[7]  + a[6] * b[11]  * -1 ;
	
	
	//_e2ni
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[3] * b[8]  + a[5] * b[11] ;
	
	
	//_e3ni
	r[6] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[9]  + a[4] * b[11]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	//_e12noni
	r[8] = a[2] * b[11] ;
	
	
	//_e13noni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[11] ;
	
	
	//_e123ni
	r[11] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_70_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[3] * b[7] ;
	
	
	//_e2ni
	r[8] = a[3] * b[8] ;
	
	
	//_e3ni
	r[9] = a[3] * b[9] ;
	
	
	//_noni
	r[10] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_70_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3]  + a[6] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[5] * b[9] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5]  + a[4] * b[9]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12no
	r[5] = a[2] * b[9] ;
	
	
	//_e13no
	r[6] = a[1] * b[9]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[9] ;
	
	
	//_e12ni
	r[8] = a[3] * b[6]  * -1 ;
	
	
	//_e13ni
	r[9] = a[3] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[8]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	//_e123
	r[14] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_70_99(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[3] * b[6] ;
	
	
	//_e2ni
	r[8] = a[3] * b[7] ;
	
	
	//_e3ni
	r[9] = a[3] * b[8] ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_70_100(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1ni
	r[1] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1  + a[3] * b[7] ;
	
	
	//_e2ni
	r[2] = a[0] * b[4]  + a[2] * b[6]  * -1  + a[3] * b[8] ;
	
	
	//_e3ni
	r[3] = a[0] * b[5]  + a[1] * b[6]  + a[3] * b[9] ;
	
	
	//_noni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_70_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_ni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12ni
	r[4] = a[2] * b[9]  + a[3] * b[6]  * -1 ;
	
	
	//_e13ni
	r[5] = a[1] * b[9]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e23ni
	r[6] = a[0] * b[9]  + a[3] * b[8]  * -1 ;
	
	
	//_e1noni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[9] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_70_102(double * a, double * b, double *r) { 
	
	//_e12
	r[0] = a[2] * b[3] ;
	
	
	//_e13
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[2] = a[0] * b[3] ;
	
	
	//_e1ni
	r[3] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[6] * b[4]  * -1 ;
	
	
	//_e2ni
	r[4] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[5] * b[4] ;
	
	
	//_e3ni
	r[5] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[4]  * -1 ;
	
	
	//_e12noni
	r[6] = a[2] * b[4] ;
	
	
	//_e13noni
	r[7] = a[1] * b[4]  * -1 ;
	
	
	//_e23noni
	r[8] = a[0] * b[4] ;
	
	
	//_e123ni
	r[9] = a[3] * b[4] ;
	
	
	return r;
}

double * conga_ip_70_103(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e1ni
	r[1] = a[3] * b[2] ;
	
	
	//_e2ni
	r[2] = a[3] * b[3] ;
	
	
	//_e3ni
	r[3] = a[3] * b[4] ;
	
	
	//_noni
	r[4] = a[0] * b[2]  + a[1] * b[3]  + a[2] * b[4] ;
	
	
	return r;
}

double * conga_ip_70_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9] ;
	
	
	//_e12ni
	r[5] = a[3] * b[7]  * -1 ;
	
	
	//_e13ni
	r[6] = a[3] * b[8]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[9]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_70_105(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[6] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[5] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8]  + a[4] * b[9]  * -1 ;
	
	
	//_e12noni
	r[10] = a[2] * b[9] ;
	
	
	//_e13noni
	r[11] = a[1] * b[9]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[9] ;
	
	
	//_e123ni
	r[13] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_70_106(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[3]  * -1 ;
	
	
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
	
	
	//_e123
	r[9] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_70_107(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[4] * b[6]  + a[5] * b[7]  + a[6] * b[8] ;
	
	
	//_e12ni
	r[5] = a[3] * b[6]  * -1 ;
	
	
	//_e13ni
	r[6] = a[3] * b[7]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[8]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[6]  + a[2] * b[8]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[7]  + a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_70_108(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e1ni
	r[1] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2ni
	r[2] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3ni
	r[3] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_70_109(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e12ni
	r[3] = a[2] * b[3] ;
	
	
	//_e13ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e23ni
	r[5] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_70_110(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12ni
	r[1] = a[3] * b[3]  * -1 ;
	
	
	//_e13ni
	r[2] = a[3] * b[4]  * -1 ;
	
	
	//_e23ni
	r[3] = a[3] * b[5]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_70_111(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[3] * b[1] ;
	
	
	//_e2ni
	r[1] = a[3] * b[2] ;
	
	
	//_e3ni
	r[2] = a[3] * b[3] ;
	
	
	//_noni
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_70_112(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[3] * b[0] ;
	
	
	//_e2ni
	r[1] = a[3] * b[1] ;
	
	
	//_e3ni
	r[2] = a[3] * b[2] ;
	
	
	//_noni
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	return r;
}

double * conga_ip_70_113(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12ni
	r[1] = a[3] * b[0]  * -1 ;
	
	
	//_e13ni
	r[2] = a[3] * b[1]  * -1 ;
	
	
	//_e23ni
	r[3] = a[3] * b[2]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_70_114(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1 ;
	
	
	//_e1ni
	r[1] = a[3] * b[1] ;
	
	
	//_e2ni
	r[2] = a[3] * b[2] ;
	
	
	//_e3ni
	r[3] = a[3] * b[3] ;
	
	
	//_noni
	r[4] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	return r;
}

double * conga_ip_70_115(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12ni
	r[5] = a[3] * b[3]  * -1 ;
	
	
	//_e13ni
	r[6] = a[3] * b[4]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[5]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_70_116(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[5] * b[0] ;
	
	
	//_e3
	r[2] = a[4] * b[0]  * -1 ;
	
	
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
	
	
	//_e123
	r[9] = a[3] * b[0] ;
	
	
	return r;
}

double * conga_ip_70_117(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_70_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7] ;
	
	
	//_e12
	r[1] = a[3] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[11] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1  + a[3] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10]  + a[3] * b[13] ;
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	return r;
}

double * conga_ip_70_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3]  + a[6] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[5] * b[12] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5]  + a[4] * b[12]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[4] * b[9]  + a[5] * b[10]  + a[6] * b[11] ;
	
	
	//_e12no
	r[5] = a[2] * b[12] ;
	
	
	//_e13no
	r[6] = a[1] * b[12]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[12] ;
	
	
	//_e12ni
	r[8] = a[2] * b[13]  + a[3] * b[9]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[13]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[13]  + a[3] * b[11]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[9]  * -1  + a[2] * b[10]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[9]  + a[2] * b[11]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[10]  + a[1] * b[11] ;
	
	
	//_e123
	r[14] = a[3] * b[12] ;
	
	
	return r;
}

double * conga_ip_70_120(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[6]  + a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[6] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[5] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5]  + a[4] * b[7]  * -1 ;
	
	
	//_e12noni
	r[10] = a[2] * b[7] ;
	
	
	//_e13noni
	r[11] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[7] ;
	
	
	//_e123ni
	r[13] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_70_121(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[9] ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[3] * b[10] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8]  + a[3] * b[11] ;
	
	
	//_noni
	r[10] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11] ;
	
	
	return r;
}

double * conga_ip_70_122(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_70_123(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[2]  * -1 ;
	
	
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

double * conga_ip_70_124(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[6] ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[3] * b[7] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[8] ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	return r;
}

double * conga_ip_70_125(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[6] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[4] * b[3]  * -1 ;
	
	
	//_ni
	r[3] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12no
	r[4] = a[2] * b[3] ;
	
	
	//_e13no
	r[5] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[6] = a[0] * b[3] ;
	
	
	//_e12ni
	r[7] = a[3] * b[0]  * -1 ;
	
	
	//_e13ni
	r[8] = a[3] * b[1]  * -1 ;
	
	
	//_e23ni
	r[9] = a[3] * b[2]  * -1 ;
	
	
	//_e1noni
	r[10] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2noni
	r[11] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3noni
	r[12] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e123
	r[13] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_70_126(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[3] * b[3] ;
	
	
	//_e2ni
	r[8] = a[3] * b[4] ;
	
	
	//_e3ni
	r[9] = a[3] * b[5] ;
	
	
	//_noni
	r[10] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	return r;
}

double * conga_ip_70_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[3] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_70_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7] ;
	
	
	//_e12
	r[1] = a[2] * b[14]  + a[3] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[14]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[14]  + a[3] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[11] ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1  + a[3] * b[12] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10]  + a[3] * b[13] ;
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	return r;
}

double * conga_ip_70_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3]  + a[6] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[5] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5]  + a[4] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  * -1  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12no
	r[5] = a[2] * b[13] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[2] * b[14]  + a[3] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[14]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[14]  + a[3] * b[12]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e123
	r[14] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_70_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[6]  + a[6] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[3] * b[7]  + a[5] * b[10] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[8]  + a[4] * b[10]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12noni
	r[11] = a[2] * b[10] ;
	
	
	//_e13noni
	r[12] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[10] ;
	
	
	//_e123ni
	r[14] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_70_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  * -1  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12ni
	r[5] = a[2] * b[13]  + a[3] * b[10]  * -1 ;
	
	
	//_e13ni
	r[6] = a[1] * b[13]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[13]  + a[3] * b[12]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_70_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[10] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[3] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[3] * b[12] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	return r;
}

double * conga_ip_70_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9] ;
	
	
	return r;
}

double * conga_ip_70_134(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[3] * b[5]  * -1 ;
	
	
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

double * conga_ip_70_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[2] * b[13]  + a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[13]  * -1  + a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[13]  + a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[10] ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[3] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[3] * b[12] ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	return r;
}

double * conga_ip_70_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[6] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5]  + a[5] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6]  + a[4] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12no
	r[5] = a[2] * b[13] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[2] * b[14]  + a[3] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[14]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[0] * b[14]  + a[3] * b[12]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e123
	r[14] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_70_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[5]  + a[5] * b[6]  + a[6] * b[7] ;
	
	
	//_e12
	r[1] = a[3] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  + a[2] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  + a[1] * b[7] ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1  + a[3] * b[11]  + a[6] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[8]  + a[2] * b[10]  * -1  + a[3] * b[12]  + a[5] * b[14] ;
	
	
	//_e3ni
	r[9] = a[0] * b[9]  + a[1] * b[10]  + a[3] * b[13]  + a[4] * b[14]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[11]  + a[1] * b[12]  + a[2] * b[13] ;
	
	
	//_e12noni
	r[11] = a[2] * b[14] ;
	
	
	//_e13noni
	r[12] = a[1] * b[14]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[14] ;
	
	
	//_e123ni
	r[14] = a[3] * b[14] ;
	
	
	return r;
}

double * conga_ip_70_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1  + a[3] * b[6]  + a[6] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[3]  + a[2] * b[5]  * -1  + a[3] * b[7]  + a[5] * b[9] ;
	
	
	//_e3ni
	r[9] = a[0] * b[4]  + a[1] * b[5]  + a[3] * b[8]  + a[4] * b[9]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8] ;
	
	
	//_e12noni
	r[11] = a[2] * b[9] ;
	
	
	//_e13noni
	r[12] = a[1] * b[9]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[9] ;
	
	
	//_e123ni
	r[14] = a[3] * b[9] ;
	
	
	return r;
}

double * conga_ip_70_139(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  * -1  + a[4] * b[7]  + a[5] * b[8]  + a[6] * b[9] ;
	
	
	//_e12ni
	r[5] = a[3] * b[7]  * -1 ;
	
	
	//_e13ni
	r[6] = a[3] * b[8]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[9]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[7]  + a[2] * b[9]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[8]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_70_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3]  + a[6] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[5] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5]  + a[4] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_ni
	r[4] = a[0] * b[6]  + a[1] * b[7]  + a[2] * b[8]  + a[3] * b[9]  * -1  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12no
	r[5] = a[2] * b[13] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[3] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[3] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[12]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e123
	r[14] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_70_141(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[5]  * -1 ;
	
	
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

double * conga_ip_70_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6] ;
	
	
	//_e1ni
	r[4] = a[3] * b[3]  + a[6] * b[7]  * -1 ;
	
	
	//_e2ni
	r[5] = a[3] * b[4]  + a[5] * b[7] ;
	
	
	//_e3ni
	r[6] = a[3] * b[5]  + a[4] * b[7]  * -1 ;
	
	
	//_noni
	r[7] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12noni
	r[8] = a[2] * b[7] ;
	
	
	//_e13noni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[10] = a[0] * b[7] ;
	
	
	//_e123ni
	r[11] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_70_143(double * a, double * b, double *r) { 
	
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

double * conga_ip_70_144(double * a, double * b, double *r) { 
	
	//_e1ni
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[3] * b[3]  + a[6] * b[6]  * -1 ;
	
	
	//_e2ni
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[5] * b[6] ;
	
	
	//_e3ni
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[3] * b[5]  + a[4] * b[6]  * -1 ;
	
	
	//_noni
	r[3] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12noni
	r[4] = a[2] * b[6] ;
	
	
	//_e13noni
	r[5] = a[1] * b[6]  * -1 ;
	
	
	//_e23noni
	r[6] = a[0] * b[6] ;
	
	
	//_e123ni
	r[7] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_70_145(double * a, double * b, double *r) { 
	
	//_ni
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12ni
	r[1] = a[3] * b[4]  * -1 ;
	
	
	//_e13ni
	r[2] = a[3] * b[5]  * -1 ;
	
	
	//_e23ni
	r[3] = a[3] * b[6]  * -1 ;
	
	
	//_e1noni
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_70_146(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
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

double * conga_ip_70_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_70_148(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[6]  + a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[3] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_70_149(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1  + a[6] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[0]  + a[2] * b[2]  * -1  + a[5] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[1]  + a[1] * b[2]  + a[4] * b[3]  * -1 ;
	
	
	//_e12no
	r[3] = a[2] * b[3] ;
	
	
	//_e13no
	r[4] = a[1] * b[3]  * -1 ;
	
	
	//_e23no
	r[5] = a[0] * b[3] ;
	
	
	//_e123
	r[6] = a[3] * b[3] ;
	
	
	return r;
}

double * conga_ip_70_150(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_70_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  + a[6] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[1]  + a[5] * b[7] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  + a[4] * b[7]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12no
	r[5] = a[2] * b[7] ;
	
	
	//_e13no
	r[6] = a[1] * b[7]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[7] ;
	
	
	//_e12ni
	r[8] = a[3] * b[4]  * -1 ;
	
	
	//_e13ni
	r[9] = a[3] * b[5]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[6]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e123
	r[14] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_70_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3] ;
	
	
	//_e12
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_e1ni
	r[7] = a[3] * b[4]  + a[6] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[3] * b[5]  + a[5] * b[7] ;
	
	
	//_e3ni
	r[9] = a[3] * b[6]  + a[4] * b[7]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_e12noni
	r[11] = a[2] * b[7] ;
	
	
	//_e13noni
	r[12] = a[1] * b[7]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[7] ;
	
	
	//_e123ni
	r[14] = a[3] * b[7] ;
	
	
	return r;
}

double * conga_ip_70_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[2]  + a[5] * b[3]  + a[6] * b[4] ;
	
	
	//_e12
	r[1] = a[3] * b[2]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[4]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[2]  * -1  + a[2] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[2]  + a[2] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[3]  + a[1] * b[4] ;
	
	
	//_e1ni
	r[7] = a[1] * b[5]  * -1  + a[2] * b[6]  * -1  + a[3] * b[8]  + a[6] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[5]  + a[2] * b[7]  * -1  + a[3] * b[9]  + a[5] * b[11] ;
	
	
	//_e3ni
	r[9] = a[0] * b[6]  + a[1] * b[7]  + a[3] * b[10]  + a[4] * b[11]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[8]  + a[1] * b[9]  + a[2] * b[10] ;
	
	
	//_e12noni
	r[11] = a[2] * b[11] ;
	
	
	//_e13noni
	r[12] = a[1] * b[11]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[11] ;
	
	
	//_e123ni
	r[14] = a[3] * b[11] ;
	
	
	return r;
}

double * conga_ip_70_154(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  + a[6] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[1]  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  + a[4] * b[6]  * -1 ;
	
	
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
	
	
	//_e123
	r[11] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_70_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[3] * b[0]  * -1  + a[4] * b[1]  + a[5] * b[2]  + a[6] * b[3] ;
	
	
	//_e12
	r[1] = a[3] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  + a[2] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  + a[1] * b[3] ;
	
	
	//_e1ni
	r[7] = a[3] * b[4] ;
	
	
	//_e2ni
	r[8] = a[3] * b[5] ;
	
	
	//_e3ni
	r[9] = a[3] * b[6] ;
	
	
	//_noni
	r[10] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	return r;
}

double * conga_ip_70_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0]  + a[6] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[1]  + a[5] * b[6] ;
	
	
	//_e3
	r[2] = a[3] * b[2]  + a[4] * b[6]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12no
	r[5] = a[2] * b[6] ;
	
	
	//_e13no
	r[6] = a[1] * b[6]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[3] * b[3]  * -1 ;
	
	
	//_e13ni
	r[9] = a[3] * b[4]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[5]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e123
	r[14] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_70_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[1] ;
	
	
	//_e2
	r[1] = a[3] * b[2] ;
	
	
	//_e3
	r[2] = a[3] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3] ;
	
	
	//_ni
	r[4] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6]  + a[3] * b[7]  * -1  + a[4] * b[8]  + a[5] * b[9]  + a[6] * b[10] ;
	
	
	//_e12ni
	r[5] = a[3] * b[8]  * -1 ;
	
	
	//_e13ni
	r[6] = a[3] * b[9]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[10]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[8]  * -1  + a[2] * b[9]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[8]  + a[2] * b[10]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[9]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_70_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[3]  + a[5] * b[4]  + a[6] * b[5] ;
	
	
	//_e12
	r[1] = a[2] * b[9]  + a[3] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[9]  * -1  + a[3] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  + a[3] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[3]  * -1  + a[2] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[3]  + a[2] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[4]  + a[1] * b[5] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[6] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[5] * b[10] ;
	
	
	//_e3ni
	r[9] = a[0] * b[7]  + a[1] * b[8]  + a[4] * b[10]  * -1 ;
	
	
	//_e12noni
	r[10] = a[2] * b[10] ;
	
	
	//_e13noni
	r[11] = a[1] * b[10]  * -1 ;
	
	
	//_e23noni
	r[12] = a[0] * b[10] ;
	
	
	//_e123ni
	r[13] = a[3] * b[10] ;
	
	
	return r;
}

double * conga_ip_70_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12ni
	r[5] = a[2] * b[13]  + a[3] * b[10]  * -1 ;
	
	
	//_e13ni
	r[6] = a[1] * b[13]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e23ni
	r[7] = a[0] * b[13]  + a[3] * b[12]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_70_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[10]  + a[6] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[3] * b[11]  + a[5] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[3] * b[12]  + a[4] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12noni
	r[11] = a[2] * b[13] ;
	
	
	//_e13noni
	r[12] = a[1] * b[13]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[13] ;
	
	
	//_e123ni
	r[14] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_70_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2]  + a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12
	r[1] = a[3] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  * -1  + a[2] * b[8]  * -1  + a[3] * b[10]  + a[6] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[0] * b[7]  + a[2] * b[9]  * -1  + a[3] * b[11]  + a[5] * b[13] ;
	
	
	//_e3ni
	r[9] = a[0] * b[8]  + a[1] * b[9]  + a[3] * b[12]  + a[4] * b[13]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[10]  + a[1] * b[11]  + a[2] * b[12] ;
	
	
	//_e12noni
	r[11] = a[2] * b[13] ;
	
	
	//_e13noni
	r[12] = a[1] * b[13]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[13] ;
	
	
	//_e123ni
	r[14] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_70_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1]  * -1  + a[2] * b[2]  * -1  + a[3] * b[4]  + a[6] * b[13]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[2] * b[3]  * -1  + a[3] * b[5]  + a[5] * b[13] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[1] * b[3]  + a[3] * b[6]  + a[4] * b[13]  * -1 ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[1] * b[5]  + a[2] * b[6] ;
	
	
	//_ni
	r[4] = a[0] * b[7]  + a[1] * b[8]  + a[2] * b[9]  + a[4] * b[10]  + a[5] * b[11]  + a[6] * b[12] ;
	
	
	//_e12no
	r[5] = a[2] * b[13] ;
	
	
	//_e13no
	r[6] = a[1] * b[13]  * -1 ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[3] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[3] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[3] * b[12]  * -1 ;
	
	
	//_e1noni
	r[11] = a[1] * b[10]  * -1  + a[2] * b[11]  * -1 ;
	
	
	//_e2noni
	r[12] = a[0] * b[10]  + a[2] * b[12]  * -1 ;
	
	
	//_e3noni
	r[13] = a[0] * b[11]  + a[1] * b[12] ;
	
	
	//_e123
	r[14] = a[3] * b[13] ;
	
	
	return r;
}

double * conga_ip_70_163(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[3] * b[3]  * -1  + a[4] * b[4]  + a[5] * b[5]  + a[6] * b[6] ;
	
	
	//_e12ni
	r[5] = a[3] * b[4]  * -1 ;
	
	
	//_e13ni
	r[6] = a[3] * b[5]  * -1 ;
	
	
	//_e23ni
	r[7] = a[3] * b[6]  * -1 ;
	
	
	//_e1noni
	r[8] = a[1] * b[4]  * -1  + a[2] * b[5]  * -1 ;
	
	
	//_e2noni
	r[9] = a[0] * b[4]  + a[2] * b[6]  * -1 ;
	
	
	//_e3noni
	r[10] = a[0] * b[5]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_70_164(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[3] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[1] * b[0]  * -1  + a[2] * b[1]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[0]  + a[2] * b[2]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[1]  + a[1] * b[2] ;
	
	
	//_e1ni
	r[7] = a[3] * b[3]  + a[6] * b[6]  * -1 ;
	
	
	//_e2ni
	r[8] = a[3] * b[4]  + a[5] * b[6] ;
	
	
	//_e3ni
	r[9] = a[3] * b[5]  + a[4] * b[6]  * -1 ;
	
	
	//_noni
	r[10] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5] ;
	
	
	//_e12noni
	r[11] = a[2] * b[6] ;
	
	
	//_e13noni
	r[12] = a[1] * b[6]  * -1 ;
	
	
	//_e23noni
	r[13] = a[0] * b[6] ;
	
	
	//_e123ni
	r[14] = a[3] * b[6] ;
	
	
	return r;
}

double * conga_ip_70_165(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[4] * b[0]  + a[5] * b[1]  + a[6] * b[2] ;
	
	
	//_e12
	r[1] = a[2] * b[6]  + a[3] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1  + a[3] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  + a[3] * b[2]  * -1 ;
	
	
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

double * conga_ip_70_166(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[3] * b[0] ;
	
	
	//_e2
	r[1] = a[3] * b[1] ;
	
	
	//_e3
	r[2] = a[3] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[1] * b[1]  + a[2] * b[2] ;
	
	
	//_ni
	r[4] = a[0] * b[3]  + a[1] * b[4]  + a[2] * b[5]  + a[3] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_70_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  + a[1] * b[2]  + a[2] * b[3]  + a[3] * b[4]  * -1  + a[4] * b[16]  + a[5] * b[17]  + a[6] * b[18] ;
	
	
	//_e1
	r[1] = a[1] * b[6]  * -1  + a[2] * b[7]  * -1  + a[3] * b[9]  + a[6] * b[29]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[6]  + a[2] * b[8]  * -1  + a[3] * b[10]  + a[5] * b[29] ;
	
	
	//_e3
	r[3] = a[0] * b[7]  + a[1] * b[8]  + a[3] * b[11]  + a[4] * b[29]  * -1 ;
	
	
	//_no
	r[4] = a[0] * b[9]  + a[1] * b[10]  + a[2] * b[11] ;
	
	
	//_ni
	r[5] = a[0] * b[12]  + a[1] * b[13]  + a[2] * b[14]  + a[3] * b[15]  * -1  + a[4] * b[26]  + a[5] * b[27]  + a[6] * b[28] ;
	
	
	//_e12
	r[6] = a[2] * b[25]  + a[3] * b[16]  * -1 ;
	
	
	//_e13
	r[7] = a[1] * b[25]  * -1  + a[3] * b[17]  * -1 ;
	
	
	//_e23
	r[8] = a[0] * b[25]  + a[3] * b[18]  * -1 ;
	
	
	//_e1no
	r[9] = a[1] * b[16]  * -1  + a[2] * b[17]  * -1 ;
	
	
	//_e2no
	r[10] = a[0] * b[16]  + a[2] * b[18]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[17]  + a[1] * b[18] ;
	
	
	//_e1ni
	r[12] = a[1] * b[19]  * -1  + a[2] * b[20]  * -1  + a[3] * b[22]  + a[6] * b[31]  * -1 ;
	
	
	//_e2ni
	r[13] = a[0] * b[19]  + a[2] * b[21]  * -1  + a[3] * b[23]  + a[5] * b[31] ;
	
	
	//_e3ni
	r[14] = a[0] * b[20]  + a[1] * b[21]  + a[3] * b[24]  + a[4] * b[31]  * -1 ;
	
	
	//_noni
	r[15] = a[0] * b[22]  + a[1] * b[23]  + a[2] * b[24] ;
	
	
	//_e12no
	r[16] = a[2] * b[29] ;
	
	
	//_e13no
	r[17] = a[1] * b[29]  * -1 ;
	
	
	//_e23no
	r[18] = a[0] * b[29] ;
	
	
	//_e12ni
	r[19] = a[2] * b[30]  + a[3] * b[26]  * -1 ;
	
	
	//_e13ni
	r[20] = a[1] * b[30]  * -1  + a[3] * b[27]  * -1 ;
	
	
	//_e23ni
	r[21] = a[0] * b[30]  + a[3] * b[28]  * -1 ;
	
	
	//_e1noni
	r[22] = a[1] * b[26]  * -1  + a[2] * b[27]  * -1 ;
	
	
	//_e2noni
	r[23] = a[0] * b[26]  + a[2] * b[28]  * -1 ;
	
	
	//_e3noni
	r[24] = a[0] * b[27]  + a[1] * b[28] ;
	
	
	//_e123
	r[25] = a[3] * b[29] ;
	
	
	//_e12noni
	r[26] = a[2] * b[31] ;
	
	
	//_e13noni
	r[27] = a[1] * b[31]  * -1 ;
	
	
	//_e23noni
	r[28] = a[0] * b[31] ;
	
	
	//_e123ni
	r[29] = a[3] * b[31] ;
	
	
	return r;
}


