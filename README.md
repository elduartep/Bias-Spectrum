# Bias-Spectrum
Power spectrum and linear bias estimator

# You need to install 
FFTW3

openmp


# Main Program
Bias_pragma_lb.c
## description

# parameters file
parametros.h

you need to set a series os parameters, such as cosmological parameters, details of the catalogs, path and name to the files...


# imput

## A dark matter catalog
If computing the dark matter power spectrum, or void-matter bias, or halo-matter bias:

format: ASCII file with 3 columns: x, y and z for the dark matter positions (all in Mpc/h)


## A void catalog
If computing the void-matter linear bias

format: ASCII file with 4 columns x, y, z, r for the voids positions an radious in Mpc/h

## A matter catalog
If computing the halo-matter linear bias

format: ASCII file with 5 columns x, y, a, m, r

where x, y, z and  r are the haloes positions an radious in Mpc/h, while m is the halo mass in 10^{10} M_/sun units


