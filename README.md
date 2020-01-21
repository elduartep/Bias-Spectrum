# Bias-Spectrum
Power spectrum and linear bias estimator

# You need to install first
FFTW3

openmp


# Main Program
Bias_pragma_lb.c

You can compile it by typing: g++ Bias_pragma_lb.c -lfftw3_omp -lfftw3 -lm -fopenmp

You need to compile it every time you change the parameters file

## description

It estimates the matter power spectrum, the void-matter linear bias, or the halo-matter linear bias.

# Parameters file
parametros.h

There you need to set a series os parameters, such as cosmological parameters, details of the catalogs, path and name to the cataloges, the radious or mass intervals to consider when estimating the linear bias, and finally what you want to compute (spectrum, bias, etc).


# INPUTS

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

# OUTPUTS

## P_dark_matter.dat
matter power spectrum

## bias_halo_matter.dat
halo-matter linear bias


## bias_void_matter.dat
void-matter linear bias


## Ph.dat
halo power spectrum

## Pv.dat
void-power spectrum


