		#ifndef RTD_H_INCLUDED
		#define RTD_H_INCLUDED
		
		#include "vsr_typedefs.h"
		
		namespace vsr{
	 
inline Rtd gp (const Rtd& a, const Sca& b) { 
	return Rtd (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Sca> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Sca*)(&b));
}			
		 
inline Tnv_Vec gp (const Rtd& a, const Ori& b) { 
	return Tnv_Vec (
a[0] * b[0] - a[4] * b[0],
a[1] * b[0] - a[5] * b[0],
a[2] * b[0] - a[6] * b[0],
a[3] * b[0] - a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Ori> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Ori*)(&b));
}			
		 
inline Drv_Lin gp (const Rtd& a, const Inf& b) { 
	return Drv_Lin (
a[0] * b[0] + a[4] * b[0],
a[1] * b[0] + a[5] * b[0],
a[2] * b[0] + a[6] * b[0],
a[3] * b[0] + a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Inf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Inf*)(&b));
}			
		 
inline Rtd gp (const Rtd& a, const Mnk& b) { 
	return Rtd (
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[7] * b[0],
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Mnk> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Mnk*)(&b));
}			
		 
inline Hyp_Vec_Mnv gp (const Rtd& a, const Hyp& b) { 
	return Hyp_Vec_Mnv (
a[0] * b[0] - a[4] * b[0],
a[0] * b[1] + a[4] * b[1],
a[1] * b[0] - a[5] * b[0],
a[2] * b[0] - a[6] * b[0],
a[3] * b[0] - a[7] * b[0],
a[1] * b[1] + a[5] * b[1],
a[2] * b[1] + a[6] * b[1],
a[3] * b[1] + a[7] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Hyp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Hyp*)(&b));
}			
		 
inline Drv_Tnb gp (const Rtd& a, const Pss& b) { 
	return Drv_Tnb (
 - a[7] * b[0],
a[6] * b[0],
 - a[5] * b[0],
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
a[4] * b[0],
a[0] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Pss> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Pss*)(&b));
}			
		 
inline Rtc gp (const Rtd& a, const Pnt& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[4] * b[3],
a[0] * b[4] + a[4] * b[4],
a[1] * b[3] - a[5] * b[3],
a[2] * b[3] - a[6] * b[3],
a[3] * b[3] - a[7] * b[3],
a[1] * b[4] + a[5] * b[4],
a[2] * b[4] + a[6] * b[4],
a[3] * b[4] + a[7] * b[4],
a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[4] * b[1] - a[5] * b[0] + a[7] * b[2],
a[4] * b[2] - a[6] * b[0] - a[7] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
a[5] * b[2] - a[6] * b[1] + a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Pnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Pnt*)(&b));
}			
		 
inline Mtt gp (const Rtd& a, const Par& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[4] * b[9],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[5] * b[9],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[6] * b[9],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[7] * b[9],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[4] * b[3] - a[5] * b[4] - a[6] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] - a[4] * b[4] + a[5] * b[3] - a[7] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] - a[4] * b[5] + a[6] * b[3] + a[7] * b[4],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] + a[4] * b[6] + a[5] * b[7] + a[6] * b[8],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8] + a[4] * b[7] - a[5] * b[6] + a[7] * b[8],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7] + a[4] * b[8] - a[6] * b[6] - a[7] * b[7],
a[0] * b[9] - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[1] * b[9] + a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[2] * b[9] + a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
a[3] * b[9] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] - a[5] * b[5] + a[6] * b[4] - a[7] * b[3],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6] + a[5] * b[8] - a[6] * b[7] + a[7] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Par> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Par*)(&b));
}			
		 
inline Rtc gp (const Rtd& a, const Cir& b) { 
	return Rtc (
 - a[3] * b[9] + a[4] * b[6] + a[5] * b[7] + a[6] * b[8],
a[2] * b[9] + a[4] * b[7] - a[5] * b[6] + a[7] * b[8],
 - a[1] * b[9] + a[4] * b[8] - a[6] * b[6] - a[7] * b[7],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[5] * b[0] + a[6] * b[1] + a[7] * b[2],
 - a[1] * b[3] - a[2] * b[4] - a[3] * b[5] - a[5] * b[3] - a[6] * b[4] - a[7] * b[5],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[4] * b[0] + a[6] * b[2] - a[7] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[4] * b[1] - a[5] * b[2] + a[7] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[2] + a[5] * b[1] - a[6] * b[0],
a[0] * b[3] - a[2] * b[5] + a[3] * b[4] + a[4] * b[3] - a[6] * b[5] + a[7] * b[4],
a[0] * b[4] + a[1] * b[5] - a[3] * b[3] + a[4] * b[4] + a[5] * b[5] - a[7] * b[3],
a[0] * b[5] - a[1] * b[4] + a[2] * b[3] + a[4] * b[5] - a[5] * b[4] + a[6] * b[3],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] - a[7] * b[9],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8] + a[6] * b[9],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7] - a[5] * b[9],
a[0] * b[9] + a[5] * b[8] - a[6] * b[7] + a[7] * b[6],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6] + a[4] * b[9]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Cir> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Cir*)(&b));
}			
		 
inline Mtt gp (const Rtd& a, const Sph& b) { 
	return Mtt (
 - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
 - a[3] * b[3] + a[7] * b[3],
a[2] * b[3] - a[6] * b[3],
 - a[1] * b[3] + a[5] * b[3],
 - a[3] * b[4] - a[7] * b[4],
a[2] * b[4] + a[6] * b[4],
 - a[1] * b[4] - a[5] * b[4],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] - a[4] * b[3],
a[0] * b[4] + a[4] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Sph> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Sph*)(&b));
}			
		 
inline Mtt gp (const Rtd& a, const Sta& b) { 
	return Mtt (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[4] * b[3] - a[5] * b[4] - a[6] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] - a[4] * b[4] + a[5] * b[3] - a[7] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] - a[4] * b[5] + a[6] * b[3] + a[7] * b[4],
a[0] * b[6] + a[1] * b[7] + a[2] * b[8] + a[4] * b[6] + a[5] * b[7] + a[6] * b[8],
a[0] * b[7] - a[1] * b[6] + a[3] * b[8] + a[4] * b[7] - a[5] * b[6] + a[7] * b[8],
a[0] * b[8] - a[2] * b[6] - a[3] * b[7] + a[4] * b[8] - a[6] * b[6] - a[7] * b[7],
 - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] - a[5] * b[5] + a[6] * b[4] - a[7] * b[3],
a[1] * b[8] - a[2] * b[7] + a[3] * b[6] + a[5] * b[8] - a[6] * b[7] + a[7] * b[6]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Sta> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Sta*)(&b));
}			
		 
inline Drv_Pln gp (const Rtd& a, const Drv& b) { 
	return Drv_Pln (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] + a[4] * b[1] - a[5] * b[0] + a[7] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] + a[4] * b[2] - a[6] * b[0] - a[7] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] + a[5] * b[2] - a[6] * b[1] + a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Drv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Drv*)(&b));
}			
		 
inline Drv_Lin gp (const Rtd& a, const Drb& b) { 
	return Drv_Lin (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Drb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Drb*)(&b));
}			
		 
inline Drv_Pln gp (const Rtd& a, const Drt& b) { 
	return Drv_Pln (
 - a[3] * b[0] - a[7] * b[0],
a[2] * b[0] + a[6] * b[0],
 - a[1] * b[0] - a[5] * b[0],
a[0] * b[0] + a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Drt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Drt*)(&b));
}			
		 
inline Tnv_Biv gp (const Rtd& a, const Tnv& b) { 
	return Tnv_Biv (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0] - a[7] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[4] * b[2] + a[6] * b[0] + a[7] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[5] * b[2] + a[6] * b[1] - a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Tnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Tnv*)(&b));
}			
		 
inline Tnv_Vec gp (const Rtd& a, const Tnb& b) { 
	return Tnv_Vec (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[5] * b[0] + a[6] * b[1] + a[7] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[4] * b[0] + a[6] * b[2] - a[7] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[4] * b[1] - a[5] * b[2] + a[7] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[2] + a[5] * b[1] - a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Tnb> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Tnb*)(&b));
}			
		 
inline Tnv_Biv gp (const Rtd& a, const Tnt& b) { 
	return Tnv_Biv (
 - a[3] * b[0] + a[7] * b[0],
a[2] * b[0] - a[6] * b[0],
 - a[1] * b[0] + a[5] * b[0],
a[0] * b[0] - a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Tnt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Tnt*)(&b));
}			
		 
inline Par_Drb gp (const Rtd& a, const Lin& b) { 
	return Par_Drb (
a[4] * b[3] + a[5] * b[4] + a[6] * b[5],
a[4] * b[4] - a[5] * b[3] + a[7] * b[5],
a[4] * b[5] - a[6] * b[3] - a[7] * b[4],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4],
a[5] * b[5] - a[6] * b[4] + a[7] * b[3],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Lin> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Lin*)(&b));
}			
		 
inline Mtd gp (const Rtd& a, const Pln& b) { 
	return Mtd (
 - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
 - a[3] * b[3] - a[7] * b[3],
a[2] * b[3] + a[6] * b[3],
 - a[1] * b[3] - a[5] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] + a[4] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Pln> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Pln*)(&b));
}			
		 
inline Mtd gp (const Rtd& a, const Flp& b) { 
	return Mtd (
a[4] * b[3],
a[5] * b[3],
a[6] * b[3],
a[7] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] + a[4] * b[1] - a[5] * b[0] + a[7] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] + a[4] * b[2] - a[6] * b[0] - a[7] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] + a[5] * b[2] - a[6] * b[1] + a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Flp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Flp*)(&b));
}			
		 
inline Par_Drb gp (const Rtd& a, const Dfp& b) { 
	return Par_Drb (
 - a[3] * b[3],
a[2] * b[3],
 - a[1] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] + a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] + a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] + a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
 - a[7] * b[3],
a[6] * b[3],
 - a[5] * b[3],
a[0] * b[3],
a[4] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Dfp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Dfp*)(&b));
}			
		 
inline Mtd gp (const Rtd& a, const Dll& b) { 
	return Mtd (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] + a[4] * b[3] + a[5] * b[4] + a[6] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] + a[4] * b[4] - a[5] * b[3] + a[7] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] + a[4] * b[5] - a[6] * b[3] - a[7] * b[4],
 - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] + a[5] * b[5] - a[6] * b[4] + a[7] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Dll> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Dll*)(&b));
}			
		 
inline Par_Drb gp (const Rtd& a, const Dlp& b) { 
	return Par_Drb (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[0] * b[3] + a[4] * b[3],
a[1] * b[3] + a[5] * b[3],
a[2] * b[3] + a[6] * b[3],
a[3] * b[3] + a[7] * b[3],
a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[4] * b[1] - a[5] * b[0] + a[7] * b[2],
a[4] * b[2] - a[6] * b[0] - a[7] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
a[5] * b[2] - a[6] * b[1] + a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Dlp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Dlp*)(&b));
}			
		 
inline Drv_Tnb gp (const Rtd& a, const Vec& b) { 
	return Drv_Tnb (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[4] * b[1] - a[5] * b[0] + a[7] * b[2],
a[4] * b[2] - a[6] * b[0] - a[7] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
a[5] * b[2] - a[6] * b[1] + a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Vec> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Vec*)(&b));
}			
		 
inline Rtd gp (const Rtd& a, const Biv& b) { 
	return Rtd (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
 - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Biv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Biv*)(&b));
}			
		 
inline Drv_Tnb gp (const Rtd& a, const Tri& b) { 
	return Drv_Tnb (
 - a[3] * b[0],
a[2] * b[0],
 - a[1] * b[0],
 - a[7] * b[0],
a[6] * b[0],
 - a[5] * b[0],
a[0] * b[0],
a[4] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Tri> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Tri*)(&b));
}			
		 
inline Par_Tnb gp (const Rtd& a, const Aff& b) { 
	return Par_Tnb (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[4] * b[3],
a[1] * b[3] - a[5] * b[3],
a[2] * b[3] - a[6] * b[3],
a[3] * b[3] - a[7] * b[3],
a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[4] * b[1] - a[5] * b[0] + a[7] * b[2],
a[4] * b[2] - a[6] * b[0] - a[7] * b[1],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0],
a[5] * b[2] - a[6] * b[1] + a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Aff> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Aff*)(&b));
}			
		 
inline Rvd gp (const Rtd& a, const Afl& b) { 
	return Rvd (
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5] - a[4] * b[3] - a[5] * b[4] - a[6] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5] - a[4] * b[4] + a[5] * b[3] - a[7] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4] - a[4] * b[5] + a[6] * b[3] + a[7] * b[4],
 - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3] - a[5] * b[5] + a[6] * b[4] - a[7] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Afl> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Afl*)(&b));
}			
		 
