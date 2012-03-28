
#include "conga_ip_Rot_Mnk_Pnt.h"


double * conga_ip_153_1(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_153_2(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_3(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_4(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[0] ;
	
	
	//_ni
	r[1] = a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_5(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_6(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[11] * b[0]  * -1 ;
	
	
	//_e12
	r[1] = a[10] * b[0] ;
	
	
	//_e13
	r[2] = a[9] * b[0]  * -1 ;
	
	
	//_e23
	r[3] = a[8] * b[0] ;
	
	
	//_e1no
	r[4] = a[4] * b[0] ;
	
	
	//_e2no
	r[5] = a[3] * b[0]  * -1 ;
	
	
	//_e3no
	r[6] = a[2] * b[0] ;
	
	
	//_e1ni
	r[7] = a[7] * b[0]  * -1 ;
	
	
	//_e2ni
	r[8] = a[6] * b[0] ;
	
	
	//_e3ni
	r[9] = a[5] * b[0]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[0]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_ip_153_7(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_8(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_no
	r[3] = a[0] * b[9] ;
	
	
	//_ni
	r[4] = a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_9(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[3]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[0]  + a[6] * b[1]  + a[7] * b[2]  + a[8] * b[6]  + a[9] * b[7]  + a[10] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[6] ;
	
	
	//_e2ni
	r[8] = a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_153_10(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  * -1  + a[7] * b[3]  * -1  + a[9] * b[0]  * -1  + a[10] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[4]  + a[6] * b[3]  + a[8] * b[0]  + a[10] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[2] * b[4]  * -1  + a[5] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[2] ;
	
	
	//_no
	r[3] = a[2] * b[0]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[0]  + a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_e12no
	r[5] = a[0] * b[0] ;
	
	
	//_e13no
	r[6] = a[0] * b[1] ;
	
	
	//_e23no
	r[7] = a[0] * b[2] ;
	
	
	//_e12ni
	r[8] = a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[2]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_153_11(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_153_12(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	return r;
}

double * conga_ip_153_13(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[0]  + a[3] * b[1]  + a[4] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_14(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[0]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[0] ;
	
	
	return r;
}

double * conga_ip_153_15(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_153_16(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[5] * b[0]  + a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_e12
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_17(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[0] ;
	
	
	//_e3
	r[2] = a[5] * b[0]  * -1 ;
	
	
	//_e123
	r[3] = a[1] * b[0] ;
	
	
	return r;
}

double * conga_ip_153_18(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[0]  + a[3] * b[1]  + a[4] * b[2]  + a[8] * b[3]  + a[9] * b[4]  + a[10] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[3] ;
	
	
	//_e2ni
	r[8] = a[1] * b[4] ;
	
	
	//_e3ni
	r[9] = a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_153_19(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  * -1  + a[9] * b[0]  * -1  + a[10] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[3]  + a[8] * b[0]  + a[10] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[2] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[2] ;
	
	
	//_no
	r[3] = a[2] * b[0]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[0]  + a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_e12no
	r[5] = a[0] * b[0] ;
	
	
	//_e13no
	r[6] = a[0] * b[1] ;
	
	
	//_e23no
	r[7] = a[0] * b[2] ;
	
	
	//_e12ni
	r[8] = a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[2]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_153_20(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_21(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3] ;
	
	
	//_e2
	r[1] = a[0] * b[4] ;
	
	
	//_e3
	r[2] = a[0] * b[5] ;
	
	
	return r;
}

double * conga_ip_153_22(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_23(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_153_24(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_153_25(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_153_26(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_27(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3] ;
	
	
	//_e2
	r[1] = a[1] * b[4] ;
	
	
	//_e3
	r[2] = a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_153_28(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[5] * b[0]  + a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_e12
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_29(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_153_30(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_153_31(double * a, double * b, double *r) { 
	
	//_no
	r[0] = a[0] * b[1] ;
	
	
	//_ni
	r[1] = a[1] * b[1]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_32(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[4] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[3] * b[7] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[2] * b[7]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_153_33(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_153_34(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[4] * b[11]  * -1  + a[9] * b[8]  * -1  + a[10] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[3] * b[11]  + a[8] * b[8]  + a[10] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[2] * b[11]  * -1  + a[8] * b[9]  + a[9] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7]  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[1] * b[7]  * -1  + a[5] * b[8]  + a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_e12no
	r[5] = a[0] * b[8] ;
	
	
	//_e13no
	r[6] = a[0] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[10]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[11] ;
	
	
	return r;
}

double * conga_ip_153_35(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[9] * b[5]  * -1  + a[10] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[8] * b[5]  + a[10] * b[7]  * -1 ;
	
	
	//_e3
	r[2] = a[8] * b[6]  + a[9] * b[7] ;
	
	
	//_no
	r[3] = a[0] * b[4]  + a[2] * b[5]  * -1  + a[3] * b[6]  * -1  + a[4] * b[7]  * -1 ;
	
	
	//_ni
	r[4] = a[1] * b[4]  * -1  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7] ;
	
	
	//_e12no
	r[5] = a[0] * b[5] ;
	
	
	//_e13no
	r[6] = a[0] * b[6] ;
	
	
	//_e23no
	r[7] = a[0] * b[7] ;
	
	
	//_e12ni
	r[8] = a[1] * b[5]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[6]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_36(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[7] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[5]  + a[6] * b[7] ;
	
	
	//_e3
	r[2] = a[1] * b[6]  + a[5] * b[7]  * -1 ;
	
	
	//_e123
	r[3] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_153_37(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4] ;
	
	
	//_ni
	r[4] = a[1] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_38(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4]  + a[9] * b[11]  * -1  + a[10] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5]  + a[8] * b[11]  + a[10] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6]  + a[8] * b[12]  + a[9] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[10]  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[1] * b[10]  * -1  + a[5] * b[11]  + a[6] * b[12]  + a[7] * b[13] ;
	
	
	//_e12no
	r[5] = a[0] * b[11] ;
	
	
	//_e13no
	r[6] = a[0] * b[12] ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[1] * b[11]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[13]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_39(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[1] ;
	
	
	//_e2
	r[1] = a[1] * b[2] ;
	
	
	//_e3
	r[2] = a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[4] ;
	
	
	//_ni
	r[4] = a[1] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_40(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4]  + a[4] * b[15]  * -1  + a[7] * b[14]  * -1  + a[9] * b[11]  * -1  + a[10] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5]  + a[3] * b[15]  + a[6] * b[14]  + a[8] * b[11]  + a[10] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6]  + a[2] * b[15]  * -1  + a[5] * b[14]  * -1  + a[8] * b[12]  + a[9] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[10]  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[1] * b[10]  * -1  + a[5] * b[11]  + a[6] * b[12]  + a[7] * b[13] ;
	
	
	//_e12no
	r[5] = a[0] * b[11] ;
	
	
	//_e13no
	r[6] = a[0] * b[12] ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[1] * b[11]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[13]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[15]  + a[1] * b[14] ;
	
	
	return r;
}

double * conga_ip_153_41(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  * -1  + a[5] * b[1]  + a[6] * b[2]  + a[7] * b[3] ;
	
	
	//_e12
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_42(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[3] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_43(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[9] * b[1]  * -1  + a[10] * b[2]  * -1 ;
	
	
	//_e2
	r[1] = a[8] * b[1]  + a[10] * b[3]  * -1 ;
	
	
	//_e3
	r[2] = a[8] * b[2]  + a[9] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[0]  + a[2] * b[1]  * -1  + a[3] * b[2]  * -1  + a[4] * b[3]  * -1 ;
	
	
	//_ni
	r[4] = a[1] * b[0]  * -1  + a[5] * b[1]  + a[6] * b[2]  + a[7] * b[3] ;
	
	
	//_e12no
	r[5] = a[0] * b[1] ;
	
	
	//_e13no
	r[6] = a[0] * b[2] ;
	
	
	//_e23no
	r[7] = a[0] * b[3] ;
	
	
	//_e12ni
	r[8] = a[1] * b[1]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[2]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_44(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[2]  + a[6] * b[3]  + a[7] * b[4] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_45(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[8] * b[0]  + a[9] * b[1]  + a[10] * b[2]  + a[11] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[10] * b[3] ;
	
	
	//_e13
	r[2] = a[9] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[8] * b[3] ;
	
	
	//_e1no
	r[4] = a[0] * b[0]  * -1  + a[4] * b[3] ;
	
	
	//_e2no
	r[5] = a[0] * b[1]  * -1  + a[3] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[2]  * -1  + a[2] * b[3] ;
	
	
	//_e1ni
	r[7] = a[1] * b[0]  + a[7] * b[3]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[1]  + a[6] * b[3] ;
	
	
	//_e3ni
	r[9] = a[1] * b[2]  + a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_153_46(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_47(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[11]  + a[9] * b[12]  + a[10] * b[13]  + a[11] * b[15]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1  + a[10] * b[15] ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1  + a[9] * b[15]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[1] * b[7]  * -1  + a[8] * b[15] ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1  + a[4] * b[15] ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1  + a[3] * b[15]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1  + a[2] * b[15] ;
	
	
	//_e1ni
	r[7] = a[1] * b[11]  + a[7] * b[15]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[12]  + a[6] * b[15] ;
	
	
	//_e3ni
	r[9] = a[1] * b[13]  + a[5] * b[15]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[15]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[15] ;
	
	
	return r;
}

double * conga_ip_153_48(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[1] * b[0]  + a[4] * b[11]  * -1  + a[7] * b[10]  * -1  + a[9] * b[7]  * -1  + a[10] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[1]  + a[3] * b[11]  + a[6] * b[10]  + a[8] * b[7]  + a[10] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[2]  + a[2] * b[11]  * -1  + a[5] * b[10]  * -1  + a[8] * b[8]  + a[9] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[6]  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[1] * b[6]  * -1  + a[5] * b[7]  + a[6] * b[8]  + a[7] * b[9] ;
	
	
	//_e12no
	r[5] = a[0] * b[7] ;
	
	
	//_e13no
	r[6] = a[0] * b[8] ;
	
	
	//_e23no
	r[7] = a[0] * b[9] ;
	
	
	//_e12ni
	r[8] = a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[9]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[11]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_153_49(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4]  + a[4] * b[11]  * -1  + a[7] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5]  + a[3] * b[11]  + a[6] * b[10] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6]  + a[2] * b[11]  * -1  + a[5] * b[10]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[11]  + a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_153_50(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[4] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[3] * b[3] ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[2] * b[3]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_153_51(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[7] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[1]  + a[6] * b[3] ;
	
	
	//_e3
	r[2] = a[1] * b[2]  + a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[3] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_153_52(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[3]  + a[8] * b[4]  + a[9] * b[5]  + a[10] * b[6]  + a[11] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1  + a[10] * b[7] ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1  + a[9] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1  + a[8] * b[7] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1  + a[4] * b[7] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1  + a[2] * b[7] ;
	
	
	//_e1ni
	r[7] = a[1] * b[4]  + a[7] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[5]  + a[6] * b[7] ;
	
	
	//_e3ni
	r[9] = a[1] * b[6]  + a[5] * b[7]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_153_53(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[4] * b[7]  * -1  + a[9] * b[4]  * -1  + a[10] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[3] * b[7]  + a[8] * b[4]  + a[10] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[2] * b[7]  * -1  + a[8] * b[5]  + a[9] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[1] * b[3]  * -1  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6] ;
	
	
	//_e12no
	r[5] = a[0] * b[4] ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[6]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[7] ;
	
	
	return r;
}

double * conga_ip_153_54(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_55(double * a, double * b, double *r) { 
	
	return r;
}

double * conga_ip_153_56(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6] ;
	
	
	//_e12
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_57(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1  + a[8] * b[4]  + a[9] * b[5]  + a[10] * b[6] ;
	
	
	//_e1no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[4] ;
	
	
	//_e2ni
	r[5] = a[1] * b[5] ;
	
	
	//_e3ni
	r[6] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_153_58(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[8] * b[5]  + a[9] * b[6]  + a[10] * b[7] ;
	
	
	//_e1no
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[5] ;
	
	
	//_e2ni
	r[5] = a[1] * b[6] ;
	
	
	//_e3ni
	r[6] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_153_59(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[0]  + a[3] * b[1]  + a[4] * b[2]  + a[11] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[10] * b[3] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[9] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[8] * b[3] ;
	
	
	//_e1no
	r[4] = a[4] * b[3] ;
	
	
	//_e2no
	r[5] = a[3] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[2] * b[3] ;
	
	
	//_e1ni
	r[7] = a[7] * b[3]  * -1 ;
	
	
	//_e2ni
	r[8] = a[6] * b[3] ;
	
	
	//_e3ni
	r[9] = a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_153_60(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[7]  + a[8] * b[8]  + a[9] * b[9]  + a[10] * b[10] ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[8] ;
	
	
	//_e2ni
	r[8] = a[1] * b[9] ;
	
	
	//_e3ni
	r[9] = a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_153_61(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4]  + a[4] * b[14]  * -1  + a[9] * b[11]  * -1  + a[10] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5]  + a[3] * b[14]  + a[8] * b[11]  + a[10] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6]  + a[2] * b[14]  * -1  + a[8] * b[12]  + a[9] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[10]  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[1] * b[10]  * -1  + a[5] * b[11]  + a[6] * b[12]  + a[7] * b[13] ;
	
	
	//_e12no
	r[5] = a[0] * b[11] ;
	
	
	//_e13no
	r[6] = a[0] * b[12] ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[1] * b[11]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[13]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[14] ;
	
	
	return r;
}

double * conga_ip_153_62(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[2] * b[7]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[10]  + a[9] * b[11]  + a[10] * b[12]  + a[11] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1  + a[10] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1  + a[9] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1  + a[8] * b[14] ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1  + a[4] * b[14] ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1  + a[3] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1  + a[2] * b[14] ;
	
	
	//_e1ni
	r[7] = a[1] * b[10]  + a[7] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[11]  + a[6] * b[14] ;
	
	
	//_e3ni
	r[9] = a[1] * b[12]  + a[5] * b[14]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[14]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[14] ;
	
	
	return r;
}

double * conga_ip_153_63(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[4] * b[10]  * -1  + a[7] * b[9]  * -1  + a[9] * b[6]  * -1  + a[10] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[3] * b[10]  + a[6] * b[9]  + a[8] * b[6]  + a[10] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[2] * b[10]  * -1  + a[5] * b[9]  * -1  + a[8] * b[7]  + a[9] * b[8] ;
	
	
	//_no
	r[3] = a[2] * b[6]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[6]  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_e12no
	r[5] = a[0] * b[6] ;
	
	
	//_e13no
	r[6] = a[0] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[8] ;
	
	
	//_e12ni
	r[8] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[8]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[10]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_153_64(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[9] * b[8]  * -1  + a[10] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[5]  + a[8] * b[8]  + a[10] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[6]  + a[8] * b[9]  + a[9] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7]  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[1] * b[7]  * -1  + a[5] * b[8]  + a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_e12no
	r[5] = a[0] * b[8] ;
	
	
	//_e13no
	r[6] = a[0] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_65(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6]  + a[9] * b[7]  + a[10] * b[8]  + a[11] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[3]  * -1  + a[10] * b[10] ;
	
	
	//_e13
	r[2] = a[1] * b[4]  * -1  + a[9] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[5]  * -1  + a[8] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1  + a[4] * b[10] ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  + a[7] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[7]  + a[6] * b[10] ;
	
	
	//_e3ni
	r[9] = a[1] * b[8]  + a[5] * b[10]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[10]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_153_66(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[6]  * -1  + a[9] * b[3]  * -1  + a[10] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[6]  + a[8] * b[3]  + a[10] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[5] * b[6]  * -1  + a[8] * b[4]  + a[9] * b[5] ;
	
	
	//_no
	r[3] = a[2] * b[3]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_e12no
	r[5] = a[0] * b[3] ;
	
	
	//_e13no
	r[6] = a[0] * b[4] ;
	
	
	//_e23no
	r[7] = a[0] * b[5] ;
	
	
	//_e12ni
	r[8] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[5]  * -1 ;
	
	
	//_e123
	r[11] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_153_67(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[2] * b[1]  + a[3] * b[2]  + a[4] * b[3]  + a[8] * b[4]  + a[9] * b[5]  + a[10] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[4] ;
	
	
	//_e2ni
	r[8] = a[1] * b[5] ;
	
	
	//_e3ni
	r[9] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_153_68(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[4] * b[6]  * -1  + a[9] * b[3]  * -1  + a[10] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[3] * b[6]  + a[8] * b[3]  + a[10] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[2] * b[6]  * -1  + a[8] * b[4]  + a[9] * b[5] ;
	
	
	//_no
	r[3] = a[2] * b[3]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_e12no
	r[5] = a[0] * b[3] ;
	
	
	//_e13no
	r[6] = a[0] * b[4] ;
	
	
	//_e23no
	r[7] = a[0] * b[5] ;
	
	
	//_e12ni
	r[8] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[5]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_153_69(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[4] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[3] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[2] * b[6]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_153_70(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_71(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[0]  + a[3] * b[1]  + a[4] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_72(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[9]  + a[9] * b[10]  + a[10] * b[11]  + a[11] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1  + a[10] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1  + a[9] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1  + a[8] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[9]  * -1  + a[4] * b[13] ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  * -1  + a[2] * b[13] ;
	
	
	//_e1ni
	r[7] = a[1] * b[9]  + a[7] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[10]  + a[6] * b[13] ;
	
	
	//_e3ni
	r[9] = a[1] * b[11]  + a[5] * b[13]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[13]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_153_73(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[11] * b[1]  * -1 ;
	
	
	//_e12
	r[1] = a[10] * b[1] ;
	
	
	//_e13
	r[2] = a[9] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[8] * b[1] ;
	
	
	//_e1no
	r[4] = a[4] * b[1] ;
	
	
	//_e2no
	r[5] = a[3] * b[1]  * -1 ;
	
	
	//_e3no
	r[6] = a[2] * b[1] ;
	
	
	//_e1ni
	r[7] = a[7] * b[1]  * -1 ;
	
	
	//_e2ni
	r[8] = a[6] * b[1] ;
	
	
	//_e3ni
	r[9] = a[5] * b[1]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[1]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[1] ;
	
	
	return r;
}

double * conga_ip_153_74(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[7]  * -1  + a[7] * b[6]  * -1  + a[9] * b[3]  * -1  + a[10] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[7]  + a[6] * b[6]  + a[8] * b[3]  + a[10] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[2] * b[7]  * -1  + a[5] * b[6]  * -1  + a[8] * b[4]  + a[9] * b[5] ;
	
	
	//_no
	r[3] = a[2] * b[3]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_e12no
	r[5] = a[0] * b[3] ;
	
	
	//_e13no
	r[6] = a[0] * b[4] ;
	
	
	//_e23no
	r[7] = a[0] * b[5] ;
	
	
	//_e12ni
	r[8] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[5]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[7]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_153_75(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3]  + a[9] * b[9]  * -1  + a[10] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4]  + a[8] * b[9]  + a[10] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5]  + a[8] * b[10]  + a[9] * b[11] ;
	
	
	//_no
	r[3] = a[2] * b[9]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[9]  + a[6] * b[10]  + a[7] * b[11] ;
	
	
	//_e12no
	r[5] = a[0] * b[9] ;
	
	
	//_e13no
	r[6] = a[0] * b[10] ;
	
	
	//_e23no
	r[7] = a[0] * b[11] ;
	
	
	//_e12ni
	r[8] = a[1] * b[9]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[11]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_76(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[3]  + a[3] * b[4]  + a[4] * b[5]  + a[8] * b[6]  + a[9] * b[7]  + a[10] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[6] ;
	
	
	//_e2ni
	r[8] = a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_153_77(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[6]  * -1  + a[9] * b[3]  * -1  + a[10] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[6]  + a[8] * b[3]  + a[10] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[2] * b[6]  * -1  + a[8] * b[4]  + a[9] * b[5] ;
	
	
	//_no
	r[3] = a[2] * b[3]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_e12no
	r[5] = a[0] * b[3] ;
	
	
	//_e13no
	r[6] = a[0] * b[4] ;
	
	
	//_e23no
	r[7] = a[0] * b[5] ;
	
	
	//_e12ni
	r[8] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[5]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_153_78(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[9] * b[6]  * -1  + a[10] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[8] * b[6]  + a[10] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[8] * b[7]  + a[9] * b[8] ;
	
	
	//_no
	r[3] = a[2] * b[6]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[6]  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_e12no
	r[5] = a[0] * b[6] ;
	
	
	//_e13no
	r[6] = a[0] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[8] ;
	
	
	//_e12ni
	r[8] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_79(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[8] * b[4]  + a[9] * b[5]  + a[10] * b[6] ;
	
	
	//_e1no
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[4] ;
	
	
	//_e2ni
	r[5] = a[1] * b[5] ;
	
	
	//_e3ni
	r[6] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_153_80(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[8] * b[3]  + a[9] * b[4]  + a[10] * b[5] ;
	
	
	//_e1no
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[3] ;
	
	
	//_e2ni
	r[5] = a[1] * b[4] ;
	
	
	//_e3ni
	r[6] = a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_153_81(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[9] * b[3]  * -1  + a[10] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[8] * b[3]  + a[10] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[8] * b[4]  + a[9] * b[5] ;
	
	
	//_no
	r[3] = a[2] * b[3]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_e12no
	r[5] = a[0] * b[3] ;
	
	
	//_e13no
	r[6] = a[0] * b[4] ;
	
	
	//_e23no
	r[7] = a[0] * b[5] ;
	
	
	//_e12ni
	r[8] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_82(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[9] * b[6]  * -1  + a[10] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4]  + a[8] * b[6]  + a[10] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[5]  + a[8] * b[7]  + a[9] * b[8] ;
	
	
	//_no
	r[3] = a[2] * b[6]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[6]  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_e12no
	r[5] = a[0] * b[6] ;
	
	
	//_e13no
	r[6] = a[0] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[8] ;
	
	
	//_e12ni
	r[8] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_83(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[5] * b[0]  + a[6] * b[1]  + a[7] * b[2]  + a[11] * b[4]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[0]  * -1  + a[10] * b[4] ;
	
	
	//_e13
	r[2] = a[1] * b[1]  * -1  + a[9] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[2]  * -1  + a[8] * b[4] ;
	
	
	//_e1no
	r[4] = a[4] * b[4] ;
	
	
	//_e2no
	r[5] = a[3] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[2] * b[4] ;
	
	
	//_e1ni
	r[7] = a[7] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[6] * b[4] ;
	
	
	//_e3ni
	r[9] = a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[4]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[4] ;
	
	
	return r;
}

double * conga_ip_153_84(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7]  + a[9] * b[8]  + a[10] * b[9]  + a[11] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[4]  * -1  + a[10] * b[11] ;
	
	
	//_e13
	r[2] = a[1] * b[5]  * -1  + a[9] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[6]  * -1  + a[8] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1  + a[4] * b[11] ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1  + a[2] * b[11] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  + a[7] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[8]  + a[6] * b[11] ;
	
	
	//_e3ni
	r[9] = a[1] * b[9]  + a[5] * b[11]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[11]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_153_85(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4]  + a[7] * b[11]  * -1  + a[9] * b[8]  * -1  + a[10] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[5]  + a[6] * b[11]  + a[8] * b[8]  + a[10] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[6]  + a[5] * b[11]  * -1  + a[8] * b[9]  + a[9] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7]  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[1] * b[7]  * -1  + a[5] * b[8]  + a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_e12no
	r[5] = a[0] * b[8] ;
	
	
	//_e13no
	r[6] = a[0] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[10]  * -1 ;
	
	
	//_e123
	r[11] = a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_153_86(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[3] ;
	
	
	//_ni
	r[4] = a[1] * b[3]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_87(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[5] * b[0]  + a[6] * b[1]  + a[7] * b[2]  + a[11] * b[3]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[0]  * -1  + a[10] * b[3] ;
	
	
	//_e13
	r[2] = a[1] * b[1]  * -1  + a[9] * b[3]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[2]  * -1  + a[8] * b[3] ;
	
	
	//_e1no
	r[4] = a[4] * b[3] ;
	
	
	//_e2no
	r[5] = a[3] * b[3]  * -1 ;
	
	
	//_e3no
	r[6] = a[2] * b[3] ;
	
	
	//_e1ni
	r[7] = a[7] * b[3]  * -1 ;
	
	
	//_e2ni
	r[8] = a[6] * b[3] ;
	
	
	//_e3ni
	r[9] = a[5] * b[3]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[3]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_153_88(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[8]  + a[9] * b[9]  + a[10] * b[10] ;
	
	
	//_e12
	r[1] = a[1] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[8]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[8] ;
	
	
	//_e2ni
	r[8] = a[1] * b[9] ;
	
	
	//_e3ni
	r[9] = a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_153_89(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4]  + a[7] * b[14]  * -1  + a[9] * b[11]  * -1  + a[10] * b[12]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5]  + a[6] * b[14]  + a[8] * b[11]  + a[10] * b[13]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6]  + a[5] * b[14]  * -1  + a[8] * b[12]  + a[9] * b[13] ;
	
	
	//_no
	r[3] = a[0] * b[10]  + a[2] * b[11]  * -1  + a[3] * b[12]  * -1  + a[4] * b[13]  * -1 ;
	
	
	//_ni
	r[4] = a[1] * b[10]  * -1  + a[5] * b[11]  + a[6] * b[12]  + a[7] * b[13] ;
	
	
	//_e12no
	r[5] = a[0] * b[11] ;
	
	
	//_e13no
	r[6] = a[0] * b[12] ;
	
	
	//_e23no
	r[7] = a[0] * b[13] ;
	
	
	//_e12ni
	r[8] = a[1] * b[11]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[12]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[13]  * -1 ;
	
	
	//_e123
	r[11] = a[1] * b[14] ;
	
	
	return r;
}

double * conga_ip_153_90(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1  + a[2] * b[7]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[10]  + a[9] * b[11]  + a[10] * b[12]  + a[11] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1  + a[10] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1  + a[9] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1  + a[8] * b[14] ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1  + a[4] * b[14] ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1  + a[3] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1  + a[2] * b[14] ;
	
	
	//_e1ni
	r[7] = a[1] * b[10]  + a[7] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[11]  + a[6] * b[14] ;
	
	
	//_e3ni
	r[9] = a[1] * b[12]  + a[5] * b[14]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[14]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[14] ;
	
	
	return r;
}

double * conga_ip_153_91(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[4] * b[10]  * -1  + a[7] * b[9]  * -1  + a[9] * b[6]  * -1  + a[10] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4]  + a[3] * b[10]  + a[6] * b[9]  + a[8] * b[6]  + a[10] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[5]  + a[2] * b[10]  * -1  + a[5] * b[9]  * -1  + a[8] * b[7]  + a[9] * b[8] ;
	
	
	//_no
	r[3] = a[2] * b[6]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[6]  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_e12no
	r[5] = a[0] * b[6] ;
	
	
	//_e13no
	r[6] = a[0] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[8] ;
	
	
	//_e12ni
	r[8] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[8]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[10]  + a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_153_92(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[9] * b[8]  * -1  + a[10] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[8] * b[8]  + a[10] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[8] * b[9]  + a[9] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7]  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[1] * b[7]  * -1  + a[5] * b[8]  + a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_e12no
	r[5] = a[0] * b[8] ;
	
	
	//_e13no
	r[6] = a[0] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_93(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[3]  + a[3] * b[4]  + a[4] * b[5]  + a[8] * b[6]  + a[9] * b[7]  + a[10] * b[8]  + a[11] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[10] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[9] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[8] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1  + a[4] * b[10] ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  + a[7] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[7]  + a[6] * b[10] ;
	
	
	//_e3ni
	r[9] = a[1] * b[8]  + a[5] * b[10]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[10]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_153_94(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6] ;
	
	
	//_e12
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_95(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[7] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4]  + a[6] * b[6] ;
	
	
	//_e3
	r[2] = a[1] * b[5]  + a[5] * b[6]  * -1 ;
	
	
	//_e123
	r[3] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_153_96(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6]  + a[8] * b[7]  + a[9] * b[8]  + a[10] * b[9]  + a[11] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1  + a[10] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1  + a[9] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1  + a[8] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1  + a[4] * b[11] ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1  + a[2] * b[11] ;
	
	
	//_e1ni
	r[7] = a[1] * b[7]  + a[7] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[8]  + a[6] * b[11] ;
	
	
	//_e3ni
	r[9] = a[1] * b[9]  + a[5] * b[11]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[11]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_153_97(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[7]  + a[9] * b[8]  + a[10] * b[9] ;
	
	
	//_e12
	r[1] = a[1] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[7] ;
	
	
	//_e2ni
	r[8] = a[1] * b[8] ;
	
	
	//_e3ni
	r[9] = a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_153_98(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[3]  + a[7] * b[9]  * -1  + a[9] * b[6]  * -1  + a[10] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[4]  + a[6] * b[9]  + a[8] * b[6]  + a[10] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[5]  + a[5] * b[9]  * -1  + a[8] * b[7]  + a[9] * b[8] ;
	
	
	//_no
	r[3] = a[2] * b[6]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[6]  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_e12no
	r[5] = a[0] * b[6] ;
	
	
	//_e13no
	r[6] = a[0] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[8] ;
	
	
	//_e12ni
	r[8] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[8]  * -1 ;
	
	
	//_e123
	r[11] = a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_153_99(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[6]  + a[9] * b[7]  + a[10] * b[8] ;
	
	
	//_e12
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[6] ;
	
	
	//_e2ni
	r[8] = a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_153_100(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[2] * b[4]  + a[3] * b[5]  + a[4] * b[6]  + a[8] * b[7]  + a[9] * b[8]  + a[10] * b[9] ;
	
	
	//_e12
	r[1] = a[0] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[7]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[8]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[9]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[7] ;
	
	
	//_e2ni
	r[8] = a[1] * b[8] ;
	
	
	//_e3ni
	r[9] = a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_153_101(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[4] * b[9]  * -1  + a[9] * b[6]  * -1  + a[10] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[3] * b[9]  + a[8] * b[6]  + a[10] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[2] * b[9]  * -1  + a[8] * b[7]  + a[9] * b[8] ;
	
	
	//_no
	r[3] = a[2] * b[6]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[6]  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_e12no
	r[5] = a[0] * b[6] ;
	
	
	//_e13no
	r[6] = a[0] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[8] ;
	
	
	//_e12ni
	r[8] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[8]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[9] ;
	
	
	return r;
}

double * conga_ip_153_102(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[0]  + a[3] * b[1]  + a[4] * b[2]  + a[11] * b[4]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[10] * b[4] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[9] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[8] * b[4] ;
	
	
	//_e1no
	r[4] = a[4] * b[4] ;
	
	
	//_e2no
	r[5] = a[3] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[2] * b[4] ;
	
	
	//_e1ni
	r[7] = a[7] * b[4]  * -1 ;
	
	
	//_e2ni
	r[8] = a[6] * b[4] ;
	
	
	//_e3ni
	r[9] = a[5] * b[4]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[4]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[4] ;
	
	
	return r;
}

double * conga_ip_153_103(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1  + a[8] * b[2]  + a[9] * b[3]  + a[10] * b[4] ;
	
	
	//_e1no
	r[1] = a[0] * b[2]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[3]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[4]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[2] ;
	
	
	//_e2ni
	r[5] = a[1] * b[3] ;
	
	
	//_e3ni
	r[6] = a[1] * b[4] ;
	
	
	return r;
}

double * conga_ip_153_104(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[1] * b[1]  + a[9] * b[7]  * -1  + a[10] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[1] * b[2]  + a[8] * b[7]  + a[10] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[3]  + a[8] * b[8]  + a[9] * b[9] ;
	
	
	//_no
	r[3] = a[2] * b[7]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[7]  + a[6] * b[8]  + a[7] * b[9] ;
	
	
	//_e12no
	r[5] = a[0] * b[7] ;
	
	
	//_e13no
	r[6] = a[0] * b[8] ;
	
	
	//_e23no
	r[7] = a[0] * b[9] ;
	
	
	//_e12ni
	r[8] = a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_105(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5]  + a[11] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1  + a[10] * b[9] ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1  + a[9] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1  + a[8] * b[9] ;
	
	
	//_e1no
	r[4] = a[4] * b[9] ;
	
	
	//_e2no
	r[5] = a[3] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[2] * b[9] ;
	
	
	//_e1ni
	r[7] = a[7] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[6] * b[9] ;
	
	
	//_e3ni
	r[9] = a[5] * b[9]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[9]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_153_106(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[4]  * -1  + a[7] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[4]  + a[6] * b[3] ;
	
	
	//_e3
	r[2] = a[2] * b[4]  * -1  + a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[4]  + a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_153_107(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[1] * b[0]  + a[9] * b[6]  * -1  + a[10] * b[7]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[1]  + a[8] * b[6]  + a[10] * b[8]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[2]  + a[8] * b[7]  + a[9] * b[8] ;
	
	
	//_no
	r[3] = a[2] * b[6]  * -1  + a[3] * b[7]  * -1  + a[4] * b[8]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[6]  + a[6] * b[7]  + a[7] * b[8] ;
	
	
	//_e12no
	r[5] = a[0] * b[6] ;
	
	
	//_e13no
	r[6] = a[0] * b[7] ;
	
	
	//_e23no
	r[7] = a[0] * b[8] ;
	
	
	//_e12ni
	r[8] = a[1] * b[6]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[7]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[8]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_108(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[3]  + a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_109(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[3] ;
	
	
	//_e3
	r[2] = a[2] * b[3]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[3] ;
	
	
	return r;
}

double * conga_ip_153_110(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[9] * b[3]  * -1  + a[10] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[8] * b[3]  + a[10] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[8] * b[4]  + a[9] * b[5] ;
	
	
	//_no
	r[3] = a[2] * b[3]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_e12no
	r[5] = a[0] * b[3] ;
	
	
	//_e13no
	r[6] = a[0] * b[4] ;
	
	
	//_e23no
	r[7] = a[0] * b[5] ;
	
	
	//_e12ni
	r[8] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_111(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[0]  * -1  + a[8] * b[1]  + a[9] * b[2]  + a[10] * b[3] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[1] ;
	
	
	//_e2ni
	r[5] = a[1] * b[2] ;
	
	
	//_e3ni
	r[6] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_153_112(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[8] * b[0]  + a[9] * b[1]  + a[10] * b[2] ;
	
	
	//_e1no
	r[1] = a[0] * b[0]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[1]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[2]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[0] ;
	
	
	//_e2ni
	r[5] = a[1] * b[1] ;
	
	
	//_e3ni
	r[6] = a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_153_113(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[9] * b[0]  * -1  + a[10] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[8] * b[0]  + a[10] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[8] * b[1]  + a[9] * b[2] ;
	
	
	//_no
	r[3] = a[2] * b[0]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[0]  + a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_e12no
	r[5] = a[0] * b[0] ;
	
	
	//_e13no
	r[6] = a[0] * b[1] ;
	
	
	//_e23no
	r[7] = a[0] * b[2] ;
	
	
	//_e12ni
	r[8] = a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_114(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  * -1  + a[8] * b[1]  + a[9] * b[2]  + a[10] * b[3] ;
	
	
	//_e1no
	r[1] = a[0] * b[1]  * -1 ;
	
	
	//_e2no
	r[2] = a[0] * b[2]  * -1 ;
	
	
	//_e3no
	r[3] = a[0] * b[3]  * -1 ;
	
	
	//_e1ni
	r[4] = a[1] * b[1] ;
	
	
	//_e2ni
	r[5] = a[1] * b[2] ;
	
	
	//_e3ni
	r[6] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_153_115(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[9] * b[3]  * -1  + a[10] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[1]  + a[8] * b[3]  + a[10] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[2]  + a[8] * b[4]  + a[9] * b[5] ;
	
	
	//_no
	r[3] = a[2] * b[3]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_e12no
	r[5] = a[0] * b[3] ;
	
	
	//_e13no
	r[6] = a[0] * b[4] ;
	
	
	//_e23no
	r[7] = a[0] * b[5] ;
	
	
	//_e12ni
	r[8] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_116(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[4] * b[1]  * -1  + a[7] * b[0]  * -1 ;
	
	
	//_e2
	r[1] = a[3] * b[1]  + a[6] * b[0] ;
	
	
	//_e3
	r[2] = a[2] * b[1]  * -1  + a[5] * b[0]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[1]  + a[1] * b[0] ;
	
	
	return r;
}

double * conga_ip_153_117(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[3] ;
	
	
	//_no
	r[3] = a[0] * b[7] ;
	
	
	//_ni
	r[4] = a[1] * b[7]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_118(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[11]  + a[9] * b[12]  + a[10] * b[13] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[11] ;
	
	
	//_e2ni
	r[8] = a[1] * b[12] ;
	
	
	//_e3ni
	r[9] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_153_119(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3]  + a[4] * b[13]  * -1  + a[7] * b[12]  * -1  + a[9] * b[9]  * -1  + a[10] * b[10]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4]  + a[3] * b[13]  + a[6] * b[12]  + a[8] * b[9]  + a[10] * b[11]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5]  + a[2] * b[13]  * -1  + a[5] * b[12]  * -1  + a[8] * b[10]  + a[9] * b[11] ;
	
	
	//_no
	r[3] = a[2] * b[9]  * -1  + a[3] * b[10]  * -1  + a[4] * b[11]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[9]  + a[6] * b[10]  + a[7] * b[11] ;
	
	
	//_e12no
	r[5] = a[0] * b[9] ;
	
	
	//_e13no
	r[6] = a[0] * b[10] ;
	
	
	//_e23no
	r[7] = a[0] * b[11] ;
	
	
	//_e12ni
	r[8] = a[1] * b[9]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[10]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[11]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[13]  + a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_153_120(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[3]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[0]  + a[6] * b[1]  + a[7] * b[2]  + a[11] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1  + a[10] * b[7] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1  + a[9] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1  + a[8] * b[7] ;
	
	
	//_e1no
	r[4] = a[4] * b[7] ;
	
	
	//_e2no
	r[5] = a[3] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[2] * b[7] ;
	
	
	//_e1ni
	r[7] = a[7] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[6] * b[7] ;
	
	
	//_e3ni
	r[9] = a[5] * b[7]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_153_121(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5]  + a[8] * b[9]  + a[9] * b[10]  + a[10] * b[11] ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[9]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[11]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[9] ;
	
	
	//_e2ni
	r[8] = a[1] * b[10] ;
	
	
	//_e3ni
	r[9] = a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_153_122(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	return r;
}

double * conga_ip_153_123(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[3]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[0]  + a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_124(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[3]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[0]  + a[6] * b[1]  + a[7] * b[2]  + a[8] * b[6]  + a[9] * b[7]  + a[10] * b[8] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[6] ;
	
	
	//_e2ni
	r[8] = a[1] * b[7] ;
	
	
	//_e3ni
	r[9] = a[1] * b[8] ;
	
	
	return r;
}

double * conga_ip_153_125(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[3]  * -1  + a[9] * b[0]  * -1  + a[10] * b[1]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[3]  + a[8] * b[0]  + a[10] * b[2]  * -1 ;
	
	
	//_e3
	r[2] = a[5] * b[3]  * -1  + a[8] * b[1]  + a[9] * b[2] ;
	
	
	//_no
	r[3] = a[2] * b[0]  * -1  + a[3] * b[1]  * -1  + a[4] * b[2]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[0]  + a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_e12no
	r[5] = a[0] * b[0] ;
	
	
	//_e13no
	r[6] = a[0] * b[1] ;
	
	
	//_e23no
	r[7] = a[0] * b[2] ;
	
	
	//_e12ni
	r[8] = a[1] * b[0]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[1]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[2]  * -1 ;
	
	
	//_e123
	r[11] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_153_126(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[5] * b[0]  + a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3]  + a[9] * b[4]  + a[10] * b[5] ;
	
	
	//_e12
	r[1] = a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[2]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[3] ;
	
	
	//_e2ni
	r[8] = a[1] * b[4] ;
	
	
	//_e3ni
	r[9] = a[1] * b[5] ;
	
	
	return r;
}

double * conga_ip_153_127(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[10] ;
	
	
	//_ni
	r[4] = a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_128(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[11]  + a[9] * b[12]  + a[10] * b[13] ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[1] * b[7]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[11] ;
	
	
	//_e2ni
	r[8] = a[1] * b[12] ;
	
	
	//_e3ni
	r[9] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_153_129(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3]  + a[4] * b[14]  * -1  + a[7] * b[13]  * -1  + a[9] * b[10]  * -1  + a[10] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4]  + a[3] * b[14]  + a[6] * b[13]  + a[8] * b[10]  + a[10] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5]  + a[2] * b[14]  * -1  + a[5] * b[13]  * -1  + a[8] * b[11]  + a[9] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[9]  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[1] * b[9]  * -1  + a[5] * b[10]  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_e12no
	r[5] = a[0] * b[10] ;
	
	
	//_e13no
	r[6] = a[0] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[12] ;
	
	
	//_e12ni
	r[8] = a[1] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[12]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[14]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_153_130(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[3]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[0]  + a[6] * b[1]  + a[7] * b[2]  + a[8] * b[6]  + a[9] * b[7]  + a[10] * b[8]  + a[11] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1  + a[10] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1  + a[9] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1  + a[8] * b[10] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1  + a[4] * b[10] ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1  + a[3] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1  + a[2] * b[10] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  + a[7] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[7]  + a[6] * b[10] ;
	
	
	//_e3ni
	r[9] = a[1] * b[8]  + a[5] * b[10]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[10]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_153_131(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3]  + a[4] * b[13]  * -1  + a[9] * b[10]  * -1  + a[10] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4]  + a[3] * b[13]  + a[8] * b[10]  + a[10] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5]  + a[2] * b[13]  * -1  + a[8] * b[11]  + a[9] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[9]  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[1] * b[9]  * -1  + a[5] * b[10]  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_e12no
	r[5] = a[0] * b[10] ;
	
	
	//_e13no
	r[6] = a[0] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[12] ;
	
	
	//_e12ni
	r[8] = a[1] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[12]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_153_132(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[2] * b[7]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[10]  + a[9] * b[11]  + a[10] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[10] ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_153_133(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_153_134(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_135(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1  + a[2] * b[7]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[10]  + a[9] * b[11]  + a[10] * b[12] ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[10] ;
	
	
	//_e2ni
	r[8] = a[1] * b[11] ;
	
	
	//_e3ni
	r[9] = a[1] * b[12] ;
	
	
	return r;
}

double * conga_ip_153_136(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4]  + a[4] * b[14]  * -1  + a[7] * b[13]  * -1  + a[9] * b[10]  * -1  + a[10] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5]  + a[3] * b[14]  + a[6] * b[13]  + a[8] * b[10]  + a[10] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6]  + a[2] * b[14]  * -1  + a[5] * b[13]  * -1  + a[8] * b[11]  + a[9] * b[12] ;
	
	
	//_no
	r[3] = a[2] * b[10]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[10]  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_e12no
	r[5] = a[0] * b[10] ;
	
	
	//_e13no
	r[6] = a[0] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[12] ;
	
	
	//_e12ni
	r[8] = a[1] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[12]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[14]  + a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_153_137(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[4]  * -1  + a[1] * b[3]  * -1  + a[2] * b[8]  + a[3] * b[9]  + a[4] * b[10]  + a[5] * b[5]  + a[6] * b[6]  + a[7] * b[7]  + a[8] * b[11]  + a[9] * b[12]  + a[10] * b[13]  + a[11] * b[14]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1  + a[10] * b[14] ;
	
	
	//_e13
	r[2] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1  + a[9] * b[14]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[10]  * -1  + a[1] * b[7]  * -1  + a[8] * b[14] ;
	
	
	//_e1no
	r[4] = a[0] * b[11]  * -1  + a[4] * b[14] ;
	
	
	//_e2no
	r[5] = a[0] * b[12]  * -1  + a[3] * b[14]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[13]  * -1  + a[2] * b[14] ;
	
	
	//_e1ni
	r[7] = a[1] * b[11]  + a[7] * b[14]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[12]  + a[6] * b[14] ;
	
	
	//_e3ni
	r[9] = a[1] * b[13]  + a[5] * b[14]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[14]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[14] ;
	
	
	return r;
}

double * conga_ip_153_138(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[3]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[0]  + a[6] * b[1]  + a[7] * b[2]  + a[8] * b[6]  + a[9] * b[7]  + a[10] * b[8]  + a[11] * b[9]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1  + a[10] * b[9] ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1  + a[9] * b[9]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1  + a[8] * b[9] ;
	
	
	//_e1no
	r[4] = a[0] * b[6]  * -1  + a[4] * b[9] ;
	
	
	//_e2no
	r[5] = a[0] * b[7]  * -1  + a[3] * b[9]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[8]  * -1  + a[2] * b[9] ;
	
	
	//_e1ni
	r[7] = a[1] * b[6]  + a[7] * b[9]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[7]  + a[6] * b[9] ;
	
	
	//_e3ni
	r[9] = a[1] * b[8]  + a[5] * b[9]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[9]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[9] ;
	
	
	return r;
}

double * conga_ip_153_139(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[1] * b[0]  + a[9] * b[7]  * -1  + a[10] * b[8]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[1]  + a[8] * b[7]  + a[10] * b[9]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[2]  + a[8] * b[8]  + a[9] * b[9] ;
	
	
	//_no
	r[3] = a[0] * b[6]  + a[2] * b[7]  * -1  + a[3] * b[8]  * -1  + a[4] * b[9]  * -1 ;
	
	
	//_ni
	r[4] = a[1] * b[6]  * -1  + a[5] * b[7]  + a[6] * b[8]  + a[7] * b[9] ;
	
	
	//_e12no
	r[5] = a[0] * b[7] ;
	
	
	//_e13no
	r[6] = a[0] * b[8] ;
	
	
	//_e23no
	r[7] = a[0] * b[9] ;
	
	
	//_e12ni
	r[8] = a[1] * b[7]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[8]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[9]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_140(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[6]  + a[1] * b[3]  + a[7] * b[13]  * -1  + a[9] * b[10]  * -1  + a[10] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[7]  + a[1] * b[4]  + a[6] * b[13]  + a[8] * b[10]  + a[10] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[8]  + a[1] * b[5]  + a[5] * b[13]  * -1  + a[8] * b[11]  + a[9] * b[12] ;
	
	
	//_no
	r[3] = a[0] * b[9]  + a[2] * b[10]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[1] * b[9]  * -1  + a[5] * b[10]  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_e12no
	r[5] = a[0] * b[10] ;
	
	
	//_e13no
	r[6] = a[0] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[12] ;
	
	
	//_e12ni
	r[8] = a[1] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[12]  * -1 ;
	
	
	//_e123
	r[11] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_153_141(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_142(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[8] * b[3]  + a[9] * b[4]  + a[10] * b[5]  + a[11] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[10] * b[7] ;
	
	
	//_e13
	r[2] = a[9] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[8] * b[7] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1  + a[4] * b[7] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1  + a[2] * b[7] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  + a[7] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[4]  + a[6] * b[7] ;
	
	
	//_e3ni
	r[9] = a[1] * b[5]  + a[5] * b[7]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_153_143(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4] ;
	
	
	//_e2
	r[1] = a[0] * b[5] ;
	
	
	//_e3
	r[2] = a[0] * b[6] ;
	
	
	return r;
}

double * conga_ip_153_144(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[0]  + a[3] * b[1]  + a[4] * b[2]  + a[8] * b[3]  + a[9] * b[4]  + a[10] * b[5]  + a[11] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[0]  * -1  + a[10] * b[6] ;
	
	
	//_e13
	r[2] = a[0] * b[1]  * -1  + a[9] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[2]  * -1  + a[8] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1  + a[4] * b[6] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1  + a[2] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  + a[7] * b[6]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[4]  + a[6] * b[6] ;
	
	
	//_e3ni
	r[9] = a[1] * b[5]  + a[5] * b[6]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_153_145(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[0]  + a[9] * b[4]  * -1  + a[10] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[1]  + a[8] * b[4]  + a[10] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[2]  + a[8] * b[5]  + a[9] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[1] * b[3]  * -1  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6] ;
	
	
	//_e12no
	r[5] = a[0] * b[4] ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_146(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[3]  + a[3] * b[4]  + a[4] * b[5] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_147(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[4] ;
	
	
	//_e2
	r[1] = a[1] * b[5] ;
	
	
	//_e3
	r[2] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_153_148(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_e12
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_149(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[7] * b[3]  * -1 ;
	
	
	//_e2
	r[1] = a[6] * b[3] ;
	
	
	//_e3
	r[2] = a[5] * b[3]  * -1 ;
	
	
	//_e123
	r[3] = a[1] * b[3] ;
	
	
	return r;
}

double * conga_ip_153_150(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_e12
	r[1] = a[1] * b[3]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[4]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[5]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_151(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[7] * b[7]  * -1  + a[9] * b[4]  * -1  + a[10] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[1]  + a[6] * b[7]  + a[8] * b[4]  + a[10] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[2]  + a[5] * b[7]  * -1  + a[8] * b[5]  + a[9] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[1] * b[3]  * -1  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6] ;
	
	
	//_e12no
	r[5] = a[0] * b[4] ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[6]  * -1 ;
	
	
	//_e123
	r[11] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_153_152(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  * -1  + a[5] * b[1]  + a[6] * b[2]  + a[7] * b[3]  + a[8] * b[4]  + a[9] * b[5]  + a[10] * b[6]  + a[11] * b[7]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[1]  * -1  + a[10] * b[7] ;
	
	
	//_e13
	r[2] = a[1] * b[2]  * -1  + a[9] * b[7]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[3]  * -1  + a[8] * b[7] ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1  + a[4] * b[7] ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1  + a[3] * b[7]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1  + a[2] * b[7] ;
	
	
	//_e1ni
	r[7] = a[1] * b[4]  + a[7] * b[7]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[5]  + a[6] * b[7] ;
	
	
	//_e3ni
	r[9] = a[1] * b[6]  + a[5] * b[7]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[7]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[7] ;
	
	
	return r;
}

double * conga_ip_153_153(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[1]  * -1  + a[1] * b[0]  * -1  + a[2] * b[5]  + a[3] * b[6]  + a[4] * b[7]  + a[5] * b[2]  + a[6] * b[3]  + a[7] * b[4]  + a[8] * b[8]  + a[9] * b[9]  + a[10] * b[10]  + a[11] * b[11]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1  + a[10] * b[11] ;
	
	
	//_e13
	r[2] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1  + a[9] * b[11]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1  + a[8] * b[11] ;
	
	
	//_e1no
	r[4] = a[0] * b[8]  * -1  + a[4] * b[11] ;
	
	
	//_e2no
	r[5] = a[0] * b[9]  * -1  + a[3] * b[11]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[10]  * -1  + a[2] * b[11] ;
	
	
	//_e1ni
	r[7] = a[1] * b[8]  + a[7] * b[11]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[9]  + a[6] * b[11] ;
	
	
	//_e3ni
	r[9] = a[1] * b[10]  + a[5] * b[11]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[11]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[11] ;
	
	
	return r;
}

double * conga_ip_153_154(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[1] * b[0]  + a[4] * b[7]  * -1  + a[7] * b[6]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[1]  + a[3] * b[7]  + a[6] * b[6] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[2]  + a[2] * b[7]  * -1  + a[5] * b[6]  * -1 ;
	
	
	//_e123
	r[3] = a[0] * b[7]  + a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_153_155(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[0]  * -1  + a[5] * b[1]  + a[6] * b[2]  + a[7] * b[3]  + a[8] * b[4]  + a[9] * b[5]  + a[10] * b[6] ;
	
	
	//_e12
	r[1] = a[1] * b[1]  * -1 ;
	
	
	//_e13
	r[2] = a[1] * b[2]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[3]  * -1 ;
	
	
	//_e1no
	r[4] = a[0] * b[4]  * -1 ;
	
	
	//_e2no
	r[5] = a[0] * b[5]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[6]  * -1 ;
	
	
	//_e1ni
	r[7] = a[1] * b[4] ;
	
	
	//_e2ni
	r[8] = a[1] * b[5] ;
	
	
	//_e3ni
	r[9] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_153_156(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[7] * b[6]  * -1  + a[9] * b[3]  * -1  + a[10] * b[4]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[1]  + a[6] * b[6]  + a[8] * b[3]  + a[10] * b[5]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[2]  + a[5] * b[6]  * -1  + a[8] * b[4]  + a[9] * b[5] ;
	
	
	//_no
	r[3] = a[2] * b[3]  * -1  + a[3] * b[4]  * -1  + a[4] * b[5]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5] ;
	
	
	//_e12no
	r[5] = a[0] * b[3] ;
	
	
	//_e13no
	r[6] = a[0] * b[4] ;
	
	
	//_e23no
	r[7] = a[0] * b[5] ;
	
	
	//_e12ni
	r[8] = a[1] * b[3]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[4]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[5]  * -1 ;
	
	
	//_e123
	r[11] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_153_157(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[4]  + a[1] * b[1]  + a[9] * b[8]  * -1  + a[10] * b[9]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[5]  + a[1] * b[2]  + a[8] * b[8]  + a[10] * b[10]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[6]  + a[1] * b[3]  + a[8] * b[9]  + a[9] * b[10] ;
	
	
	//_no
	r[3] = a[0] * b[7]  + a[2] * b[8]  * -1  + a[3] * b[9]  * -1  + a[4] * b[10]  * -1 ;
	
	
	//_ni
	r[4] = a[1] * b[7]  * -1  + a[5] * b[8]  + a[6] * b[9]  + a[7] * b[10] ;
	
	
	//_e12no
	r[5] = a[0] * b[8] ;
	
	
	//_e13no
	r[6] = a[0] * b[9] ;
	
	
	//_e23no
	r[7] = a[0] * b[10] ;
	
	
	//_e12ni
	r[8] = a[1] * b[8]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[9]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[10]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_158(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[6]  + a[3] * b[7]  + a[4] * b[8]  + a[5] * b[3]  + a[6] * b[4]  + a[7] * b[5]  + a[11] * b[10]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[6]  * -1  + a[1] * b[3]  * -1  + a[10] * b[10] ;
	
	
	//_e13
	r[2] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1  + a[9] * b[10]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1  + a[8] * b[10] ;
	
	
	//_e1no
	r[4] = a[4] * b[10] ;
	
	
	//_e2no
	r[5] = a[3] * b[10]  * -1 ;
	
	
	//_e3no
	r[6] = a[2] * b[10] ;
	
	
	//_e1ni
	r[7] = a[7] * b[10]  * -1 ;
	
	
	//_e2ni
	r[8] = a[6] * b[10] ;
	
	
	//_e3ni
	r[9] = a[5] * b[10]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[10]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[10] ;
	
	
	return r;
}

double * conga_ip_153_159(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4]  + a[4] * b[13]  * -1  + a[9] * b[10]  * -1  + a[10] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5]  + a[3] * b[13]  + a[8] * b[10]  + a[10] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6]  + a[2] * b[13]  * -1  + a[8] * b[11]  + a[9] * b[12] ;
	
	
	//_no
	r[3] = a[2] * b[10]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[10]  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_e12no
	r[5] = a[0] * b[10] ;
	
	
	//_e13no
	r[6] = a[0] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[12] ;
	
	
	//_e12ni
	r[8] = a[1] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[12]  * -1 ;
	
	
	//_e123
	r[11] = a[0] * b[13] ;
	
	
	return r;
}

double * conga_ip_153_160(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[3]  * -1  + a[2] * b[7]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[10]  + a[9] * b[11]  + a[10] * b[12]  + a[11] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1  + a[10] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1  + a[9] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1  + a[8] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1  + a[4] * b[13] ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1  + a[2] * b[13] ;
	
	
	//_e1ni
	r[7] = a[1] * b[10]  + a[7] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[11]  + a[6] * b[13] ;
	
	
	//_e3ni
	r[9] = a[1] * b[12]  + a[5] * b[13]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[13]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_153_161(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[1] * b[3]  * -1  + a[2] * b[7]  + a[3] * b[8]  + a[4] * b[9]  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6]  + a[8] * b[10]  + a[9] * b[11]  + a[10] * b[12]  + a[11] * b[13]  * -1 ;
	
	
	//_e12
	r[1] = a[0] * b[7]  * -1  + a[1] * b[4]  * -1  + a[10] * b[13] ;
	
	
	//_e13
	r[2] = a[0] * b[8]  * -1  + a[1] * b[5]  * -1  + a[9] * b[13]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[9]  * -1  + a[1] * b[6]  * -1  + a[8] * b[13] ;
	
	
	//_e1no
	r[4] = a[0] * b[10]  * -1  + a[4] * b[13] ;
	
	
	//_e2no
	r[5] = a[0] * b[11]  * -1  + a[3] * b[13]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[12]  * -1  + a[2] * b[13] ;
	
	
	//_e1ni
	r[7] = a[1] * b[10]  + a[7] * b[13]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[11]  + a[6] * b[13] ;
	
	
	//_e3ni
	r[9] = a[1] * b[12]  + a[5] * b[13]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[13]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_153_162(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[7]  + a[1] * b[4]  + a[7] * b[13]  * -1  + a[9] * b[10]  * -1  + a[10] * b[11]  * -1 ;
	
	
	//_e2
	r[1] = a[0] * b[8]  + a[1] * b[5]  + a[6] * b[13]  + a[8] * b[10]  + a[10] * b[12]  * -1 ;
	
	
	//_e3
	r[2] = a[0] * b[9]  + a[1] * b[6]  + a[5] * b[13]  * -1  + a[8] * b[11]  + a[9] * b[12] ;
	
	
	//_no
	r[3] = a[2] * b[10]  * -1  + a[3] * b[11]  * -1  + a[4] * b[12]  * -1 ;
	
	
	//_ni
	r[4] = a[5] * b[10]  + a[6] * b[11]  + a[7] * b[12] ;
	
	
	//_e12no
	r[5] = a[0] * b[10] ;
	
	
	//_e13no
	r[6] = a[0] * b[11] ;
	
	
	//_e23no
	r[7] = a[0] * b[12] ;
	
	
	//_e12ni
	r[8] = a[1] * b[10]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[11]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[12]  * -1 ;
	
	
	//_e123
	r[11] = a[1] * b[13] ;
	
	
	return r;
}

double * conga_ip_153_163(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[1] * b[0]  + a[9] * b[4]  * -1  + a[10] * b[5]  * -1 ;
	
	
	//_e2
	r[1] = a[1] * b[1]  + a[8] * b[4]  + a[10] * b[6]  * -1 ;
	
	
	//_e3
	r[2] = a[1] * b[2]  + a[8] * b[5]  + a[9] * b[6] ;
	
	
	//_no
	r[3] = a[0] * b[3]  + a[2] * b[4]  * -1  + a[3] * b[5]  * -1  + a[4] * b[6]  * -1 ;
	
	
	//_ni
	r[4] = a[1] * b[3]  * -1  + a[5] * b[4]  + a[6] * b[5]  + a[7] * b[6] ;
	
	
	//_e12no
	r[5] = a[0] * b[4] ;
	
	
	//_e13no
	r[6] = a[0] * b[5] ;
	
	
	//_e23no
	r[7] = a[0] * b[6] ;
	
	
	//_e12ni
	r[8] = a[1] * b[4]  * -1 ;
	
	
	//_e13ni
	r[9] = a[1] * b[5]  * -1 ;
	
	
	//_e23ni
	r[10] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_164(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[5] * b[0]  + a[6] * b[1]  + a[7] * b[2]  + a[8] * b[3]  + a[9] * b[4]  + a[10] * b[5]  + a[11] * b[6]  * -1 ;
	
	
	//_e12
	r[1] = a[1] * b[0]  * -1  + a[10] * b[6] ;
	
	
	//_e13
	r[2] = a[1] * b[1]  * -1  + a[9] * b[6]  * -1 ;
	
	
	//_e23
	r[3] = a[1] * b[2]  * -1  + a[8] * b[6] ;
	
	
	//_e1no
	r[4] = a[0] * b[3]  * -1  + a[4] * b[6] ;
	
	
	//_e2no
	r[5] = a[0] * b[4]  * -1  + a[3] * b[6]  * -1 ;
	
	
	//_e3no
	r[6] = a[0] * b[5]  * -1  + a[2] * b[6] ;
	
	
	//_e1ni
	r[7] = a[1] * b[3]  + a[7] * b[6]  * -1 ;
	
	
	//_e2ni
	r[8] = a[1] * b[4]  + a[6] * b[6] ;
	
	
	//_e3ni
	r[9] = a[1] * b[5]  + a[5] * b[6]  * -1 ;
	
	
	//_e123no
	r[10] = a[0] * b[6]  * -1 ;
	
	
	//_e123ni
	r[11] = a[1] * b[6] ;
	
	
	return r;
}

double * conga_ip_153_165(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[2] * b[3]  + a[3] * b[4]  + a[4] * b[5]  + a[5] * b[0]  + a[6] * b[1]  + a[7] * b[2] ;
	
	
	//_e12
	r[1] = a[0] * b[3]  * -1  + a[1] * b[0]  * -1 ;
	
	
	//_e13
	r[2] = a[0] * b[4]  * -1  + a[1] * b[1]  * -1 ;
	
	
	//_e23
	r[3] = a[0] * b[5]  * -1  + a[1] * b[2]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_166(double * a, double * b, double *r) { 
	
	//_e1
	r[0] = a[0] * b[3]  + a[1] * b[0] ;
	
	
	//_e2
	r[1] = a[0] * b[4]  + a[1] * b[1] ;
	
	
	//_e3
	r[2] = a[0] * b[5]  + a[1] * b[2] ;
	
	
	//_no
	r[3] = a[0] * b[6] ;
	
	
	//_ni
	r[4] = a[1] * b[6]  * -1 ;
	
	
	return r;
}

double * conga_ip_153_167(double * a, double * b, double *r) { 
	
	//_s
	r[0] = a[0] * b[5]  * -1  + a[1] * b[4]  * -1  + a[2] * b[19]  + a[3] * b[20]  + a[4] * b[21]  + a[5] * b[16]  + a[6] * b[17]  + a[7] * b[18]  + a[8] * b[22]  + a[9] * b[23]  + a[10] * b[24]  + a[11] * b[31]  * -1 ;
	
	
	//_e1
	r[1] = a[0] * b[12]  + a[1] * b[9]  + a[4] * b[30]  * -1  + a[7] * b[29]  * -1  + a[9] * b[26]  * -1  + a[10] * b[27]  * -1 ;
	
	
	//_e2
	r[2] = a[0] * b[13]  + a[1] * b[10]  + a[3] * b[30]  + a[6] * b[29]  + a[8] * b[26]  + a[10] * b[28]  * -1 ;
	
	
	//_e3
	r[3] = a[0] * b[14]  + a[1] * b[11]  + a[2] * b[30]  * -1  + a[5] * b[29]  * -1  + a[8] * b[27]  + a[9] * b[28] ;
	
	
	//_no
	r[4] = a[0] * b[15]  + a[2] * b[26]  * -1  + a[3] * b[27]  * -1  + a[4] * b[28]  * -1 ;
	
	
	//_ni
	r[5] = a[1] * b[15]  * -1  + a[5] * b[26]  + a[6] * b[27]  + a[7] * b[28] ;
	
	
	//_e12
	r[6] = a[0] * b[19]  * -1  + a[1] * b[16]  * -1  + a[10] * b[31] ;
	
	
	//_e13
	r[7] = a[0] * b[20]  * -1  + a[1] * b[17]  * -1  + a[9] * b[31]  * -1 ;
	
	
	//_e23
	r[8] = a[0] * b[21]  * -1  + a[1] * b[18]  * -1  + a[8] * b[31] ;
	
	
	//_e1no
	r[9] = a[0] * b[22]  * -1  + a[4] * b[31] ;
	
	
	//_e2no
	r[10] = a[0] * b[23]  * -1  + a[3] * b[31]  * -1 ;
	
	
	//_e3no
	r[11] = a[0] * b[24]  * -1  + a[2] * b[31] ;
	
	
	//_e1ni
	r[12] = a[1] * b[22]  + a[7] * b[31]  * -1 ;
	
	
	//_e2ni
	r[13] = a[1] * b[23]  + a[6] * b[31] ;
	
	
	//_e3ni
	r[14] = a[1] * b[24]  + a[5] * b[31]  * -1 ;
	
	
	//_e12no
	r[15] = a[0] * b[26] ;
	
	
	//_e13no
	r[16] = a[0] * b[27] ;
	
	
	//_e23no
	r[17] = a[0] * b[28] ;
	
	
	//_e12ni
	r[18] = a[1] * b[26]  * -1 ;
	
	
	//_e13ni
	r[19] = a[1] * b[27]  * -1 ;
	
	
	//_e23ni
	r[20] = a[1] * b[28]  * -1 ;
	
	
	//_e123
	r[21] = a[0] * b[30]  + a[1] * b[29] ;
	
	
	//_e123no
	r[22] = a[0] * b[31]  * -1 ;
	
	
	//_e123ni
	r[23] = a[1] * b[31] ;
	
	
	return r;
}


