// configuración para el isis lcdm

const double Om=0.311051;
const double Ol=0.68887;
const double H0=67.66;

const double Lbox = 512.;		//	longitud de la caja en [Mpc/h]
const int    np   = 256;		//	numero de particulas en cada dimension
const int    nc   = 256;               	//      number of cells in each direction for computing FFT

const int nt=16;                	//	number of threads for paralelization


char file_CAMB_z0[] = "../ForEder/l/planck_2018_matterpower_0.dat";
//char file_matter[]  = "ic_Lbox512_Np256.dat";
char file_matter[]  = "xyz.dat";
char file_voids[]   = "../ForEder/l/esferas_512x256_03.txt";
char file_halos[]   = "../ForEder/l/halos_512x256_03.txt";




//const double radio_min_todos=1.155162;  //    radio minimo para los bines stack de todos los catalogos
//const double radio_max_todos=18.28353;  //    radio maximo para los bines stack de todos los catalogos
const double radio_min_todos=1.522596;  //resultado de dividir el intervalo anterior en 10 bines
const double radio_max_todos=13.871337; //y no sonsiderar primero y ultimo -> dividir ahora en 8

const double masa_min_todos=3.8;
const double masa_max_todos=13095.;