inline Par_Tnb gp (const Rtd& a, const Afp& b) { 
	return Par_Tnb (
 - a[3] * b[3],
a[2] * b[3],
 - a[1] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[5] * b[0] + a[6] * b[1] + a[7] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[4] * b[0] + a[6] * b[2] - a[7] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[4] * b[1] - a[5] * b[2] + a[7] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[2] + a[5] * b[1] - a[6] * b[0],
 - a[7] * b[3],
a[6] * b[3],
 - a[5] * b[3],
a[0] * b[3],
a[4] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Afp> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Afp*)(&b));
}			
		 
inline Rvd gp (const Rtd& a, const Dap& b) { 
	return Rvd (
a[4] * b[3],
a[5] * b[3],
a[6] * b[3],
a[7] * b[3],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[4] * b[0] - a[5] * b[1] - a[6] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2] - a[4] * b[1] + a[5] * b[0] - a[7] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1] - a[4] * b[2] + a[6] * b[0] + a[7] * b[1],
a[0] * b[3],
a[1] * b[3],
a[2] * b[3],
a[3] * b[3],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0] - a[5] * b[2] + a[6] * b[1] - a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Dap> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Dap*)(&b));
}			
		 
inline Rvd gp (const Rtd& a, const Daf& b) { 
	return Rvd (
 - a[5] * b[0] - a[6] * b[1] - a[7] * b[2],
a[4] * b[0] - a[6] * b[2] + a[7] * b[1],
a[4] * b[1] + a[5] * b[2] - a[7] * b[0],
a[4] * b[2] - a[5] * b[1] + a[6] * b[0],
 - a[3] * b[3] + a[7] * b[3],
a[2] * b[3] - a[6] * b[3],
 - a[1] * b[3] + a[5] * b[3],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0],
a[0] * b[3] - a[4] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Daf> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Daf*)(&b));
}			
		 
inline Par_Tnb gp (const Rtd& a, const Dal& b) { 
	return Par_Tnb (
a[4] * b[3] + a[5] * b[4] + a[6] * b[5],
a[4] * b[4] - a[5] * b[3] + a[7] * b[5],
a[4] * b[5] - a[6] * b[3] - a[7] * b[4],
 - a[1] * b[0] - a[2] * b[1] - a[3] * b[2] + a[5] * b[0] + a[6] * b[1] + a[7] * b[2],
a[0] * b[0] - a[2] * b[2] + a[3] * b[1] - a[4] * b[0] + a[6] * b[2] - a[7] * b[1],
a[0] * b[1] + a[1] * b[2] - a[3] * b[0] - a[4] * b[1] - a[5] * b[2] + a[7] * b[0],
a[0] * b[2] - a[1] * b[1] + a[2] * b[0] - a[4] * b[2] + a[5] * b[1] - a[6] * b[0],
a[0] * b[3] + a[1] * b[4] + a[2] * b[5],
a[0] * b[4] - a[1] * b[3] + a[3] * b[5],
a[0] * b[5] - a[2] * b[3] - a[3] * b[4],
a[5] * b[5] - a[6] * b[4] + a[7] * b[3],
a[1] * b[5] - a[2] * b[4] + a[3] * b[3]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Dal> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Dal*)(&b));
}			
		 
inline Drv_Tnb gp (const Rtd& a, const Mnv& b) { 
	return Drv_Tnb (
a[4] * b[0] + a[5] * b[1] + a[6] * b[2],
a[4] * b[1] - a[5] * b[0] + a[7] * b[2],
a[4] * b[2] - a[6] * b[0] - a[7] * b[1],
a[0] * b[0] + a[1] * b[1] + a[2] * b[2],
a[0] * b[1] - a[1] * b[0] + a[3] * b[2],
a[0] * b[2] - a[2] * b[0] - a[3] * b[1],
a[5] * b[2] - a[6] * b[1] + a[7] * b[0],
a[1] * b[2] - a[2] * b[1] + a[3] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Mnv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Mnv*)(&b));
}			
		 
inline Rtd gp (const Rtd& a, const Rot& b) { 
	return Rtd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[7] * b[3],
a[4] * b[1] + a[5] * b[0] - a[6] * b[3] + a[7] * b[2],
a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[7] * b[1],
a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Rot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Rot*)(&b));
}			
		 
inline Mtd gp (const Rtd& a, const Mot& b) { 
	return Mtd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[7] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] - a[7] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7] + a[3] * b[6] + a[4] * b[5] - a[5] * b[4] + a[6] * b[7] + a[7] * b[6],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4] - a[3] * b[5] + a[4] * b[6] - a[5] * b[7] - a[6] * b[4] - a[7] * b[5],
a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[7] * b[3],
a[4] * b[1] + a[5] * b[0] - a[6] * b[3] + a[7] * b[2],
a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[7] * b[1],
a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[7] * b[0],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[7] + a[5] * b[6] - a[6] * b[5] + a[7] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Mot> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Mot*)(&b));
}			
		 
inline Rtd gp (const Rtd& a, const Dil& b) { 
	return Rtd (
a[0] * b[0] + a[4] * b[1],
a[1] * b[0] + a[5] * b[1],
a[2] * b[0] + a[6] * b[1],
a[3] * b[0] + a[7] * b[1],
a[0] * b[1] + a[4] * b[0],
a[1] * b[1] + a[5] * b[0],
a[2] * b[1] + a[6] * b[0],
a[3] * b[1] + a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Dil> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Dil*)(&b));
}			
		 
inline Rvd gp (const Rtd& a, const Trv& b) { 
	return Rvd (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] - a[4] * b[1] - a[5] * b[2] - a[6] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1] - a[7] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] - a[4] * b[3] + a[6] * b[1] + a[7] * b[2],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[7] * b[0],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1] - a[5] * b[3] + a[6] * b[2] - a[7] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Trv> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Trv*)(&b));
}			
		 
inline Mtd gp (const Rtd& a, const Mtd& b) { 
	return Mtd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] - a[5] * b[8] - a[6] * b[9] - a[7] * b[10],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] + a[5] * b[7] - a[6] * b[10] + a[7] * b[9],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] + a[5] * b[10] + a[6] * b[7] - a[7] * b[8],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[10] - a[5] * b[9] + a[6] * b[8] + a[7] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[11] + a[4] * b[4] + a[5] * b[5] + a[6] * b[6] - a[7] * b[11],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[6] + a[4] * b[5] - a[5] * b[4] + a[6] * b[11] + a[7] * b[6],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] - a[3] * b[5] + a[4] * b[6] - a[5] * b[11] - a[6] * b[4] - a[7] * b[5],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10] + a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[7] * b[3],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] + a[3] * b[9] + a[4] * b[1] + a[5] * b[0] - a[6] * b[3] + a[7] * b[2],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] - a[3] * b[8] + a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[7] * b[1],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[7] + a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[7] * b[0],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] + a[4] * b[11] + a[5] * b[6] - a[6] * b[5] + a[7] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Mtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Mtd*)(&b));
}			
		 
inline Mtd gp (const Rtd& a, const Trs& b) { 
	return Mtd (
a[0] * b[0],
a[1] * b[0],
a[2] * b[0],
a[3] * b[0],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[4] * b[1] + a[5] * b[2] + a[6] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] + a[4] * b[2] - a[5] * b[1] + a[7] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] + a[4] * b[3] - a[6] * b[1] - a[7] * b[2],
a[4] * b[0],
a[5] * b[0],
a[6] * b[0],
a[7] * b[0],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1] + a[5] * b[3] - a[6] * b[2] + a[7] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Trs> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Trs*)(&b));
}			
		 
inline Rtc gp (const Rtd& a, const Rtc& b) { 
	return Rtc (
a[0] * b[0] + a[1] * b[1] + a[2] * b[2] - a[3] * b[14] + a[4] * b[11] + a[5] * b[12] + a[6] * b[13] - a[7] * b[15],
a[0] * b[1] - a[1] * b[0] + a[2] * b[14] + a[3] * b[2] + a[4] * b[12] - a[5] * b[11] + a[6] * b[15] + a[7] * b[13],
a[0] * b[2] - a[1] * b[14] - a[2] * b[0] - a[3] * b[1] + a[4] * b[13] - a[5] * b[15] - a[6] * b[11] - a[7] * b[12],
a[0] * b[3] - a[1] * b[5] - a[2] * b[6] - a[3] * b[7] - a[4] * b[3] + a[5] * b[5] + a[6] * b[6] + a[7] * b[7],
a[0] * b[4] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10] + a[4] * b[4] - a[5] * b[8] - a[6] * b[9] - a[7] * b[10],
a[0] * b[5] + a[1] * b[3] - a[2] * b[7] + a[3] * b[6] - a[4] * b[5] - a[5] * b[3] + a[6] * b[7] - a[7] * b[6],
a[0] * b[6] + a[1] * b[7] + a[2] * b[3] - a[3] * b[5] - a[4] * b[6] - a[5] * b[7] - a[6] * b[3] + a[7] * b[5],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5] + a[3] * b[3] - a[4] * b[7] + a[5] * b[6] - a[6] * b[5] - a[7] * b[3],
a[0] * b[8] + a[1] * b[4] - a[2] * b[10] + a[3] * b[9] + a[4] * b[8] + a[5] * b[4] - a[6] * b[10] + a[7] * b[9],
a[0] * b[9] + a[1] * b[10] + a[2] * b[4] - a[3] * b[8] + a[4] * b[9] + a[5] * b[10] + a[6] * b[4] - a[7] * b[8],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[4] + a[4] * b[10] - a[5] * b[9] + a[6] * b[8] + a[7] * b[4],
a[0] * b[11] + a[1] * b[12] + a[2] * b[13] - a[3] * b[15] + a[4] * b[0] + a[5] * b[1] + a[6] * b[2] - a[7] * b[14],
a[0] * b[12] - a[1] * b[11] + a[2] * b[15] + a[3] * b[13] + a[4] * b[1] - a[5] * b[0] + a[6] * b[14] + a[7] * b[2],
a[0] * b[13] - a[1] * b[15] - a[2] * b[11] - a[3] * b[12] + a[4] * b[2] - a[5] * b[14] - a[6] * b[0] - a[7] * b[1],
a[0] * b[14] + a[1] * b[2] - a[2] * b[1] + a[3] * b[0] + a[4] * b[15] + a[5] * b[13] - a[6] * b[12] + a[7] * b[11],
a[0] * b[15] + a[1] * b[13] - a[2] * b[12] + a[3] * b[11] + a[4] * b[14] + a[5] * b[2] - a[6] * b[1] + a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Rtc> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Rtc*)(&b));
}			
		 
inline Mtt gp (const Rtd& a, const Mtt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[10] - a[5] * b[11] - a[6] * b[12] - a[7] * b[13],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[11] + a[5] * b[10] - a[6] * b[13] + a[7] * b[12],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[12] + a[5] * b[13] + a[6] * b[10] - a[7] * b[11],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[13] - a[5] * b[12] + a[6] * b[11] + a[7] * b[10],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[14] - a[4] * b[4] - a[5] * b[5] - a[6] * b[6] + a[7] * b[14],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[6] - a[4] * b[5] + a[5] * b[4] - a[6] * b[14] - a[7] * b[6],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] - a[3] * b[5] - a[4] * b[6] + a[5] * b[14] + a[6] * b[4] + a[7] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] - a[3] * b[15] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] - a[7] * b[15],
a[0] * b[8] - a[1] * b[7] + a[2] * b[15] + a[3] * b[9] + a[4] * b[8] - a[5] * b[7] + a[6] * b[15] + a[7] * b[9],
a[0] * b[9] - a[1] * b[15] - a[2] * b[7] - a[3] * b[8] + a[4] * b[9] - a[5] * b[15] - a[6] * b[7] - a[7] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] + a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[7] * b[3],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] + a[4] * b[1] + a[5] * b[0] - a[6] * b[3] + a[7] * b[2],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] + a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[7] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] + a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[7] * b[0],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] - a[4] * b[14] - a[5] * b[6] + a[6] * b[5] - a[7] * b[4],
a[0] * b[15] + a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[4] * b[15] + a[5] * b[9] - a[6] * b[8] + a[7] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Mtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Mtt*)(&b));
}			
		 
inline Rvd gp (const Rtd& a, const Rtt& b) { 
	return Rvd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[7] - a[4] * b[4] - a[5] * b[5] - a[6] * b[6] + a[7] * b[7],
a[0] * b[5] - a[1] * b[4] + a[2] * b[7] + a[3] * b[6] - a[4] * b[5] + a[5] * b[4] - a[6] * b[7] - a[7] * b[6],
a[0] * b[6] - a[1] * b[7] - a[2] * b[4] - a[3] * b[5] - a[4] * b[6] + a[5] * b[7] + a[6] * b[4] + a[7] * b[5],
a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[7] * b[3],
a[4] * b[1] + a[5] * b[0] - a[6] * b[3] + a[7] * b[2],
a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[7] * b[1],
a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[7] * b[0],
a[0] * b[7] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] - a[4] * b[7] - a[5] * b[6] + a[6] * b[5] - a[7] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Rtt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Rtt*)(&b));
}			
		 
