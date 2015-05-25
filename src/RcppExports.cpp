// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/imager.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// RGBtoHSL
NumericVector RGBtoHSL(NumericVector inp);
RcppExport SEXP imager_RGBtoHSL(SEXP inpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    __result = Rcpp::wrap(RGBtoHSL(inp));
    return __result;
END_RCPP
}
// HSLtoRGB
NumericVector HSLtoRGB(NumericVector inp);
RcppExport SEXP imager_HSLtoRGB(SEXP inpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    __result = Rcpp::wrap(HSLtoRGB(inp));
    return __result;
END_RCPP
}
// RGBtoHSV
NumericVector RGBtoHSV(NumericVector inp);
RcppExport SEXP imager_RGBtoHSV(SEXP inpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    __result = Rcpp::wrap(RGBtoHSV(inp));
    return __result;
END_RCPP
}
// HSVtoRGB
NumericVector HSVtoRGB(NumericVector inp);
RcppExport SEXP imager_HSVtoRGB(SEXP inpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    __result = Rcpp::wrap(HSVtoRGB(inp));
    return __result;
END_RCPP
}
// RGBtoHSI
NumericVector RGBtoHSI(NumericVector inp);
RcppExport SEXP imager_RGBtoHSI(SEXP inpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    __result = Rcpp::wrap(RGBtoHSI(inp));
    return __result;
END_RCPP
}
// HSItoRGB
NumericVector HSItoRGB(NumericVector inp);
RcppExport SEXP imager_HSItoRGB(SEXP inpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    __result = Rcpp::wrap(HSItoRGB(inp));
    return __result;
END_RCPP
}
// RGBtosRGB
NumericVector RGBtosRGB(NumericVector inp);
RcppExport SEXP imager_RGBtosRGB(SEXP inpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    __result = Rcpp::wrap(RGBtosRGB(inp));
    return __result;
END_RCPP
}
// sRGBtoRGB
NumericVector sRGBtoRGB(NumericVector inp);
RcppExport SEXP imager_sRGBtoRGB(SEXP inpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    __result = Rcpp::wrap(sRGBtoRGB(inp));
    return __result;
END_RCPP
}
// RGBtoYCbCr
NumericVector RGBtoYCbCr(NumericVector inp);
RcppExport SEXP imager_RGBtoYCbCr(SEXP inpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    __result = Rcpp::wrap(RGBtoYCbCr(inp));
    return __result;
END_RCPP
}
// YCbCrtoRGB
NumericVector YCbCrtoRGB(NumericVector inp);
RcppExport SEXP imager_YCbCrtoRGB(SEXP inpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    __result = Rcpp::wrap(YCbCrtoRGB(inp));
    return __result;
END_RCPP
}
// RGBtoYUV
NumericVector RGBtoYUV(NumericVector inp);
RcppExport SEXP imager_RGBtoYUV(SEXP inpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    __result = Rcpp::wrap(RGBtoYUV(inp));
    return __result;
END_RCPP
}
// YUVtoRGB
NumericVector YUVtoRGB(NumericVector inp);
RcppExport SEXP imager_YUVtoRGB(SEXP inpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    __result = Rcpp::wrap(YUVtoRGB(inp));
    return __result;
END_RCPP
}
// grayscale
NumericVector grayscale(NumericVector inp);
RcppExport SEXP imager_grayscale(SEXP inpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    __result = Rcpp::wrap(grayscale(inp));
    return __result;
END_RCPP
}
// display
void display(NumericVector im);
RcppExport SEXP imager_display(SEXP imSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    display(im);
    return R_NilValue;
END_RCPP
}
// display_list
void display_list(List imlist);
RcppExport SEXP imager_display_list(SEXP imlistSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type imlist(imlistSEXP);
    display_list(imlist);
    return R_NilValue;
END_RCPP
}
// play
void play(NumericVector inp, bool loop, int delay);
RcppExport SEXP imager_play(SEXP inpSEXP, SEXP loopSEXP, SEXP delaySEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    Rcpp::traits::input_parameter< bool >::type loop(loopSEXP);
    Rcpp::traits::input_parameter< int >::type delay(delaySEXP);
    play(inp, loop, delay);
    return R_NilValue;
END_RCPP
}
// deriche
NumericVector deriche(NumericVector inp, float sigma, int order, char axis, bool boundary_conditions);
RcppExport SEXP imager_deriche(SEXP inpSEXP, SEXP sigmaSEXP, SEXP orderSEXP, SEXP axisSEXP, SEXP boundary_conditionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    Rcpp::traits::input_parameter< float >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< int >::type order(orderSEXP);
    Rcpp::traits::input_parameter< char >::type axis(axisSEXP);
    Rcpp::traits::input_parameter< bool >::type boundary_conditions(boundary_conditionsSEXP);
    __result = Rcpp::wrap(deriche(inp, sigma, order, axis, boundary_conditions));
    return __result;
END_RCPP
}
// vanvliet
NumericVector vanvliet(NumericVector inp, float sigma, int order, char axis, bool boundary_conditions);
RcppExport SEXP imager_vanvliet(SEXP inpSEXP, SEXP sigmaSEXP, SEXP orderSEXP, SEXP axisSEXP, SEXP boundary_conditionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    Rcpp::traits::input_parameter< float >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< int >::type order(orderSEXP);
    Rcpp::traits::input_parameter< char >::type axis(axisSEXP);
    Rcpp::traits::input_parameter< bool >::type boundary_conditions(boundary_conditionsSEXP);
    __result = Rcpp::wrap(vanvliet(inp, sigma, order, axis, boundary_conditions));
    return __result;
END_RCPP
}
// isoblur
NumericVector isoblur(NumericVector inp, float sigma, bool boundary_conditions, bool is_gaussian);
RcppExport SEXP imager_isoblur(SEXP inpSEXP, SEXP sigmaSEXP, SEXP boundary_conditionsSEXP, SEXP is_gaussianSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    Rcpp::traits::input_parameter< float >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type boundary_conditions(boundary_conditionsSEXP);
    Rcpp::traits::input_parameter< bool >::type is_gaussian(is_gaussianSEXP);
    __result = Rcpp::wrap(isoblur(inp, sigma, boundary_conditions, is_gaussian));
    return __result;
END_RCPP
}
// medianblur
NumericVector medianblur(NumericVector inp, int n, float threshold);
RcppExport SEXP imager_medianblur(SEXP inpSEXP, SEXP nSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< float >::type threshold(thresholdSEXP);
    __result = Rcpp::wrap(medianblur(inp, n, threshold));
    return __result;
END_RCPP
}
// boxblur
NumericVector boxblur(NumericVector inp, float sigma, bool boundary_conditions);
RcppExport SEXP imager_boxblur(SEXP inpSEXP, SEXP sigmaSEXP, SEXP boundary_conditionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    Rcpp::traits::input_parameter< float >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type boundary_conditions(boundary_conditionsSEXP);
    __result = Rcpp::wrap(boxblur(inp, sigma, boundary_conditions));
    return __result;
END_RCPP
}
// boxblur_xy
NumericVector boxblur_xy(NumericVector inp, float sx, float sy, bool boundary_conditions);
RcppExport SEXP imager_boxblur_xy(SEXP inpSEXP, SEXP sxSEXP, SEXP sySEXP, SEXP boundary_conditionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    Rcpp::traits::input_parameter< float >::type sx(sxSEXP);
    Rcpp::traits::input_parameter< float >::type sy(sySEXP);
    Rcpp::traits::input_parameter< bool >::type boundary_conditions(boundary_conditionsSEXP);
    __result = Rcpp::wrap(boxblur_xy(inp, sx, sy, boundary_conditions));
    return __result;
END_RCPP
}
// correlate
NumericVector correlate(NumericVector im, NumericVector filter, bool boundary_conditions, bool is_normalised);
RcppExport SEXP imager_correlate(SEXP imSEXP, SEXP filterSEXP, SEXP boundary_conditionsSEXP, SEXP is_normalisedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< bool >::type boundary_conditions(boundary_conditionsSEXP);
    Rcpp::traits::input_parameter< bool >::type is_normalised(is_normalisedSEXP);
    __result = Rcpp::wrap(correlate(im, filter, boundary_conditions, is_normalised));
    return __result;
END_RCPP
}
// convolve
NumericVector convolve(NumericVector im, NumericVector filter, bool boundary_conditions, bool is_normalised);
RcppExport SEXP imager_convolve(SEXP imSEXP, SEXP filterSEXP, SEXP boundary_conditionsSEXP, SEXP is_normalisedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< bool >::type boundary_conditions(boundary_conditionsSEXP);
    Rcpp::traits::input_parameter< bool >::type is_normalised(is_normalisedSEXP);
    __result = Rcpp::wrap(convolve(im, filter, boundary_conditions, is_normalised));
    return __result;
END_RCPP
}
// sharpen
NumericVector sharpen(NumericVector im, float amplitude, bool sharpen_type, float edge, float alpha, float sigma);
RcppExport SEXP imager_sharpen(SEXP imSEXP, SEXP amplitudeSEXP, SEXP sharpen_typeSEXP, SEXP edgeSEXP, SEXP alphaSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< float >::type amplitude(amplitudeSEXP);
    Rcpp::traits::input_parameter< bool >::type sharpen_type(sharpen_typeSEXP);
    Rcpp::traits::input_parameter< float >::type edge(edgeSEXP);
    Rcpp::traits::input_parameter< float >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< float >::type sigma(sigmaSEXP);
    __result = Rcpp::wrap(sharpen(im, amplitude, sharpen_type, edge, alpha, sigma));
    return __result;
END_RCPP
}
// get_gradient
List get_gradient(NumericVector im, std::string axes, int scheme);
RcppExport SEXP imager_get_gradient(SEXP imSEXP, SEXP axesSEXP, SEXP schemeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< std::string >::type axes(axesSEXP);
    Rcpp::traits::input_parameter< int >::type scheme(schemeSEXP);
    __result = Rcpp::wrap(get_gradient(im, axes, scheme));
    return __result;
END_RCPP
}
// get_hessian
List get_hessian(NumericVector im, std::string axes);
RcppExport SEXP imager_get_hessian(SEXP imSEXP, SEXP axesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< std::string >::type axes(axesSEXP);
    __result = Rcpp::wrap(get_hessian(im, axes));
    return __result;
END_RCPP
}
// diffusion_tensors
NumericVector diffusion_tensors(NumericVector im, float sharpness, float anisotropy, float alpha, float sigma, bool is_sqrt);
RcppExport SEXP imager_diffusion_tensors(SEXP imSEXP, SEXP sharpnessSEXP, SEXP anisotropySEXP, SEXP alphaSEXP, SEXP sigmaSEXP, SEXP is_sqrtSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< float >::type sharpness(sharpnessSEXP);
    Rcpp::traits::input_parameter< float >::type anisotropy(anisotropySEXP);
    Rcpp::traits::input_parameter< float >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< float >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type is_sqrt(is_sqrtSEXP);
    __result = Rcpp::wrap(diffusion_tensors(im, sharpness, anisotropy, alpha, sigma, is_sqrt));
    return __result;
END_RCPP
}
// haar
NumericVector haar(NumericVector im, bool inverse, int nb_scales);
RcppExport SEXP imager_haar(SEXP imSEXP, SEXP inverseSEXP, SEXP nb_scalesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< bool >::type inverse(inverseSEXP);
    Rcpp::traits::input_parameter< int >::type nb_scales(nb_scalesSEXP);
    __result = Rcpp::wrap(haar(im, inverse, nb_scales));
    return __result;
END_RCPP
}
// FFT_complex
List FFT_complex(NumericVector real, NumericVector imag, bool inverse, int nb_threads);
RcppExport SEXP imager_FFT_complex(SEXP realSEXP, SEXP imagSEXP, SEXP inverseSEXP, SEXP nb_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type real(realSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type imag(imagSEXP);
    Rcpp::traits::input_parameter< bool >::type inverse(inverseSEXP);
    Rcpp::traits::input_parameter< int >::type nb_threads(nb_threadsSEXP);
    __result = Rcpp::wrap(FFT_complex(real, imag, inverse, nb_threads));
    return __result;
END_RCPP
}
// displacement
NumericVector displacement(NumericVector sourceIm, NumericVector destIm, float smoothness, float precision, unsigned int nb_scales, unsigned int iteration_max, bool is_backward);
RcppExport SEXP imager_displacement(SEXP sourceImSEXP, SEXP destImSEXP, SEXP smoothnessSEXP, SEXP precisionSEXP, SEXP nb_scalesSEXP, SEXP iteration_maxSEXP, SEXP is_backwardSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type sourceIm(sourceImSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type destIm(destImSEXP);
    Rcpp::traits::input_parameter< float >::type smoothness(smoothnessSEXP);
    Rcpp::traits::input_parameter< float >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nb_scales(nb_scalesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type iteration_max(iteration_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type is_backward(is_backwardSEXP);
    __result = Rcpp::wrap(displacement(sourceIm, destIm, smoothness, precision, nb_scales, iteration_max, is_backward));
    return __result;
END_RCPP
}
// interp_xy
NumericVector interp_xy(NumericVector inp, NumericVector ix, NumericVector iy, int z, int c, bool cubic);
RcppExport SEXP imager_interp_xy(SEXP inpSEXP, SEXP ixSEXP, SEXP iySEXP, SEXP zSEXP, SEXP cSEXP, SEXP cubicSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ix(ixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type iy(iySEXP);
    Rcpp::traits::input_parameter< int >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type c(cSEXP);
    Rcpp::traits::input_parameter< bool >::type cubic(cubicSEXP);
    __result = Rcpp::wrap(interp_xy(inp, ix, iy, z, c, cubic));
    return __result;
END_RCPP
}
// interp_xyz
NumericVector interp_xyz(NumericVector inp, NumericVector ix, NumericVector iy, NumericVector iz, int c, bool cubic);
RcppExport SEXP imager_interp_xyz(SEXP inpSEXP, SEXP ixSEXP, SEXP iySEXP, SEXP izSEXP, SEXP cSEXP, SEXP cubicSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ix(ixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type iy(iySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type iz(izSEXP);
    Rcpp::traits::input_parameter< int >::type c(cSEXP);
    Rcpp::traits::input_parameter< bool >::type cubic(cubicSEXP);
    __result = Rcpp::wrap(interp_xyz(inp, ix, iy, iz, c, cubic));
    return __result;
END_RCPP
}
// interp_xyzc
NumericVector interp_xyzc(NumericVector inp, NumericVector ix, NumericVector iy, NumericVector iz, IntegerVector ic, bool cubic);
RcppExport SEXP imager_interp_xyzc(SEXP inpSEXP, SEXP ixSEXP, SEXP iySEXP, SEXP izSEXP, SEXP icSEXP, SEXP cubicSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ix(ixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type iy(iySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type iz(izSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ic(icSEXP);
    Rcpp::traits::input_parameter< bool >::type cubic(cubicSEXP);
    __result = Rcpp::wrap(interp_xyzc(inp, ix, iy, iz, ic, cubic));
    return __result;
END_RCPP
}
// interp_xyc
NumericVector interp_xyc(NumericVector inp, NumericVector ix, NumericVector iy, int z, IntegerVector ic, bool cubic);
RcppExport SEXP imager_interp_xyc(SEXP inpSEXP, SEXP ixSEXP, SEXP iySEXP, SEXP zSEXP, SEXP icSEXP, SEXP cubicSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type inp(inpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ix(ixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type iy(iySEXP);
    Rcpp::traits::input_parameter< int >::type z(zSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ic(icSEXP);
    Rcpp::traits::input_parameter< bool >::type cubic(cubicSEXP);
    __result = Rcpp::wrap(interp_xyc(inp, ix, iy, z, ic, cubic));
    return __result;
END_RCPP
}
// label
NumericVector label(NumericVector im, bool is_high_connectivity, double tolerance);
RcppExport SEXP imager_label(SEXP imSEXP, SEXP is_high_connectivitySEXP, SEXP toleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< bool >::type is_high_connectivity(is_high_connectivitySEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    __result = Rcpp::wrap(label(im, is_high_connectivity, tolerance));
    return __result;
END_RCPP
}
// erode
NumericVector erode(NumericVector im, NumericVector mask, bool boundary_conditions, bool is_normalised);
RcppExport SEXP imager_erode(SEXP imSEXP, SEXP maskSEXP, SEXP boundary_conditionsSEXP, SEXP is_normalisedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mask(maskSEXP);
    Rcpp::traits::input_parameter< bool >::type boundary_conditions(boundary_conditionsSEXP);
    Rcpp::traits::input_parameter< bool >::type is_normalised(is_normalisedSEXP);
    __result = Rcpp::wrap(erode(im, mask, boundary_conditions, is_normalised));
    return __result;
END_RCPP
}
// erode_rect
NumericVector erode_rect(NumericVector im, int sx, int sy, int sz);
RcppExport SEXP imager_erode_rect(SEXP imSEXP, SEXP sxSEXP, SEXP sySEXP, SEXP szSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< int >::type sx(sxSEXP);
    Rcpp::traits::input_parameter< int >::type sy(sySEXP);
    Rcpp::traits::input_parameter< int >::type sz(szSEXP);
    __result = Rcpp::wrap(erode_rect(im, sx, sy, sz));
    return __result;
END_RCPP
}
// erode_square
NumericVector erode_square(NumericVector im, int size);
RcppExport SEXP imager_erode_square(SEXP imSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    __result = Rcpp::wrap(erode_square(im, size));
    return __result;
END_RCPP
}
// dilate
NumericVector dilate(NumericVector im, NumericVector mask, bool boundary_conditions, bool is_normalised);
RcppExport SEXP imager_dilate(SEXP imSEXP, SEXP maskSEXP, SEXP boundary_conditionsSEXP, SEXP is_normalisedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mask(maskSEXP);
    Rcpp::traits::input_parameter< bool >::type boundary_conditions(boundary_conditionsSEXP);
    Rcpp::traits::input_parameter< bool >::type is_normalised(is_normalisedSEXP);
    __result = Rcpp::wrap(dilate(im, mask, boundary_conditions, is_normalised));
    return __result;
END_RCPP
}
// dilate_rect
NumericVector dilate_rect(NumericVector im, int sx, int sy, int sz);
RcppExport SEXP imager_dilate_rect(SEXP imSEXP, SEXP sxSEXP, SEXP sySEXP, SEXP szSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< int >::type sx(sxSEXP);
    Rcpp::traits::input_parameter< int >::type sy(sySEXP);
    Rcpp::traits::input_parameter< int >::type sz(szSEXP);
    __result = Rcpp::wrap(dilate_rect(im, sx, sy, sz));
    return __result;
END_RCPP
}
// dilate_square
NumericVector dilate_square(NumericVector im, int size);
RcppExport SEXP imager_dilate_square(SEXP imSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    __result = Rcpp::wrap(dilate_square(im, size));
    return __result;
END_RCPP
}
// watershed
NumericVector watershed(NumericVector im, NumericVector priority, bool fill_lines);
RcppExport SEXP imager_watershed(SEXP imSEXP, SEXP prioritySEXP, SEXP fill_linesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type priority(prioritySEXP);
    Rcpp::traits::input_parameter< bool >::type fill_lines(fill_linesSEXP);
    __result = Rcpp::wrap(watershed(im, priority, fill_lines));
    return __result;
END_RCPP
}
// distance_transform
NumericVector distance_transform(NumericVector im, double value, unsigned int metric);
RcppExport SEXP imager_distance_transform(SEXP imSEXP, SEXP valueSEXP, SEXP metricSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type metric(metricSEXP);
    __result = Rcpp::wrap(distance_transform(im, value, metric));
    return __result;
END_RCPP
}
// autocrop
NumericVector autocrop(NumericVector im, NumericVector color, std::string axes);
RcppExport SEXP imager_autocrop(SEXP imSEXP, SEXP colorSEXP, SEXP axesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type color(colorSEXP);
    Rcpp::traits::input_parameter< std::string >::type axes(axesSEXP);
    __result = Rcpp::wrap(autocrop(im, color, axes));
    return __result;
END_RCPP
}
// rotate
NumericVector rotate(NumericVector im, float angle, unsigned int interpolation, unsigned int boundary);
RcppExport SEXP imager_rotate(SEXP imSEXP, SEXP angleSEXP, SEXP interpolationSEXP, SEXP boundarySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< float >::type angle(angleSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type interpolation(interpolationSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type boundary(boundarySEXP);
    __result = Rcpp::wrap(rotate(im, angle, interpolation, boundary));
    return __result;
END_RCPP
}
// rotate_xy
NumericVector rotate_xy(NumericVector im, float angle, float cx, float cy, float zoom, unsigned int interpolation, unsigned int boundary);
RcppExport SEXP imager_rotate_xy(SEXP imSEXP, SEXP angleSEXP, SEXP cxSEXP, SEXP cySEXP, SEXP zoomSEXP, SEXP interpolationSEXP, SEXP boundarySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< float >::type angle(angleSEXP);
    Rcpp::traits::input_parameter< float >::type cx(cxSEXP);
    Rcpp::traits::input_parameter< float >::type cy(cySEXP);
    Rcpp::traits::input_parameter< float >::type zoom(zoomSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type interpolation(interpolationSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type boundary(boundarySEXP);
    __result = Rcpp::wrap(rotate_xy(im, angle, cx, cy, zoom, interpolation, boundary));
    return __result;
END_RCPP
}
// mirror
NumericVector mirror(NumericVector im, char axis);
RcppExport SEXP imager_mirror(SEXP imSEXP, SEXP axisSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< char >::type axis(axisSEXP);
    __result = Rcpp::wrap(mirror(im, axis));
    return __result;
END_RCPP
}
// permute_axes
NumericVector permute_axes(NumericVector im, std::string perm);
RcppExport SEXP imager_permute_axes(SEXP imSEXP, SEXP permSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< std::string >::type perm(permSEXP);
    __result = Rcpp::wrap(permute_axes(im, perm));
    return __result;
END_RCPP
}
// resize_doubleXY
NumericVector resize_doubleXY(NumericVector im);
RcppExport SEXP imager_resize_doubleXY(SEXP imSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    __result = Rcpp::wrap(resize_doubleXY(im));
    return __result;
END_RCPP
}
// resize_halfXY
NumericVector resize_halfXY(NumericVector im);
RcppExport SEXP imager_resize_halfXY(SEXP imSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    __result = Rcpp::wrap(resize_halfXY(im));
    return __result;
END_RCPP
}
// resize_tripleXY
NumericVector resize_tripleXY(NumericVector im);
RcppExport SEXP imager_resize_tripleXY(SEXP imSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    __result = Rcpp::wrap(resize_tripleXY(im));
    return __result;
END_RCPP
}
// shift
NumericVector shift(NumericVector im, int delta_x, int delta_y, int delta_z, int delta_c, int boundary_conditions);
RcppExport SEXP imager_shift(SEXP imSEXP, SEXP delta_xSEXP, SEXP delta_ySEXP, SEXP delta_zSEXP, SEXP delta_cSEXP, SEXP boundary_conditionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< int >::type delta_x(delta_xSEXP);
    Rcpp::traits::input_parameter< int >::type delta_y(delta_ySEXP);
    Rcpp::traits::input_parameter< int >::type delta_z(delta_zSEXP);
    Rcpp::traits::input_parameter< int >::type delta_c(delta_cSEXP);
    Rcpp::traits::input_parameter< int >::type boundary_conditions(boundary_conditionsSEXP);
    __result = Rcpp::wrap(shift(im, delta_x, delta_y, delta_z, delta_c, boundary_conditions));
    return __result;
END_RCPP
}
// resize
NumericVector resize(NumericVector im, int size_x, int size_y, int size_z, int size_c, int interpolation_type, unsigned int boundary_conditions, float centering_x, float centering_y, float centering_z, float centering_c);
RcppExport SEXP imager_resize(SEXP imSEXP, SEXP size_xSEXP, SEXP size_ySEXP, SEXP size_zSEXP, SEXP size_cSEXP, SEXP interpolation_typeSEXP, SEXP boundary_conditionsSEXP, SEXP centering_xSEXP, SEXP centering_ySEXP, SEXP centering_zSEXP, SEXP centering_cSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< int >::type size_x(size_xSEXP);
    Rcpp::traits::input_parameter< int >::type size_y(size_ySEXP);
    Rcpp::traits::input_parameter< int >::type size_z(size_zSEXP);
    Rcpp::traits::input_parameter< int >::type size_c(size_cSEXP);
    Rcpp::traits::input_parameter< int >::type interpolation_type(interpolation_typeSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type boundary_conditions(boundary_conditionsSEXP);
    Rcpp::traits::input_parameter< float >::type centering_x(centering_xSEXP);
    Rcpp::traits::input_parameter< float >::type centering_y(centering_ySEXP);
    Rcpp::traits::input_parameter< float >::type centering_z(centering_zSEXP);
    Rcpp::traits::input_parameter< float >::type centering_c(centering_cSEXP);
    __result = Rcpp::wrap(resize(im, size_x, size_y, size_z, size_c, interpolation_type, boundary_conditions, centering_x, centering_y, centering_z, centering_c));
    return __result;
END_RCPP
}
// load_image
NumericVector load_image(std::string fname);
RcppExport SEXP imager_load_image(SEXP fnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    __result = Rcpp::wrap(load_image(fname));
    return __result;
END_RCPP
}
// save_image
void save_image(NumericVector im, std::string fname);
RcppExport SEXP imager_save_image(SEXP imSEXP, SEXP fnameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    save_image(im, fname);
    return R_NilValue;
END_RCPP
}
// imsplit
List imsplit(NumericVector im, char axis, int nb);
RcppExport SEXP imager_imsplit(SEXP imSEXP, SEXP axisSEXP, SEXP nbSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< char >::type axis(axisSEXP);
    Rcpp::traits::input_parameter< int >::type nb(nbSEXP);
    __result = Rcpp::wrap(imsplit(im, axis, nb));
    return __result;
END_RCPP
}
// imappend
NumericVector imappend(List imlist, char axis);
RcppExport SEXP imager_imappend(SEXP imlistSEXP, SEXP axisSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type imlist(imlistSEXP);
    Rcpp::traits::input_parameter< char >::type axis(axisSEXP);
    __result = Rcpp::wrap(imappend(imlist, axis));
    return __result;
END_RCPP
}
// select_patches
List select_patches(NumericVector im, IntegerVector cx, IntegerVector cy, IntegerVector wx, IntegerVector wy);
RcppExport SEXP imager_select_patches(SEXP imSEXP, SEXP cxSEXP, SEXP cySEXP, SEXP wxSEXP, SEXP wySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type cx(cxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type cy(cySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type wx(wxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type wy(wySEXP);
    __result = Rcpp::wrap(select_patches(im, cx, cy, wx, wy));
    return __result;
END_RCPP
}
// select_patches3D
List select_patches3D(NumericVector im, IntegerVector cx, IntegerVector cy, IntegerVector cz, IntegerVector wx, IntegerVector wy, IntegerVector wz);
RcppExport SEXP imager_select_patches3D(SEXP imSEXP, SEXP cxSEXP, SEXP cySEXP, SEXP czSEXP, SEXP wxSEXP, SEXP wySEXP, SEXP wzSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type im(imSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type cx(cxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type cy(cySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type cz(czSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type wx(wxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type wy(wySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type wz(wzSEXP);
    __result = Rcpp::wrap(select_patches3D(im, cx, cy, cz, wx, wy, wz));
    return __result;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int imager_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP imager_RcppExport_registerCCallable() { 
    R_RegisterCCallable("imager", "imager_RcppExport_validate", (DL_FUNC)imager_RcppExport_validate);
    return R_NilValue;
}