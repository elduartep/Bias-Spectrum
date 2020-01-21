// cosmological parameters
const double Om=0.311051;
const double Ol=0.68887;
const double H0=67.66;

// n-body simulation parameters
const double Lbox = 512.;		//	longitud de la caja en [Mpc/h]
const int    np   = 256;		//	numero de particulas en cada dimension
const int    nc   = 256;               	//      number of cells in each direction for computing FFT

// number of threads for paralelization
const int nt=16;


// input file names
char file_CAMB_z0[] = "../ForEder/l/planck_2018_matterpower_0.dat";	//	CAMB power spectrum
char file_matter[]  = "xyz.dat";					//	x y z in Mpc/h for dark matter particles
char file_voids[]   = "../ForEder/l/esferas_512x256_03.txt";		//	x y z r in Mpc/h for dark matter particles
char file_halos[]   = "../ForEder/l/halos_512x256_03.txt";		//	x y z M r in Mpc/h for dark matter particles


const double radio_min_todos=1.522596;  // minimum void radious to consider
const double radio_max_todos=13.871337; // maximum vaoid radious to consider

const double masa_min_todos=3.8;	// minimum halo mass to consider
const double masa_max_todos=13095.;	// maximum halo mass to consider


//  what you want to compute
const int distorcion=0;                //    considering redshift space distortions for dark matter power spectrum
const int espectro_matter=1;           //    computes dark matter power spectrum
const int bias_halos=0;                //    computes halo-matter linear bias
const int bias_voids=0;                //    computes void-matter linear bias
const int espectro_voids=0;            //    computes voids power spectrum
const int espectro_halos=0;            //    computes halos power spectrum