inline Rtd gp (const Rtd& a, const Rtd& b) { 
	return Rtd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] - a[5] * b[5] - a[6] * b[6] - a[7] * b[7],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[5] + a[5] * b[4] - a[6] * b[7] + a[7] * b[6],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[6] + a[5] * b[7] + a[6] * b[4] - a[7] * b[5],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[7] - a[5] * b[6] + a[6] * b[5] + a[7] * b[4],
a[0] * b[4] - a[1] * b[5] - a[2] * b[6] - a[3] * b[7] + a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[7] * b[3],
a[0] * b[5] + a[1] * b[4] - a[2] * b[7] + a[3] * b[6] + a[4] * b[1] + a[5] * b[0] - a[6] * b[3] + a[7] * b[2],
a[0] * b[6] + a[1] * b[7] + a[2] * b[4] - a[3] * b[5] + a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[7] * b[1],
a[0] * b[7] - a[1] * b[6] + a[2] * b[5] + a[3] * b[4] + a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[7] * b[0]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Rtd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Rtd*)(&b));
}			
		 
inline Rvd gp (const Rtd& a, const Tvd& b) { 
	return Rvd (
a[0] * b[0] + a[4] * b[4],
a[1] * b[0] + a[5] * b[4],
a[2] * b[0] + a[6] * b[4],
a[3] * b[0] + a[7] * b[4],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] - a[4] * b[1] - a[5] * b[2] - a[6] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] - a[4] * b[2] + a[5] * b[1] - a[7] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] - a[4] * b[3] + a[6] * b[1] + a[7] * b[2],
a[0] * b[4] + a[4] * b[0],
a[1] * b[4] + a[5] * b[0],
a[2] * b[4] + a[6] * b[0],
a[3] * b[4] + a[7] * b[0],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1] - a[5] * b[3] + a[6] * b[2] - a[7] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Tvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Tvd*)(&b));
}			
		 
inline Mtd gp (const Rtd& a, const Tsd& b) { 
	return Mtd (
a[0] * b[0] + a[4] * b[4],
a[1] * b[0] + a[5] * b[4],
a[2] * b[0] + a[6] * b[4],
a[3] * b[0] + a[7] * b[4],
a[0] * b[1] + a[1] * b[2] + a[2] * b[3] + a[4] * b[1] + a[5] * b[2] + a[6] * b[3],
a[0] * b[2] - a[1] * b[1] + a[3] * b[3] + a[4] * b[2] - a[5] * b[1] + a[7] * b[3],
a[0] * b[3] - a[2] * b[1] - a[3] * b[2] + a[4] * b[3] - a[6] * b[1] - a[7] * b[2],
a[0] * b[4] + a[4] * b[0],
a[1] * b[4] + a[5] * b[0],
a[2] * b[4] + a[6] * b[0],
a[3] * b[4] + a[7] * b[0],
a[1] * b[3] - a[2] * b[2] + a[3] * b[1] + a[5] * b[3] - a[6] * b[2] + a[7] * b[1]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Tsd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Tsd*)(&b));
}			
		 
inline Mtt gp (const Rtd& a, const Trt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[10] - a[5] * b[11] - a[6] * b[12] - a[7] * b[13],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[11] + a[5] * b[10] - a[6] * b[13] + a[7] * b[12],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[12] + a[5] * b[13] + a[6] * b[10] - a[7] * b[11],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[13] - a[5] * b[12] + a[6] * b[11] + a[7] * b[10],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[4] * b[4] - a[5] * b[5] - a[6] * b[6],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6] - a[4] * b[5] + a[5] * b[4] - a[7] * b[6],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5] - a[4] * b[6] + a[6] * b[4] + a[7] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9] + a[4] * b[8] - a[5] * b[7] + a[7] * b[9],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8] + a[4] * b[9] - a[6] * b[7] - a[7] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] + a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[7] * b[3],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] + a[4] * b[1] + a[5] * b[0] - a[6] * b[3] + a[7] * b[2],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] + a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[7] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] + a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[7] * b[0],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4] - a[5] * b[6] + a[6] * b[5] - a[7] * b[4],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[5] * b[9] - a[6] * b[8] + a[7] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Trt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Trt*)(&b));
}			
		 
inline Rvd gp (const Rtd& a, const Rvd& b) { 
	return Rvd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[7] - a[5] * b[8] - a[6] * b[9] - a[7] * b[10],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[8] + a[5] * b[7] - a[6] * b[10] + a[7] * b[9],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[9] + a[5] * b[10] + a[6] * b[7] - a[7] * b[8],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[10] - a[5] * b[9] + a[6] * b[8] + a[7] * b[7],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[11] - a[4] * b[4] - a[5] * b[5] - a[6] * b[6] + a[7] * b[11],
a[0] * b[5] - a[1] * b[4] + a[2] * b[11] + a[3] * b[6] - a[4] * b[5] + a[5] * b[4] - a[6] * b[11] - a[7] * b[6],
a[0] * b[6] - a[1] * b[11] - a[2] * b[4] - a[3] * b[5] - a[4] * b[6] + a[5] * b[11] + a[6] * b[4] + a[7] * b[5],
a[0] * b[7] - a[1] * b[8] - a[2] * b[9] - a[3] * b[10] + a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[7] * b[3],
a[0] * b[8] + a[1] * b[7] - a[2] * b[10] + a[3] * b[9] + a[4] * b[1] + a[5] * b[0] - a[6] * b[3] + a[7] * b[2],
a[0] * b[9] + a[1] * b[10] + a[2] * b[7] - a[3] * b[8] + a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[7] * b[1],
a[0] * b[10] - a[1] * b[9] + a[2] * b[8] + a[3] * b[7] + a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[7] * b[0],
a[0] * b[11] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] - a[4] * b[11] - a[5] * b[6] + a[6] * b[5] - a[7] * b[4]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Rvd> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Rvd*)(&b));
}			
		 
inline Mtt gp (const Rtd& a, const Tst& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[10] - a[5] * b[11] - a[6] * b[12] - a[7] * b[13],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[11] + a[5] * b[10] - a[6] * b[13] + a[7] * b[12],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[12] + a[5] * b[13] + a[6] * b[10] - a[7] * b[11],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[13] - a[5] * b[12] + a[6] * b[11] + a[7] * b[10],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[3] * b[14] - a[4] * b[4] - a[5] * b[5] - a[6] * b[6] + a[7] * b[14],
a[0] * b[5] - a[1] * b[4] + a[2] * b[14] + a[3] * b[6] - a[4] * b[5] + a[5] * b[4] - a[6] * b[14] - a[7] * b[6],
a[0] * b[6] - a[1] * b[14] - a[2] * b[4] - a[3] * b[5] - a[4] * b[6] + a[5] * b[14] + a[6] * b[4] + a[7] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9] + a[4] * b[8] - a[5] * b[7] + a[7] * b[9],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8] + a[4] * b[9] - a[6] * b[7] - a[7] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] + a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[7] * b[3],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] + a[4] * b[1] + a[5] * b[0] - a[6] * b[3] + a[7] * b[2],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] + a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[7] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] + a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[7] * b[0],
a[0] * b[14] + a[1] * b[6] - a[2] * b[5] + a[3] * b[4] - a[4] * b[14] - a[5] * b[6] + a[6] * b[5] - a[7] * b[4],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[5] * b[9] - a[6] * b[8] + a[7] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Tst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Tst*)(&b));
}			
		 
inline Mtt gp (const Rtd& a, const Tvt& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[10] - a[5] * b[11] - a[6] * b[12] - a[7] * b[13],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[4] * b[11] + a[5] * b[10] - a[6] * b[13] + a[7] * b[12],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[4] * b[12] + a[5] * b[13] + a[6] * b[10] - a[7] * b[11],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[4] * b[13] - a[5] * b[12] + a[6] * b[11] + a[7] * b[10],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[4] * b[4] - a[5] * b[5] - a[6] * b[6],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6] - a[4] * b[5] + a[5] * b[4] - a[7] * b[6],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5] - a[4] * b[6] + a[6] * b[4] + a[7] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] - a[3] * b[14] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9] - a[7] * b[14],
a[0] * b[8] - a[1] * b[7] + a[2] * b[14] + a[3] * b[9] + a[4] * b[8] - a[5] * b[7] + a[6] * b[14] + a[7] * b[9],
a[0] * b[9] - a[1] * b[14] - a[2] * b[7] - a[3] * b[8] + a[4] * b[9] - a[5] * b[14] - a[6] * b[7] - a[7] * b[8],
a[0] * b[10] - a[1] * b[11] - a[2] * b[12] - a[3] * b[13] + a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[7] * b[3],
a[0] * b[11] + a[1] * b[10] - a[2] * b[13] + a[3] * b[12] + a[4] * b[1] + a[5] * b[0] - a[6] * b[3] + a[7] * b[2],
a[0] * b[12] + a[1] * b[13] + a[2] * b[10] - a[3] * b[11] + a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[7] * b[1],
a[0] * b[13] - a[1] * b[12] + a[2] * b[11] + a[3] * b[10] + a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[7] * b[0],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4] - a[5] * b[6] + a[6] * b[5] - a[7] * b[4],
a[0] * b[14] + a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[4] * b[14] + a[5] * b[9] - a[6] * b[8] + a[7] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Tvt> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Tvt*)(&b));
}			
		 
inline Mtt gp (const Rtd& a, const Bst& b) { 
	return Mtt (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[10],
a[0] * b[1] + a[1] * b[0] - a[2] * b[3] + a[3] * b[2] + a[5] * b[10],
a[0] * b[2] + a[1] * b[3] + a[2] * b[0] - a[3] * b[1] + a[6] * b[10],
a[0] * b[3] - a[1] * b[2] + a[2] * b[1] + a[3] * b[0] + a[7] * b[10],
a[0] * b[4] + a[1] * b[5] + a[2] * b[6] - a[4] * b[4] - a[5] * b[5] - a[6] * b[6],
a[0] * b[5] - a[1] * b[4] + a[3] * b[6] - a[4] * b[5] + a[5] * b[4] - a[7] * b[6],
a[0] * b[6] - a[2] * b[4] - a[3] * b[5] - a[4] * b[6] + a[6] * b[4] + a[7] * b[5],
a[0] * b[7] + a[1] * b[8] + a[2] * b[9] + a[4] * b[7] + a[5] * b[8] + a[6] * b[9],
a[0] * b[8] - a[1] * b[7] + a[3] * b[9] + a[4] * b[8] - a[5] * b[7] + a[7] * b[9],
a[0] * b[9] - a[2] * b[7] - a[3] * b[8] + a[4] * b[9] - a[6] * b[7] - a[7] * b[8],
a[0] * b[10] + a[4] * b[0] - a[5] * b[1] - a[6] * b[2] - a[7] * b[3],
a[1] * b[10] + a[4] * b[1] + a[5] * b[0] - a[6] * b[3] + a[7] * b[2],
a[2] * b[10] + a[4] * b[2] + a[5] * b[3] + a[6] * b[0] - a[7] * b[1],
a[3] * b[10] + a[4] * b[3] - a[5] * b[2] + a[6] * b[1] + a[7] * b[0],
a[1] * b[6] - a[2] * b[5] + a[3] * b[4] - a[5] * b[6] + a[6] * b[5] - a[7] * b[4],
a[1] * b[9] - a[2] * b[8] + a[3] * b[7] + a[5] * b[9] - a[6] * b[8] + a[7] * b[7]
);
}			
		 
		
template<> inline MVBase gp_gen<Rtd, Bst> (const MVBase& a, const MVBase& b) { 
	return gp(*(Rtd*)(&a),*(Bst*)(&b));
}			
		 
inline Rtd ip (const Rtd& a, const Rtd& b) { 
	return Rtd (
a[0] * b[0] - a[1] * b[1] - a[2] * b[2] - a[3] * b[3] + a[4] * b[4] - a[5] * b[5] - a[6] * b[6] - a[7] * b[7],
a[0] * b[1] + a[4] * b[5],
a[0] * b[2] + a[4] * b[6],
a[0] * b[3] + a[4] * b[7],
a[0] * b[4] - a[1] * b[5] - a[2] * b[6] - a[3] * b[7],
a[0] * b[5],
a[0] * b[6],
a[0] * b[7]
);
}			
		 
		
template<> inline MVBase ip_gen<Rtd, Rtd> (const MVBase& a, const MVBase& b) { 
	return ip(*(Rtd*)(&a),*(Rtd*)(&b));
}			
		  	
template<>
inline Rtd sp (const Rtd& rtd, const Rot& rot) {					
					
const Rot& t1 = rot;
const Rtd& t2 = rtd;
Rtd t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[0] * t2[4] - t1[1] * t2[5] - t1[2] * t2[6] - t1[3] * t2[7],
t1[0] * t2[5] + t1[1] * t2[4] - t1[2] * t2[7] + t1[3] * t2[6],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[4] - t1[3] * t2[5],
t1[0] * t2[7] - t1[1] * t2[6] + t1[2] * t2[5] + t1[3] * t2[4]
);
const Rot& t4 = rot;
Rot t5 = reverse( t4);
return Rtd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0],
t3[4] * t5[0] - t3[5] * t5[1] - t3[6] * t5[2] - t3[7] * t5[3],
t3[4] * t5[1] + t3[5] * t5[0] - t3[6] * t5[3] + t3[7] * t5[2],
t3[4] * t5[2] + t3[5] * t5[3] + t3[6] * t5[0] - t3[7] * t5[1],
t3[4] * t5[3] - t3[5] * t5[2] + t3[6] * t5[1] + t3[7] * t5[0]
);

}
		
	
	  	
