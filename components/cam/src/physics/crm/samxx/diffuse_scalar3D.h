
#pragma once

#include "const.h"
#include "vars.h"

void diffuse_scalar3D(real4d &field, real3d &fluxb, real3d &fluxt, real5d &tkh,
                      int ind_tkh, real2d &flux);
void diffuse_scalar3D(real5d &field, int ind_field, real3d &fluxb, real3d &fluxt,
                      real5d &tkh, int ind_tkh, real2d &flux);
void diffuse_scalar3D(real5d &field, int ind_field, real4d &fluxb, int ind_fluxb, real4d &fluxt,
                      int ind_fluxt, real5d &tkh, int ind_tkh, real3d &flux, int ind_flux);