template<>
inline Rtd sp (const Rtd& rtd, const Mot& mot) {					
					
const Mot& t1 = mot;
const Rtd& t2 = rtd;
Mtd t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[4] * t2[0] - t1[4] * t2[4] - t1[5] * t2[1] + t1[5] * t2[5] - t1[6] * t2[2] + t1[6] * t2[6] - t1[7] * t2[3] + t1[7] * t2[7],
t1[4] * t2[1] - t1[4] * t2[5] + t1[5] * t2[0] - t1[5] * t2[4] - t1[6] * t2[3] + t1[6] * t2[7] + t1[7] * t2[2] - t1[7] * t2[6],
t1[4] * t2[2] - t1[4] * t2[6] + t1[5] * t2[3] - t1[5] * t2[7] + t1[6] * t2[0] - t1[6] * t2[4] - t1[7] * t2[1] + t1[7] * t2[5],
t1[0] * t2[4] - t1[1] * t2[5] - t1[2] * t2[6] - t1[3] * t2[7],
t1[0] * t2[5] + t1[1] * t2[4] - t1[2] * t2[7] + t1[3] * t2[6],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[4] - t1[3] * t2[5],
t1[0] * t2[7] - t1[1] * t2[6] + t1[2] * t2[5] + t1[3] * t2[4],
t1[4] * t2[3] - t1[4] * t2[7] - t1[5] * t2[2] + t1[5] * t2[6] + t1[6] * t2[1] - t1[6] * t2[5] + t1[7] * t2[0] - t1[7] * t2[4]
);
const Mot& t4 = mot;
Mot t5 = reverse( t4);
return Rtd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3],
t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[2],
t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[1],
t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Rtd sp (const Rtd& rtd, const Dil& dil) {					
					
const Dil& t1 = dil;
const Rtd& t2 = rtd;
Rtd t3 (
t1[0] * t2[0] + t1[1] * t2[4],
t1[0] * t2[1] + t1[1] * t2[5],
t1[0] * t2[2] + t1[1] * t2[6],
t1[0] * t2[3] + t1[1] * t2[7],
t1[0] * t2[4] + t1[1] * t2[0],
t1[0] * t2[5] + t1[1] * t2[1],
t1[0] * t2[6] + t1[1] * t2[2],
t1[0] * t2[7] + t1[1] * t2[3]
);
const Dil& t4 = dil;
Dil t5 = reverse( t4);
return Rtd (
t3[0] * t5[0] + t3[4] * t5[1],
t3[1] * t5[0] + t3[5] * t5[1],
t3[2] * t5[0] + t3[6] * t5[1],
t3[3] * t5[0] + t3[7] * t5[1],
t3[0] * t5[1] + t3[4] * t5[0],
t3[1] * t5[1] + t3[5] * t5[0],
t3[2] * t5[1] + t3[6] * t5[0],
t3[3] * t5[1] + t3[7] * t5[0]
);

}
		
	
	  	
template<>
inline Rtd sp (const Rtd& rtd, const Trv& trv) {					
					
const Trv& t1 = trv;
const Rtd& t2 = rtd;
Rvd t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
t1[1] * t2[0] + t1[1] * t2[4] - t1[2] * t2[1] - t1[2] * t2[5] - t1[3] * t2[2] - t1[3] * t2[6],
t1[1] * t2[1] + t1[1] * t2[5] + t1[2] * t2[0] + t1[2] * t2[4] - t1[3] * t2[3] - t1[3] * t2[7],
t1[1] * t2[2] + t1[1] * t2[6] + t1[2] * t2[3] + t1[2] * t2[7] + t1[3] * t2[0] + t1[3] * t2[4],
t1[0] * t2[4],
t1[0] * t2[5],
t1[0] * t2[6],
t1[0] * t2[7],
t1[1] * t2[3] + t1[1] * t2[7] - t1[2] * t2[2] - t1[2] * t2[6] + t1[3] * t2[1] + t1[3] * t2[5]
);
const Trv& t4 = trv;
Trv t5 = reverse( t4);
return Rtd (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0],
t3[3] * t5[0],
t3[7] * t5[0],
t3[8] * t5[0],
t3[9] * t5[0],
t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Rtd sp (const Rtd& rtd, const Mtd& mtd) {					
					
const Mtd& t1 = mtd;
const Rtd& t2 = rtd;
Mtd t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[7] * t2[4] - t1[8] * t2[5] - t1[9] * t2[6] - t1[10] * t2[7],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[7] * t2[5] + t1[8] * t2[4] - t1[9] * t2[7] + t1[10] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[7] * t2[6] + t1[8] * t2[7] + t1[9] * t2[4] - t1[10] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[7] * t2[7] - t1[8] * t2[6] + t1[9] * t2[5] + t1[10] * t2[4],
t1[4] * t2[0] - t1[4] * t2[4] - t1[5] * t2[1] + t1[5] * t2[5] - t1[6] * t2[2] + t1[6] * t2[6] - t1[11] * t2[3] + t1[11] * t2[7],
t1[4] * t2[1] - t1[4] * t2[5] + t1[5] * t2[0] - t1[5] * t2[4] - t1[6] * t2[3] + t1[6] * t2[7] + t1[11] * t2[2] - t1[11] * t2[6],
t1[4] * t2[2] - t1[4] * t2[6] + t1[5] * t2[3] - t1[5] * t2[7] + t1[6] * t2[0] - t1[6] * t2[4] - t1[11] * t2[1] + t1[11] * t2[5],
t1[0] * t2[4] - t1[1] * t2[5] - t1[2] * t2[6] - t1[3] * t2[7] + t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[10] * t2[3],
t1[0] * t2[5] + t1[1] * t2[4] - t1[2] * t2[7] + t1[3] * t2[6] + t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[2],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[4] - t1[3] * t2[5] + t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[10] * t2[1],
t1[0] * t2[7] - t1[1] * t2[6] + t1[2] * t2[5] + t1[3] * t2[4] + t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[0],
t1[4] * t2[3] - t1[4] * t2[7] - t1[5] * t2[2] + t1[5] * t2[6] + t1[6] * t2[1] - t1[6] * t2[5] + t1[11] * t2[0] - t1[11] * t2[4]
);
const Mtd& t4 = mtd;
Mtd t5 = reverse( t4);
return Rtd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[8] + t3[8] * t5[7] - t3[9] * t5[10] + t3[10] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[9] + t3[8] * t5[10] + t3[9] * t5[7] - t3[10] * t5[8],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[10] - t3[8] * t5[9] + t3[9] * t5[8] + t3[10] * t5[7],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3],
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] + t3[3] * t5[9] + t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[2],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[1],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Rtd sp (const Rtd& rtd, const Trs& trs) {					
					
const Trs& t1 = trs;
const Rtd& t2 = rtd;
Mtd t3 (
t1[0] * t2[0],
t1[0] * t2[1],
t1[0] * t2[2],
t1[0] * t2[3],
t1[1] * t2[0] - t1[1] * t2[4] - t1[2] * t2[1] + t1[2] * t2[5] - t1[3] * t2[2] + t1[3] * t2[6],
t1[1] * t2[1] - t1[1] * t2[5] + t1[2] * t2[0] - t1[2] * t2[4] - t1[3] * t2[3] + t1[3] * t2[7],
t1[1] * t2[2] - t1[1] * t2[6] + t1[2] * t2[3] - t1[2] * t2[7] + t1[3] * t2[0] - t1[3] * t2[4],
t1[0] * t2[4],
t1[0] * t2[5],
t1[0] * t2[6],
t1[0] * t2[7],
t1[1] * t2[3] - t1[1] * t2[7] - t1[2] * t2[2] + t1[2] * t2[6] + t1[3] * t2[1] - t1[3] * t2[5]
);
const Trs& t4 = trs;
Trs t5 = reverse( t4);
return Rtd (
t3[0] * t5[0],
t3[1] * t5[0],
t3[2] * t5[0],
t3[3] * t5[0],
t3[7] * t5[0],
t3[8] * t5[0],
t3[9] * t5[0],
t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Rtd sp (const Rtd& rtd, const Rtc& rtc) {					
					
const Rtc& t1 = rtc;
const Rtd& t2 = rtd;
Rtc t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] + t1[11] * t2[4] - t1[12] * t2[5] - t1[13] * t2[6] - t1[14] * t2[3] - t1[15] * t2[7],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[11] * t2[5] + t1[12] * t2[4] - t1[13] * t2[7] + t1[14] * t2[2] + t1[15] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] + t1[11] * t2[6] + t1[12] * t2[7] + t1[13] * t2[4] - t1[14] * t2[1] - t1[15] * t2[5],
t1[3] * t2[0] + t1[3] * t2[4] - t1[5] * t2[1] - t1[5] * t2[5] - t1[6] * t2[2] - t1[6] * t2[6] - t1[7] * t2[3] - t1[7] * t2[7],
t1[4] * t2[0] - t1[4] * t2[4] - t1[8] * t2[1] + t1[8] * t2[5] - t1[9] * t2[2] + t1[9] * t2[6] - t1[10] * t2[3] + t1[10] * t2[7],
t1[3] * t2[1] + t1[3] * t2[5] + t1[5] * t2[0] + t1[5] * t2[4] - t1[6] * t2[3] - t1[6] * t2[7] + t1[7] * t2[2] + t1[7] * t2[6],
t1[3] * t2[2] + t1[3] * t2[6] + t1[5] * t2[3] + t1[5] * t2[7] + t1[6] * t2[0] + t1[6] * t2[4] - t1[7] * t2[1] - t1[7] * t2[5],
t1[3] * t2[3] + t1[3] * t2[7] - t1[5] * t2[2] - t1[5] * t2[6] + t1[6] * t2[1] + t1[6] * t2[5] + t1[7] * t2[0] + t1[7] * t2[4],
t1[4] * t2[1] - t1[4] * t2[5] + t1[8] * t2[0] - t1[8] * t2[4] - t1[9] * t2[3] + t1[9] * t2[7] + t1[10] * t2[2] - t1[10] * t2[6],
t1[4] * t2[2] - t1[4] * t2[6] + t1[8] * t2[3] - t1[8] * t2[7] + t1[9] * t2[0] - t1[9] * t2[4] - t1[10] * t2[1] + t1[10] * t2[5],
t1[4] * t2[3] - t1[4] * t2[7] - t1[8] * t2[2] + t1[8] * t2[6] + t1[9] * t2[1] - t1[9] * t2[5] + t1[10] * t2[0] - t1[10] * t2[4],
t1[0] * t2[4] - t1[1] * t2[5] - t1[2] * t2[6] + t1[11] * t2[0] - t1[12] * t2[1] - t1[13] * t2[2] - t1[14] * t2[7] - t1[15] * t2[3],
t1[0] * t2[5] + t1[1] * t2[4] - t1[2] * t2[7] + t1[11] * t2[1] + t1[12] * t2[0] - t1[13] * t2[3] + t1[14] * t2[6] + t1[15] * t2[2],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[4] + t1[11] * t2[2] + t1[12] * t2[3] + t1[13] * t2[0] - t1[14] * t2[5] - t1[15] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[11] * t2[7] - t1[12] * t2[6] + t1[13] * t2[5] + t1[14] * t2[0] + t1[15] * t2[4],
t1[0] * t2[7] - t1[1] * t2[6] + t1[2] * t2[5] + t1[11] * t2[3] - t1[12] * t2[2] + t1[13] * t2[1] + t1[14] * t2[4] + t1[15] * t2[0]
);
const Rtc& t4 = rtc;
Rtc t5 = reverse( t4);
return Rtd (
t3[0] * t5[0] + t3[1] * t5[1] + t3[2] * t5[2] - t3[3] * t5[4] - t3[4] * t5[3] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[11] + t3[12] * t5[12] + t3[13] * t5[13] - t3[14] * t5[14] - t3[15] * t5[15],
t3[0] * t5[1] - t3[1] * t5[0] + t3[2] * t5[14] - t3[3] * t5[8] - t3[4] * t5[5] - t3[5] * t5[4] + t3[6] * t5[10] - t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[12] - t3[12] * t5[11] + t3[13] * t5[15] + t3[14] * t5[2] + t3[15] * t5[13],
t3[0] * t5[2] - t3[1] * t5[14] - t3[2] * t5[0] - t3[3] * t5[9] - t3[4] * t5[6] - t3[5] * t5[10] - t3[6] * t5[4] + t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[13] - t3[12] * t5[15] - t3[13] * t5[11] - t3[14] * t5[1] - t3[15] * t5[12],
t3[0] * t5[14] + t3[1] * t5[2] - t3[2] * t5[1] - t3[3] * t5[10] - t3[4] * t5[7] + t3[5] * t5[9] - t3[6] * t5[8] - t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[15] + t3[12] * t5[13] - t3[13] * t5[12] + t3[14] * t5[0] + t3[15] * t5[11],
t3[0] * t5[11] + t3[1] * t5[12] + t3[2] * t5[13] + t3[3] * t5[4] - t3[4] * t5[3] - t3[5] * t5[8] - t3[6] * t5[9] - t3[7] * t5[10] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[7] + t3[11] * t5[0] + t3[12] * t5[1] + t3[13] * t5[2] - t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[12] - t3[1] * t5[11] + t3[2] * t5[15] + t3[3] * t5[8] - t3[4] * t5[5] + t3[5] * t5[4] - t3[6] * t5[10] + t3[7] * t5[9] - t3[8] * t5[3] + t3[9] * t5[7] - t3[10] * t5[6] + t3[11] * t5[1] - t3[12] * t5[0] + t3[13] * t5[14] + t3[14] * t5[13] + t3[15] * t5[2],
t3[0] * t5[13] - t3[1] * t5[15] - t3[2] * t5[11] + t3[3] * t5[9] - t3[4] * t5[6] + t3[5] * t5[10] + t3[6] * t5[4] - t3[7] * t5[8] - t3[8] * t5[7] - t3[9] * t5[3] + t3[10] * t5[5] + t3[11] * t5[2] - t3[12] * t5[14] - t3[13] * t5[0] - t3[14] * t5[12] - t3[15] * t5[1],
t3[0] * t5[15] + t3[1] * t5[13] - t3[2] * t5[12] + t3[3] * t5[10] - t3[4] * t5[7] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[4] + t3[8] * t5[6] - t3[9] * t5[5] - t3[10] * t5[3] + t3[11] * t5[14] + t3[12] * t5[2] - t3[13] * t5[1] + t3[14] * t5[11] + t3[15] * t5[0]
);

}
		
	
	  	
template<>
inline Rtd sp (const Rtd& rtd, const Mtt& mtt) {					
					
const Mtt& t1 = mtt;
const Rtd& t2 = rtd;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[10] * t2[4] - t1[11] * t2[5] - t1[12] * t2[6] - t1[13] * t2[7],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[10] * t2[5] + t1[11] * t2[4] - t1[12] * t2[7] + t1[13] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[10] * t2[6] + t1[11] * t2[7] + t1[12] * t2[4] - t1[13] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[10] * t2[7] - t1[11] * t2[6] + t1[12] * t2[5] + t1[13] * t2[4],
t1[4] * t2[0] + t1[4] * t2[4] - t1[5] * t2[1] - t1[5] * t2[5] - t1[6] * t2[2] - t1[6] * t2[6] - t1[14] * t2[3] - t1[14] * t2[7],
t1[4] * t2[1] + t1[4] * t2[5] + t1[5] * t2[0] + t1[5] * t2[4] - t1[6] * t2[3] - t1[6] * t2[7] + t1[14] * t2[2] + t1[14] * t2[6],
t1[4] * t2[2] + t1[4] * t2[6] + t1[5] * t2[3] + t1[5] * t2[7] + t1[6] * t2[0] + t1[6] * t2[4] - t1[14] * t2[1] - t1[14] * t2[5],
t1[7] * t2[0] - t1[7] * t2[4] - t1[8] * t2[1] + t1[8] * t2[5] - t1[9] * t2[2] + t1[9] * t2[6] - t1[15] * t2[3] + t1[15] * t2[7],
t1[7] * t2[1] - t1[7] * t2[5] + t1[8] * t2[0] - t1[8] * t2[4] - t1[9] * t2[3] + t1[9] * t2[7] + t1[15] * t2[2] - t1[15] * t2[6],
t1[7] * t2[2] - t1[7] * t2[6] + t1[8] * t2[3] - t1[8] * t2[7] + t1[9] * t2[0] - t1[9] * t2[4] - t1[15] * t2[1] + t1[15] * t2[5],
t1[0] * t2[4] - t1[1] * t2[5] - t1[2] * t2[6] - t1[3] * t2[7] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[0] * t2[5] + t1[1] * t2[4] - t1[2] * t2[7] + t1[3] * t2[6] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[4] - t1[3] * t2[5] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1],
t1[0] * t2[7] - t1[1] * t2[6] + t1[2] * t2[5] + t1[3] * t2[4] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0],
t1[4] * t2[3] + t1[4] * t2[7] - t1[5] * t2[2] - t1[5] * t2[6] + t1[6] * t2[1] + t1[6] * t2[5] + t1[14] * t2[0] + t1[14] * t2[4],
t1[7] * t2[3] - t1[7] * t2[7] - t1[8] * t2[2] + t1[8] * t2[6] + t1[9] * t2[1] - t1[9] * t2[5] + t1[15] * t2[0] - t1[15] * t2[4]
);
const Mtt& t4 = mtt;
Mtt t5 = reverse( t4);
return Rtd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[15] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[15] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[15] - t3[15] * t5[14],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] - t3[6] * t5[15] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[5] * t5[15] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[4] * t5[15] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Rtd sp (const Rtd& rtd, const Rtt& rtt) {					
					
const Rtt& t1 = rtt;
const Rtd& t2 = rtd;
Rvd t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0],
t1[4] * t2[0] + t1[4] * t2[4] - t1[5] * t2[1] - t1[5] * t2[5] - t1[6] * t2[2] - t1[6] * t2[6] - t1[7] * t2[3] - t1[7] * t2[7],
t1[4] * t2[1] + t1[4] * t2[5] + t1[5] * t2[0] + t1[5] * t2[4] - t1[6] * t2[3] - t1[6] * t2[7] + t1[7] * t2[2] + t1[7] * t2[6],
t1[4] * t2[2] + t1[4] * t2[6] + t1[5] * t2[3] + t1[5] * t2[7] + t1[6] * t2[0] + t1[6] * t2[4] - t1[7] * t2[1] - t1[7] * t2[5],
t1[0] * t2[4] - t1[1] * t2[5] - t1[2] * t2[6] - t1[3] * t2[7],
t1[0] * t2[5] + t1[1] * t2[4] - t1[2] * t2[7] + t1[3] * t2[6],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[4] - t1[3] * t2[5],
t1[0] * t2[7] - t1[1] * t2[6] + t1[2] * t2[5] + t1[3] * t2[4],
t1[4] * t2[3] + t1[4] * t2[7] - t1[5] * t2[2] - t1[5] * t2[6] + t1[6] * t2[1] + t1[6] * t2[5] + t1[7] * t2[0] + t1[7] * t2[4]
);
const Rtt& t4 = rtt;
Rtt t5 = reverse( t4);
return Rtd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0],
t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3],
t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[2],
t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[1],
t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Rtd sp (const Rtd& rtd, const Tvd& tvd) {					
					
const Tvd& t1 = tvd;
const Rtd& t2 = rtd;
Rvd t3 (
t1[0] * t2[0] + t1[4] * t2[4],
t1[0] * t2[1] + t1[4] * t2[5],
t1[0] * t2[2] + t1[4] * t2[6],
t1[0] * t2[3] + t1[4] * t2[7],
t1[1] * t2[0] + t1[1] * t2[4] - t1[2] * t2[1] - t1[2] * t2[5] - t1[3] * t2[2] - t1[3] * t2[6],
t1[1] * t2[1] + t1[1] * t2[5] + t1[2] * t2[0] + t1[2] * t2[4] - t1[3] * t2[3] - t1[3] * t2[7],
t1[1] * t2[2] + t1[1] * t2[6] + t1[2] * t2[3] + t1[2] * t2[7] + t1[3] * t2[0] + t1[3] * t2[4],
t1[0] * t2[4] + t1[4] * t2[0],
t1[0] * t2[5] + t1[4] * t2[1],
t1[0] * t2[6] + t1[4] * t2[2],
t1[0] * t2[7] + t1[4] * t2[3],
t1[1] * t2[3] + t1[1] * t2[7] - t1[2] * t2[2] - t1[2] * t2[6] + t1[3] * t2[1] + t1[3] * t2[5]
);
const Tvd& t4 = tvd;
Tvd t5 = reverse( t4);
return Rtd (
t3[0] * t5[0] + t3[7] * t5[4],
t3[1] * t5[0] + t3[8] * t5[4],
t3[2] * t5[0] + t3[9] * t5[4],
t3[3] * t5[0] + t3[10] * t5[4],
t3[0] * t5[4] + t3[7] * t5[0],
t3[1] * t5[4] + t3[8] * t5[0],
t3[2] * t5[4] + t3[9] * t5[0],
t3[3] * t5[4] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Rtd sp (const Rtd& rtd, const Tsd& tsd) {					
					
const Tsd& t1 = tsd;
const Rtd& t2 = rtd;
Mtd t3 (
t1[0] * t2[0] + t1[4] * t2[4],
t1[0] * t2[1] + t1[4] * t2[5],
t1[0] * t2[2] + t1[4] * t2[6],
t1[0] * t2[3] + t1[4] * t2[7],
t1[1] * t2[0] - t1[1] * t2[4] - t1[2] * t2[1] + t1[2] * t2[5] - t1[3] * t2[2] + t1[3] * t2[6],
t1[1] * t2[1] - t1[1] * t2[5] + t1[2] * t2[0] - t1[2] * t2[4] - t1[3] * t2[3] + t1[3] * t2[7],
t1[1] * t2[2] - t1[1] * t2[6] + t1[2] * t2[3] - t1[2] * t2[7] + t1[3] * t2[0] - t1[3] * t2[4],
t1[0] * t2[4] + t1[4] * t2[0],
t1[0] * t2[5] + t1[4] * t2[1],
t1[0] * t2[6] + t1[4] * t2[2],
t1[0] * t2[7] + t1[4] * t2[3],
t1[1] * t2[3] - t1[1] * t2[7] - t1[2] * t2[2] + t1[2] * t2[6] + t1[3] * t2[1] - t1[3] * t2[5]
);
const Tsd& t4 = tsd;
Tsd t5 = reverse( t4);
return Rtd (
t3[0] * t5[0] + t3[7] * t5[4],
t3[1] * t5[0] + t3[8] * t5[4],
t3[2] * t5[0] + t3[9] * t5[4],
t3[3] * t5[0] + t3[10] * t5[4],
t3[0] * t5[4] + t3[7] * t5[0],
t3[1] * t5[4] + t3[8] * t5[0],
t3[2] * t5[4] + t3[9] * t5[0],
t3[3] * t5[4] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Rtd sp (const Rtd& rtd, const Trt& trt) {					
					
const Trt& t1 = trt;
const Rtd& t2 = rtd;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[10] * t2[4] - t1[11] * t2[5] - t1[12] * t2[6] - t1[13] * t2[7],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[10] * t2[5] + t1[11] * t2[4] - t1[12] * t2[7] + t1[13] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[10] * t2[6] + t1[11] * t2[7] + t1[12] * t2[4] - t1[13] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[10] * t2[7] - t1[11] * t2[6] + t1[12] * t2[5] + t1[13] * t2[4],
t1[4] * t2[0] + t1[4] * t2[4] - t1[5] * t2[1] - t1[5] * t2[5] - t1[6] * t2[2] - t1[6] * t2[6],
t1[4] * t2[1] + t1[4] * t2[5] + t1[5] * t2[0] + t1[5] * t2[4] - t1[6] * t2[3] - t1[6] * t2[7],
t1[4] * t2[2] + t1[4] * t2[6] + t1[5] * t2[3] + t1[5] * t2[7] + t1[6] * t2[0] + t1[6] * t2[4],
t1[7] * t2[0] - t1[7] * t2[4] - t1[8] * t2[1] + t1[8] * t2[5] - t1[9] * t2[2] + t1[9] * t2[6],
t1[7] * t2[1] - t1[7] * t2[5] + t1[8] * t2[0] - t1[8] * t2[4] - t1[9] * t2[3] + t1[9] * t2[7],
t1[7] * t2[2] - t1[7] * t2[6] + t1[8] * t2[3] - t1[8] * t2[7] + t1[9] * t2[0] - t1[9] * t2[4],
t1[0] * t2[4] - t1[1] * t2[5] - t1[2] * t2[6] - t1[3] * t2[7] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[0] * t2[5] + t1[1] * t2[4] - t1[2] * t2[7] + t1[3] * t2[6] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[4] - t1[3] * t2[5] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1],
t1[0] * t2[7] - t1[1] * t2[6] + t1[2] * t2[5] + t1[3] * t2[4] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0],
t1[4] * t2[3] + t1[4] * t2[7] - t1[5] * t2[2] - t1[5] * t2[6] + t1[6] * t2[1] + t1[6] * t2[5],
t1[7] * t2[3] - t1[7] * t2[7] - t1[8] * t2[2] + t1[8] * t2[6] + t1[9] * t2[1] - t1[9] * t2[5]
);
const Trt& t4 = trt;
Trt t5 = reverse( t4);
return Rtd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[5] * t5[9] + t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Rtd sp (const Rtd& rtd, const Rvd& rvd) {					
					
const Rvd& t1 = rvd;
const Rtd& t2 = rtd;
Rvd t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[7] * t2[4] - t1[8] * t2[5] - t1[9] * t2[6] - t1[10] * t2[7],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[7] * t2[5] + t1[8] * t2[4] - t1[9] * t2[7] + t1[10] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[7] * t2[6] + t1[8] * t2[7] + t1[9] * t2[4] - t1[10] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[7] * t2[7] - t1[8] * t2[6] + t1[9] * t2[5] + t1[10] * t2[4],
t1[4] * t2[0] + t1[4] * t2[4] - t1[5] * t2[1] - t1[5] * t2[5] - t1[6] * t2[2] - t1[6] * t2[6] - t1[11] * t2[3] - t1[11] * t2[7],
t1[4] * t2[1] + t1[4] * t2[5] + t1[5] * t2[0] + t1[5] * t2[4] - t1[6] * t2[3] - t1[6] * t2[7] + t1[11] * t2[2] + t1[11] * t2[6],
t1[4] * t2[2] + t1[4] * t2[6] + t1[5] * t2[3] + t1[5] * t2[7] + t1[6] * t2[0] + t1[6] * t2[4] - t1[11] * t2[1] - t1[11] * t2[5],
t1[0] * t2[4] - t1[1] * t2[5] - t1[2] * t2[6] - t1[3] * t2[7] + t1[7] * t2[0] - t1[8] * t2[1] - t1[9] * t2[2] - t1[10] * t2[3],
t1[0] * t2[5] + t1[1] * t2[4] - t1[2] * t2[7] + t1[3] * t2[6] + t1[7] * t2[1] + t1[8] * t2[0] - t1[9] * t2[3] + t1[10] * t2[2],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[4] - t1[3] * t2[5] + t1[7] * t2[2] + t1[8] * t2[3] + t1[9] * t2[0] - t1[10] * t2[1],
t1[0] * t2[7] - t1[1] * t2[6] + t1[2] * t2[5] + t1[3] * t2[4] + t1[7] * t2[3] - t1[8] * t2[2] + t1[9] * t2[1] + t1[10] * t2[0],
t1[4] * t2[3] + t1[4] * t2[7] - t1[5] * t2[2] - t1[5] * t2[6] + t1[6] * t2[1] + t1[6] * t2[5] + t1[11] * t2[0] + t1[11] * t2[4]
);
const Rvd& t4 = rvd;
Rvd t5 = reverse( t4);
return Rtd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[7] * t5[7] - t3[8] * t5[8] - t3[9] * t5[9] - t3[10] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[7] * t5[8] + t3[8] * t5[7] - t3[9] * t5[10] + t3[10] * t5[9],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[7] * t5[9] + t3[8] * t5[10] + t3[9] * t5[7] - t3[10] * t5[8],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[7] * t5[10] - t3[8] * t5[9] + t3[9] * t5[8] + t3[10] * t5[7],
t3[0] * t5[7] - t3[1] * t5[8] - t3[2] * t5[9] - t3[3] * t5[10] + t3[7] * t5[0] - t3[8] * t5[1] - t3[9] * t5[2] - t3[10] * t5[3],
t3[0] * t5[8] + t3[1] * t5[7] - t3[2] * t5[10] + t3[3] * t5[9] + t3[7] * t5[1] + t3[8] * t5[0] - t3[9] * t5[3] + t3[10] * t5[2],
t3[0] * t5[9] + t3[1] * t5[10] + t3[2] * t5[7] - t3[3] * t5[8] + t3[7] * t5[2] + t3[8] * t5[3] + t3[9] * t5[0] - t3[10] * t5[1],
t3[0] * t5[10] - t3[1] * t5[9] + t3[2] * t5[8] + t3[3] * t5[7] + t3[7] * t5[3] - t3[8] * t5[2] + t3[9] * t5[1] + t3[10] * t5[0]
);

}
		
	
	  	
template<>
inline Rtd sp (const Rtd& rtd, const Tst& tst) {					
					
const Tst& t1 = tst;
const Rtd& t2 = rtd;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[10] * t2[4] - t1[11] * t2[5] - t1[12] * t2[6] - t1[13] * t2[7],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[10] * t2[5] + t1[11] * t2[4] - t1[12] * t2[7] + t1[13] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[10] * t2[6] + t1[11] * t2[7] + t1[12] * t2[4] - t1[13] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[10] * t2[7] - t1[11] * t2[6] + t1[12] * t2[5] + t1[13] * t2[4],
t1[4] * t2[0] + t1[4] * t2[4] - t1[5] * t2[1] - t1[5] * t2[5] - t1[6] * t2[2] - t1[6] * t2[6] - t1[14] * t2[3] - t1[14] * t2[7],
t1[4] * t2[1] + t1[4] * t2[5] + t1[5] * t2[0] + t1[5] * t2[4] - t1[6] * t2[3] - t1[6] * t2[7] + t1[14] * t2[2] + t1[14] * t2[6],
t1[4] * t2[2] + t1[4] * t2[6] + t1[5] * t2[3] + t1[5] * t2[7] + t1[6] * t2[0] + t1[6] * t2[4] - t1[14] * t2[1] - t1[14] * t2[5],
t1[7] * t2[0] - t1[7] * t2[4] - t1[8] * t2[1] + t1[8] * t2[5] - t1[9] * t2[2] + t1[9] * t2[6],
t1[7] * t2[1] - t1[7] * t2[5] + t1[8] * t2[0] - t1[8] * t2[4] - t1[9] * t2[3] + t1[9] * t2[7],
t1[7] * t2[2] - t1[7] * t2[6] + t1[8] * t2[3] - t1[8] * t2[7] + t1[9] * t2[0] - t1[9] * t2[4],
t1[0] * t2[4] - t1[1] * t2[5] - t1[2] * t2[6] - t1[3] * t2[7] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[0] * t2[5] + t1[1] * t2[4] - t1[2] * t2[7] + t1[3] * t2[6] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[4] - t1[3] * t2[5] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1],
t1[0] * t2[7] - t1[1] * t2[6] + t1[2] * t2[5] + t1[3] * t2[4] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0],
t1[4] * t2[3] + t1[4] * t2[7] - t1[5] * t2[2] - t1[5] * t2[6] + t1[6] * t2[1] + t1[6] * t2[5] + t1[14] * t2[0] + t1[14] * t2[4],
t1[7] * t2[3] - t1[7] * t2[7] - t1[8] * t2[2] + t1[8] * t2[6] + t1[9] * t2[1] - t1[9] * t2[5]
);
const Tst& t4 = tst;
Tst t5 = reverse( t4);
return Rtd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[15] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] - t3[15] * t5[14],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[9] * t5[14] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[6] * t5[7] + t3[7] * t5[6] - t3[8] * t5[14] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[5] * t5[9] + t3[6] * t5[8] + t3[7] * t5[14] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Rtd sp (const Rtd& rtd, const Tvt& tvt) {					
					
const Tvt& t1 = tvt;
const Rtd& t2 = rtd;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[10] * t2[4] - t1[11] * t2[5] - t1[12] * t2[6] - t1[13] * t2[7],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[10] * t2[5] + t1[11] * t2[4] - t1[12] * t2[7] + t1[13] * t2[6],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[10] * t2[6] + t1[11] * t2[7] + t1[12] * t2[4] - t1[13] * t2[5],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[10] * t2[7] - t1[11] * t2[6] + t1[12] * t2[5] + t1[13] * t2[4],
t1[4] * t2[0] + t1[4] * t2[4] - t1[5] * t2[1] - t1[5] * t2[5] - t1[6] * t2[2] - t1[6] * t2[6],
t1[4] * t2[1] + t1[4] * t2[5] + t1[5] * t2[0] + t1[5] * t2[4] - t1[6] * t2[3] - t1[6] * t2[7],
t1[4] * t2[2] + t1[4] * t2[6] + t1[5] * t2[3] + t1[5] * t2[7] + t1[6] * t2[0] + t1[6] * t2[4],
t1[7] * t2[0] - t1[7] * t2[4] - t1[8] * t2[1] + t1[8] * t2[5] - t1[9] * t2[2] + t1[9] * t2[6] - t1[14] * t2[3] + t1[14] * t2[7],
t1[7] * t2[1] - t1[7] * t2[5] + t1[8] * t2[0] - t1[8] * t2[4] - t1[9] * t2[3] + t1[9] * t2[7] + t1[14] * t2[2] - t1[14] * t2[6],
t1[7] * t2[2] - t1[7] * t2[6] + t1[8] * t2[3] - t1[8] * t2[7] + t1[9] * t2[0] - t1[9] * t2[4] - t1[14] * t2[1] + t1[14] * t2[5],
t1[0] * t2[4] - t1[1] * t2[5] - t1[2] * t2[6] - t1[3] * t2[7] + t1[10] * t2[0] - t1[11] * t2[1] - t1[12] * t2[2] - t1[13] * t2[3],
t1[0] * t2[5] + t1[1] * t2[4] - t1[2] * t2[7] + t1[3] * t2[6] + t1[10] * t2[1] + t1[11] * t2[0] - t1[12] * t2[3] + t1[13] * t2[2],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[4] - t1[3] * t2[5] + t1[10] * t2[2] + t1[11] * t2[3] + t1[12] * t2[0] - t1[13] * t2[1],
t1[0] * t2[7] - t1[1] * t2[6] + t1[2] * t2[5] + t1[3] * t2[4] + t1[10] * t2[3] - t1[11] * t2[2] + t1[12] * t2[1] + t1[13] * t2[0],
t1[4] * t2[3] + t1[4] * t2[7] - t1[5] * t2[2] - t1[5] * t2[6] + t1[6] * t2[1] + t1[6] * t2[5],
t1[7] * t2[3] - t1[7] * t2[7] - t1[8] * t2[2] + t1[8] * t2[6] + t1[9] * t2[1] - t1[9] * t2[5] + t1[14] * t2[0] - t1[14] * t2[4]
);
const Tvt& t4 = tvt;
Tvt t5 = reverse( t4);
return Rtd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10] - t3[11] * t5[11] - t3[12] * t5[12] - t3[13] * t5[13] - t3[14] * t5[14],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[11] + t3[11] * t5[10] - t3[12] * t5[13] + t3[13] * t5[12] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[5] * t5[14] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[12] + t3[11] * t5[13] + t3[12] * t5[10] - t3[13] * t5[11] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[4] * t5[14] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[13] - t3[11] * t5[12] + t3[12] * t5[11] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[10] - t3[1] * t5[11] - t3[2] * t5[12] - t3[3] * t5[13] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3] + t3[14] * t5[14],
t3[0] * t5[11] + t3[1] * t5[10] - t3[2] * t5[13] + t3[3] * t5[12] - t3[4] * t5[8] + t3[5] * t5[7] - t3[6] * t5[14] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[12] + t3[1] * t5[13] + t3[2] * t5[10] - t3[3] * t5[11] - t3[4] * t5[9] + t3[5] * t5[14] + t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[13] - t3[1] * t5[12] + t3[2] * t5[11] + t3[3] * t5[10] - t3[4] * t5[14] - t3[5] * t5[9] + t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Rtd sp (const Rtd& rtd, const Bst& bst) {					
					
const Bst& t1 = bst;
const Rtd& t2 = rtd;
Mtt t3 (
t1[0] * t2[0] - t1[1] * t2[1] - t1[2] * t2[2] - t1[3] * t2[3] + t1[10] * t2[4],
t1[0] * t2[1] + t1[1] * t2[0] - t1[2] * t2[3] + t1[3] * t2[2] + t1[10] * t2[5],
t1[0] * t2[2] + t1[1] * t2[3] + t1[2] * t2[0] - t1[3] * t2[1] + t1[10] * t2[6],
t1[0] * t2[3] - t1[1] * t2[2] + t1[2] * t2[1] + t1[3] * t2[0] + t1[10] * t2[7],
t1[4] * t2[0] + t1[4] * t2[4] - t1[5] * t2[1] - t1[5] * t2[5] - t1[6] * t2[2] - t1[6] * t2[6],
t1[4] * t2[1] + t1[4] * t2[5] + t1[5] * t2[0] + t1[5] * t2[4] - t1[6] * t2[3] - t1[6] * t2[7],
t1[4] * t2[2] + t1[4] * t2[6] + t1[5] * t2[3] + t1[5] * t2[7] + t1[6] * t2[0] + t1[6] * t2[4],
t1[7] * t2[0] - t1[7] * t2[4] - t1[8] * t2[1] + t1[8] * t2[5] - t1[9] * t2[2] + t1[9] * t2[6],
t1[7] * t2[1] - t1[7] * t2[5] + t1[8] * t2[0] - t1[8] * t2[4] - t1[9] * t2[3] + t1[9] * t2[7],
t1[7] * t2[2] - t1[7] * t2[6] + t1[8] * t2[3] - t1[8] * t2[7] + t1[9] * t2[0] - t1[9] * t2[4],
t1[0] * t2[4] - t1[1] * t2[5] - t1[2] * t2[6] - t1[3] * t2[7] + t1[10] * t2[0],
t1[0] * t2[5] + t1[1] * t2[4] - t1[2] * t2[7] + t1[3] * t2[6] + t1[10] * t2[1],
t1[0] * t2[6] + t1[1] * t2[7] + t1[2] * t2[4] - t1[3] * t2[5] + t1[10] * t2[2],
t1[0] * t2[7] - t1[1] * t2[6] + t1[2] * t2[5] + t1[3] * t2[4] + t1[10] * t2[3],
t1[4] * t2[3] + t1[4] * t2[7] - t1[5] * t2[2] - t1[5] * t2[6] + t1[6] * t2[1] + t1[6] * t2[5],
t1[7] * t2[3] - t1[7] * t2[7] - t1[8] * t2[2] + t1[8] * t2[6] + t1[9] * t2[1] - t1[9] * t2[5]
);
const Bst& t4 = bst;
Bst t5 = reverse( t4);
return Rtd (
t3[0] * t5[0] - t3[1] * t5[1] - t3[2] * t5[2] - t3[3] * t5[3] + t3[4] * t5[7] + t3[5] * t5[8] + t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[10],
t3[0] * t5[1] + t3[1] * t5[0] - t3[2] * t5[3] + t3[3] * t5[2] + t3[4] * t5[8] - t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[11] * t5[10] + t3[14] * t5[9] + t3[15] * t5[6],
t3[0] * t5[2] + t3[1] * t5[3] + t3[2] * t5[0] - t3[3] * t5[1] + t3[4] * t5[9] - t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[12] * t5[10] - t3[14] * t5[8] - t3[15] * t5[5],
t3[0] * t5[3] - t3[1] * t5[2] + t3[2] * t5[1] + t3[3] * t5[0] + t3[5] * t5[9] - t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[13] * t5[10] + t3[14] * t5[7] + t3[15] * t5[4],
t3[0] * t5[10] - t3[4] * t5[7] - t3[5] * t5[8] - t3[6] * t5[9] + t3[7] * t5[4] + t3[8] * t5[5] + t3[9] * t5[6] + t3[10] * t5[0] - t3[11] * t5[1] - t3[12] * t5[2] - t3[13] * t5[3],
t3[1] * t5[10] - t3[4] * t5[8] + t3[5] * t5[7] + t3[7] * t5[5] - t3[8] * t5[4] + t3[10] * t5[1] + t3[11] * t5[0] - t3[12] * t5[3] + t3[13] * t5[2] - t3[14] * t5[9] + t3[15] * t5[6],
t3[2] * t5[10] - t3[4] * t5[9] + t3[6] * t5[7] + t3[7] * t5[6] - t3[9] * t5[4] + t3[10] * t5[2] + t3[11] * t5[3] + t3[12] * t5[0] - t3[13] * t5[1] + t3[14] * t5[8] - t3[15] * t5[5],
t3[3] * t5[10] - t3[5] * t5[9] + t3[6] * t5[8] + t3[8] * t5[6] - t3[9] * t5[5] + t3[10] * t5[3] - t3[11] * t5[2] + t3[12] * t5[1] + t3[13] * t5[0] - t3[14] * t5[7] + t3[15] * t5[4]
);

}
		
	
	  	
template<>
inline Rtd re (const Rtd& rtd, const Vec& vec) {					
					
const Vec& t1 = vec;
const Rtd& t2 = rtd;
Rtd t3 = involute( t2);
Drv_Tnb t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0],
t1[0] * t3[4] - t1[1] * t3[5] - t1[2] * t3[6],
t1[0] * t3[5] + t1[1] * t3[4] - t1[2] * t3[7],
t1[0] * t3[6] + t1[1] * t3[7] + t1[2] * t3[4],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[7] - t1[1] * t3[6] + t1[2] * t3[5]
);
const Vec& t5 = vec;
Vec t6 = reverse( t5);
return Rtd (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
t4[0] * t6[1] - t4[1] * t6[0] + t4[6] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[6] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] + t4[6] * t6[0],
t4[3] * t6[0] + t4[4] * t6[1] + t4[5] * t6[2],
t4[3] * t6[1] - t4[4] * t6[0] + t4[7] * t6[2],
t4[3] * t6[2] - t4[5] * t6[0] - t4[7] * t6[1],
t4[4] * t6[2] - t4[5] * t6[1] + t4[7] * t6[0]
);

}
		
	
	  	
template<>
inline Rtd re (const Rtd& rtd, const Dlp& dlp) {					
					
const Dlp& t1 = dlp;
const Rtd& t2 = rtd;
Rtd t3 = involute( t2);
Par_Drb t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0],
t1[3] * t3[0] - t1[3] * t3[4],
t1[3] * t3[1] - t1[3] * t3[5],
t1[3] * t3[2] - t1[3] * t3[6],
t1[3] * t3[3] - t1[3] * t3[7],
t1[0] * t3[4] - t1[1] * t3[5] - t1[2] * t3[6],
t1[0] * t3[5] + t1[1] * t3[4] - t1[2] * t3[7],
t1[0] * t3[6] + t1[1] * t3[7] + t1[2] * t3[4],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[7] - t1[1] * t3[6] + t1[2] * t3[5]
);
const Dlp& t5 = dlp;
Dlp t6 = reverse( t5);
return Rtd (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2],
t4[0] * t6[1] - t4[1] * t6[0] + t4[10] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[10] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] + t4[10] * t6[0],
t4[7] * t6[0] + t4[8] * t6[1] + t4[9] * t6[2],
t4[7] * t6[1] - t4[8] * t6[0] + t4[11] * t6[2],
t4[7] * t6[2] - t4[9] * t6[0] - t4[11] * t6[1],
t4[8] * t6[2] - t4[9] * t6[1] + t4[11] * t6[0]
);

}
		
	
	  	
template<>
inline Rtd re (const Rtd& rtd, const Pln& pln) {					
					
const Pln& t1 = pln;
const Rtd& t2 = rtd;
Rtd t3 = involute( t2);
Mtd t4 (
 - t1[0] * t3[5] - t1[1] * t3[6] - t1[2] * t3[7],
t1[0] * t3[4] - t1[1] * t3[7] + t1[2] * t3[6],
t1[0] * t3[7] + t1[1] * t3[4] - t1[2] * t3[5],
 - t1[0] * t3[6] + t1[1] * t3[5] + t1[2] * t3[4],
 - t1[3] * t3[3] + t1[3] * t3[7],
t1[3] * t3[2] - t1[3] * t3[6],
 - t1[3] * t3[1] + t1[3] * t3[5],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0],
t1[3] * t3[0] - t1[3] * t3[4]
);
const Pln& t5 = pln;
Pln t6 = reverse( t5);
return Rtd (
 - t4[8] * t6[0] - t4[9] * t6[1] - t4[10] * t6[2],
t4[7] * t6[0] - t4[9] * t6[2] + t4[10] * t6[1],
t4[7] * t6[1] + t4[8] * t6[2] - t4[10] * t6[0],
t4[7] * t6[2] - t4[8] * t6[1] + t4[9] * t6[0],
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0]
);

}
		
	
	  	
template<>
inline Rtd re (const Rtd& rtd, const Dll& dll) {					
					
const Dll& t1 = dll;
const Rtd& t2 = rtd;
Rtd t3 = involute( t2);
Mtd t4 (
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0],
t1[3] * t3[0] - t1[3] * t3[4] - t1[4] * t3[1] + t1[4] * t3[5] - t1[5] * t3[2] + t1[5] * t3[6],
t1[3] * t3[1] - t1[3] * t3[5] + t1[4] * t3[0] - t1[4] * t3[4] - t1[5] * t3[3] + t1[5] * t3[7],
t1[3] * t3[2] - t1[3] * t3[6] + t1[4] * t3[3] - t1[4] * t3[7] + t1[5] * t3[0] - t1[5] * t3[4],
 - t1[0] * t3[5] - t1[1] * t3[6] - t1[2] * t3[7],
t1[0] * t3[4] - t1[1] * t3[7] + t1[2] * t3[6],
t1[0] * t3[7] + t1[1] * t3[4] - t1[2] * t3[5],
 - t1[0] * t3[6] + t1[1] * t3[5] + t1[2] * t3[4],
t1[3] * t3[3] - t1[3] * t3[7] - t1[4] * t3[2] + t1[4] * t3[6] + t1[5] * t3[1] - t1[5] * t3[5]
);
const Dll& t5 = dll;
Dll t6 = reverse( t5);
return Rtd (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0],
 - t4[8] * t6[0] - t4[9] * t6[1] - t4[10] * t6[2],
t4[7] * t6[0] - t4[9] * t6[2] + t4[10] * t6[1],
t4[7] * t6[1] + t4[8] * t6[2] - t4[10] * t6[0],
t4[7] * t6[2] - t4[8] * t6[1] + t4[9] * t6[0]
);

}
		
	
	  	
template<>
inline Rtd re (const Rtd& rtd, const Lin& lin) {					
					
const Lin& t1 = lin;
const Rtd& t2 = rtd;
Rtd t3 = involute( t2);
Par_Drb t4 (
t1[3] * t3[4] - t1[4] * t3[5] - t1[5] * t3[6],
t1[3] * t3[5] + t1[4] * t3[4] - t1[5] * t3[7],
t1[3] * t3[6] + t1[4] * t3[7] + t1[5] * t3[4],
 - t1[0] * t3[1] + t1[0] * t3[5] - t1[1] * t3[2] + t1[1] * t3[6] - t1[2] * t3[3] + t1[2] * t3[7],
t1[0] * t3[0] - t1[0] * t3[4] - t1[1] * t3[3] + t1[1] * t3[7] + t1[2] * t3[2] - t1[2] * t3[6],
t1[0] * t3[3] - t1[0] * t3[7] + t1[1] * t3[0] - t1[1] * t3[4] - t1[2] * t3[1] + t1[2] * t3[5],
 - t1[0] * t3[2] + t1[0] * t3[6] + t1[1] * t3[1] - t1[1] * t3[5] + t1[2] * t3[0] - t1[2] * t3[4],
t1[3] * t3[0] - t1[4] * t3[1] - t1[5] * t3[2],
t1[3] * t3[1] + t1[4] * t3[0] - t1[5] * t3[3],
t1[3] * t3[2] + t1[4] * t3[3] + t1[5] * t3[0],
t1[3] * t3[7] - t1[4] * t3[6] + t1[5] * t3[5],
t1[3] * t3[3] - t1[4] * t3[2] + t1[5] * t3[1]
);
const Lin& t5 = lin;
Lin t6 = reverse( t5);
return Rtd (
t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5],
t4[7] * t6[4] - t4[8] * t6[3] + t4[11] * t6[5],
t4[7] * t6[5] - t4[9] * t6[3] - t4[11] * t6[4],
t4[8] * t6[5] - t4[9] * t6[4] + t4[11] * t6[3],
t4[0] * t6[3] + t4[1] * t6[4] + t4[2] * t6[5],
t4[0] * t6[4] - t4[1] * t6[3] + t4[10] * t6[5],
t4[0] * t6[5] - t4[2] * t6[3] - t4[10] * t6[4],
t4[1] * t6[5] - t4[2] * t6[4] + t4[10] * t6[3]
);

}
		
	
	  	
template<>
inline Rtd re (const Rtd& rtd, const Pnt& pnt) {					
					
const Pnt& t1 = pnt;
const Rtd& t2 = rtd;
Rtd t3 = involute( t2);
Rtc t4 (
t1[0] * t3[0] - t1[1] * t3[1] - t1[2] * t3[2],
t1[0] * t3[1] + t1[1] * t3[0] - t1[2] * t3[3],
t1[0] * t3[2] + t1[1] * t3[3] + t1[2] * t3[0],
t1[3] * t3[0] + t1[3] * t3[4],
t1[4] * t3[0] - t1[4] * t3[4],
t1[3] * t3[1] + t1[3] * t3[5],
t1[3] * t3[2] + t1[3] * t3[6],
t1[3] * t3[3] + t1[3] * t3[7],
t1[4] * t3[1] - t1[4] * t3[5],
t1[4] * t3[2] - t1[4] * t3[6],
t1[4] * t3[3] - t1[4] * t3[7],
t1[0] * t3[4] - t1[1] * t3[5] - t1[2] * t3[6],
t1[0] * t3[5] + t1[1] * t3[4] - t1[2] * t3[7],
t1[0] * t3[6] + t1[1] * t3[7] + t1[2] * t3[4],
t1[0] * t3[3] - t1[1] * t3[2] + t1[2] * t3[1],
t1[0] * t3[7] - t1[1] * t3[6] + t1[2] * t3[5]
);
const Pnt& t5 = pnt;
Pnt t6 = reverse( t5);
return Rtd (
t4[0] * t6[0] + t4[1] * t6[1] + t4[2] * t6[2] - t4[3] * t6[4] - t4[4] * t6[3],
t4[0] * t6[1] - t4[1] * t6[0] - t4[5] * t6[4] - t4[8] * t6[3] + t4[14] * t6[2],
t4[0] * t6[2] - t4[2] * t6[0] - t4[6] * t6[4] - t4[9] * t6[3] - t4[14] * t6[1],
t4[1] * t6[2] - t4[2] * t6[1] - t4[7] * t6[4] - t4[10] * t6[3] + t4[14] * t6[0],
t4[3] * t6[4] - t4[4] * t6[3] + t4[11] * t6[0] + t4[12] * t6[1] + t4[13] * t6[2],
t4[5] * t6[4] - t4[8] * t6[3] + t4[11] * t6[1] - t4[12] * t6[0] + t4[15] * t6[2],
t4[6] * t6[4] - t4[9] * t6[3] + t4[11] * t6[2] - t4[13] * t6[0] - t4[15] * t6[1],
t4[7] * t6[4] - t4[10] * t6[3] + t4[12] * t6[2] - t4[13] * t6[1] + t4[15] * t6[0]
);

}
		
	
	  	
template<>
inline Rtd re (const Rtd& rtd, const Par& par) {					
					
const Par& t1 = par;
const Rtd& t2 = rtd;
Rtd t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3] + t1[9] * t3[4],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2] + t1[9] * t3[5],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1] + t1[9] * t3[6],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0] + t1[9] * t3[7],
t1[3] * t3[0] + t1[3] * t3[4] - t1[4] * t3[1] - t1[4] * t3[5] - t1[5] * t3[2] - t1[5] * t3[6],
t1[3] * t3[1] + t1[3] * t3[5] + t1[4] * t3[0] + t1[4] * t3[4] - t1[5] * t3[3] - t1[5] * t3[7],
t1[3] * t3[2] + t1[3] * t3[6] + t1[4] * t3[3] + t1[4] * t3[7] + t1[5] * t3[0] + t1[5] * t3[4],
t1[6] * t3[0] - t1[6] * t3[4] - t1[7] * t3[1] + t1[7] * t3[5] - t1[8] * t3[2] + t1[8] * t3[6],
t1[6] * t3[1] - t1[6] * t3[5] + t1[7] * t3[0] - t1[7] * t3[4] - t1[8] * t3[3] + t1[8] * t3[7],
t1[6] * t3[2] - t1[6] * t3[6] + t1[7] * t3[3] - t1[7] * t3[7] + t1[8] * t3[0] - t1[8] * t3[4],
 - t1[0] * t3[5] - t1[1] * t3[6] - t1[2] * t3[7] + t1[9] * t3[0],
t1[0] * t3[4] - t1[1] * t3[7] + t1[2] * t3[6] + t1[9] * t3[1],
t1[0] * t3[7] + t1[1] * t3[4] - t1[2] * t3[5] + t1[9] * t3[2],
 - t1[0] * t3[6] + t1[1] * t3[5] + t1[2] * t3[4] + t1[9] * t3[3],
t1[3] * t3[3] + t1[3] * t3[7] - t1[4] * t3[2] - t1[4] * t3[6] + t1[5] * t3[1] + t1[5] * t3[5],
t1[6] * t3[3] - t1[6] * t3[7] - t1[7] * t3[2] + t1[7] * t3[6] + t1[8] * t3[1] - t1[8] * t3[5]
);
const Par& t5 = par;
Par t6 = reverse( t5);
return Rtd (
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[4] * t6[6] + t4[5] * t6[7] + t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] + t4[10] * t6[9],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] + t4[4] * t6[7] - t4[5] * t6[6] + t4[7] * t6[4] - t4[8] * t6[3] + t4[11] * t6[9] + t4[14] * t6[8] + t4[15] * t6[5],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[4] * t6[8] - t4[6] * t6[6] + t4[7] * t6[5] - t4[9] * t6[3] + t4[12] * t6[9] - t4[14] * t6[7] - t4[15] * t6[4],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] + t4[5] * t6[8] - t4[6] * t6[7] + t4[8] * t6[5] - t4[9] * t6[4] + t4[13] * t6[9] + t4[14] * t6[6] + t4[15] * t6[3],
t4[0] * t6[9] - t4[4] * t6[6] - t4[5] * t6[7] - t4[6] * t6[8] + t4[7] * t6[3] + t4[8] * t6[4] + t4[9] * t6[5] - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2],
t4[1] * t6[9] - t4[4] * t6[7] + t4[5] * t6[6] + t4[7] * t6[4] - t4[8] * t6[3] + t4[10] * t6[0] - t4[12] * t6[2] + t4[13] * t6[1] - t4[14] * t6[8] + t4[15] * t6[5],
t4[2] * t6[9] - t4[4] * t6[8] + t4[6] * t6[6] + t4[7] * t6[5] - t4[9] * t6[3] + t4[10] * t6[1] + t4[11] * t6[2] - t4[13] * t6[0] + t4[14] * t6[7] - t4[15] * t6[4],
t4[3] * t6[9] - t4[5] * t6[8] + t4[6] * t6[7] + t4[8] * t6[5] - t4[9] * t6[4] + t4[10] * t6[2] - t4[11] * t6[1] + t4[12] * t6[0] - t4[14] * t6[6] + t4[15] * t6[3]
);

}
		
	
	  	
template<>
inline Rtd re (const Rtd& rtd, const Cir& cir) {					
					
const Cir& t1 = cir;
const Rtd& t2 = rtd;
Rtd t3 = involute( t2);
Rtc t4 (
t1[6] * t3[4] - t1[7] * t3[5] - t1[8] * t3[6] - t1[9] * t3[3],
t1[6] * t3[5] + t1[7] * t3[4] - t1[8] * t3[7] + t1[9] * t3[2],
t1[6] * t3[6] + t1[7] * t3[7] + t1[8] * t3[4] - t1[9] * t3[1],
 - t1[0] * t3[1] - t1[0] * t3[5] - t1[1] * t3[2] - t1[1] * t3[6] - t1[2] * t3[3] - t1[2] * t3[7],
 - t1[3] * t3[1] + t1[3] * t3[5] - t1[4] * t3[2] + t1[4] * t3[6] - t1[5] * t3[3] + t1[5] * t3[7],
t1[0] * t3[0] + t1[0] * t3[4] - t1[1] * t3[3] - t1[1] * t3[7] + t1[2] * t3[2] + t1[2] * t3[6],
t1[0] * t3[3] + t1[0] * t3[7] + t1[1] * t3[0] + t1[1] * t3[4] - t1[2] * t3[1] - t1[2] * t3[5],
 - t1[0] * t3[2] - t1[0] * t3[6] + t1[1] * t3[1] + t1[1] * t3[5] + t1[2] * t3[0] + t1[2] * t3[4],
t1[3] * t3[0] - t1[3] * t3[4] - t1[4] * t3[3] + t1[4] * t3[7] + t1[5] * t3[2] - t1[5] * t3[6],
t1[3] * t3[3] - t1[3] * t3[7] + t1[4] * t3[0] - t1[4] * t3[4] - t1[5] * t3[1] + t1[5] * t3[5],
 - t1[3] * t3[2] + t1[3] * t3[6] + t1[4] * t3[1] - t1[4] * t3[5] + t1[5] * t3[0] - t1[5] * t3[4],
t1[6] * t3[0] - t1[7] * t3[1] - t1[8] * t3[2] - t1[9] * t3[7],
t1[6] * t3[1] + t1[7] * t3[0] - t1[8] * t3[3] + t1[9] * t3[6],
t1[6] * t3[2] + t1[7] * t3[3] + t1[8] * t3[0] - t1[9] * t3[5],
t1[6] * t3[7] - t1[7] * t3[6] + t1[8] * t3[5] + t1[9] * t3[0],
t1[6] * t3[3] - t1[7] * t3[2] + t1[8] * t3[1] + t1[9] * t3[4]
);
const Cir& t5 = cir;
Cir t6 = reverse( t5);
return Rtd (
t4[5] * t6[3] + t4[6] * t6[4] + t4[7] * t6[5] + t4[8] * t6[0] + t4[9] * t6[1] + t4[10] * t6[2] + t4[11] * t6[6] + t4[12] * t6[7] + t4[13] * t6[8] - t4[14] * t6[9],
t4[2] * t6[9] - t4[3] * t6[3] - t4[4] * t6[0] + t4[6] * t6[5] - t4[7] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[11] * t6[7] - t4[12] * t6[6] + t4[15] * t6[8],
 - t4[1] * t6[9] - t4[3] * t6[4] - t4[4] * t6[1] - t4[5] * t6[5] + t4[7] * t6[3] - t4[8] * t6[2] + t4[10] * t6[0] + t4[11] * t6[8] - t4[13] * t6[6] - t4[15] * t6[7],
t4[0] * t6[9] - t4[3] * t6[5] - t4[4] * t6[2] + t4[5] * t6[4] - t4[6] * t6[3] + t4[8] * t6[1] - t4[9] * t6[0] + t4[12] * t6[8] - t4[13] * t6[7] + t4[15] * t6[6],
t4[0] * t6[6] + t4[1] * t6[7] + t4[2] * t6[8] - t4[5] * t6[3] - t4[6] * t6[4] - t4[7] * t6[5] + t4[8] * t6[0] + t4[9] * t6[1] + t4[10] * t6[2] - t4[15] * t6[9],
t4[0] * t6[7] - t4[1] * t6[6] + t4[3] * t6[3] - t4[4] * t6[0] - t4[6] * t6[5] + t4[7] * t6[4] + t4[9] * t6[2] - t4[10] * t6[1] + t4[13] * t6[9] + t4[14] * t6[8],
t4[0] * t6[8] - t4[2] * t6[6] + t4[3] * t6[4] - t4[4] * t6[1] + t4[5] * t6[5] - t4[7] * t6[3] - t4[8] * t6[2] + t4[10] * t6[0] - t4[12] * t6[9] - t4[14] * t6[7],
t4[1] * t6[8] - t4[2] * t6[7] + t4[3] * t6[5] - t4[4] * t6[2] - t4[5] * t6[4] + t4[6] * t6[3] + t4[8] * t6[1] - t4[9] * t6[0] + t4[11] * t6[9] + t4[14] * t6[6]
);

}
		
	
	  	
template<>
inline Rtd re (const Rtd& rtd, const Sph& sph) {					
					
const Sph& t1 = sph;
const Rtd& t2 = rtd;
Rtd t3 = involute( t2);
Mtt t4 (
 - t1[0] * t3[5] - t1[1] * t3[6] - t1[2] * t3[7],
t1[0] * t3[4] - t1[1] * t3[7] + t1[2] * t3[6],
t1[0] * t3[7] + t1[1] * t3[4] - t1[2] * t3[5],
 - t1[0] * t3[6] + t1[1] * t3[5] + t1[2] * t3[4],
 - t1[3] * t3[3] - t1[3] * t3[7],
t1[3] * t3[2] + t1[3] * t3[6],
 - t1[3] * t3[1] - t1[3] * t3[5],
 - t1[4] * t3[3] + t1[4] * t3[7],
t1[4] * t3[2] - t1[4] * t3[6],
 - t1[4] * t3[1] + t1[4] * t3[5],
 - t1[0] * t3[1] - t1[1] * t3[2] - t1[2] * t3[3],
t1[0] * t3[0] - t1[1] * t3[3] + t1[2] * t3[2],
t1[0] * t3[3] + t1[1] * t3[0] - t1[2] * t3[1],
 - t1[0] * t3[2] + t1[1] * t3[1] + t1[2] * t3[0],
t1[3] * t3[0] + t1[3] * t3[4],
t1[4] * t3[0] - t1[4] * t3[4]
);
const Sph& t5 = sph;
Sph t6 = reverse( t5);
return Rtd (
 - t4[11] * t6[0] - t4[12] * t6[1] - t4[13] * t6[2] - t4[14] * t6[4] - t4[15] * t6[3],
t4[6] * t6[4] + t4[9] * t6[3] + t4[10] * t6[0] - t4[12] * t6[2] + t4[13] * t6[1],
 - t4[5] * t6[4] - t4[8] * t6[3] + t4[10] * t6[1] + t4[11] * t6[2] - t4[13] * t6[0],
t4[4] * t6[4] + t4[7] * t6[3] + t4[10] * t6[2] - t4[11] * t6[1] + t4[12] * t6[0],
 - t4[1] * t6[0] - t4[2] * t6[1] - t4[3] * t6[2] + t4[14] * t6[4] - t4[15] * t6[3],
t4[0] * t6[0] - t4[2] * t6[2] + t4[3] * t6[1] - t4[6] * t6[4] + t4[9] * t6[3],
t4[0] * t6[1] + t4[1] * t6[2] - t4[3] * t6[0] + t4[5] * t6[4] - t4[8] * t6[3],
t4[0] * t6[2] - t4[1] * t6[1] + t4[2] * t6[0] - t4[4] * t6[4] + t4[7] * t6[3]
);

}
		
	
		
	} //vsr::
	#endif
	