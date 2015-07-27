
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. This
// project loosely follows the Google C++ styleguide and uses a tab-size of two spaces and a max-
// width of 100 characters per line.
//
// Author(s):
//   Cedric Nugteren <www.cedricnugteren.nl>
//
// This file populates the database with best-found tuning parameters for the PadTranspose kernels.
//
// =================================================================================================

namespace clblast {
// =================================================================================================

const Database::DatabaseEntry Database::PadTraSingle = {
  "PadTranspose", Precision::kSingle, {
    { // NVIDIA GPUs
      kDeviceTypeGPU, kDeviceVendorNVIDIA, {
        { "GeForce GTX 480",  { {"PADTRA_TILE",16}, {"PADTRA_WPT",2}, {"PADTRA_PAD",1} } },
        { "Tesla K20m",       { {"PADTRA_TILE",16}, {"PADTRA_WPT",2}, {"PADTRA_PAD",1} } },
        { "Tesla K40m",       { {"PADTRA_TILE",32}, {"PADTRA_WPT",2}, {"PADTRA_PAD",1} } },
      }
    },
    { // AMD GPUs
      kDeviceTypeGPU, kDeviceVendorAMD, {
        { "Tahiti",           { {"PADTRA_TILE",16}, {"PADTRA_WPT",4}, {"PADTRA_PAD",0} } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, kDeviceVendorIntel, {
        { "Iris",             { {"PADTRA_TILE",16}, {"PADTRA_WPT",2}, {"PADTRA_PAD",0} } },
      }
    },
    { // Default
      kDeviceTypeAll, kDeviceVendorAll, {
        { kDefaultDevice,     { {"PADTRA_TILE",16}, {"PADTRA_WPT",1}, {"PADTRA_PAD",0} } },
      }
    },
  }
};

// =================================================================================================

const Database::DatabaseEntry Database::PadTraDouble = {
  "PadTranspose", Precision::kDouble, {
    { // NVIDIA GPUs
      kDeviceTypeGPU, kDeviceVendorNVIDIA, {
        { "GeForce GTX 480",  { {"PADTRA_TILE",16}, {"PADTRA_WPT",1}, {"PADTRA_PAD",1} } },
        { "Tesla K20m",       { {"PADTRA_TILE",16}, {"PADTRA_WPT",1}, {"PADTRA_PAD",1} } },
        { "Tesla K40m",       { {"PADTRA_TILE",16}, {"PADTRA_WPT",2}, {"PADTRA_PAD",1} } },
      }
    },
    { // AMD GPUs
      kDeviceTypeGPU, kDeviceVendorAMD, {
        { "Tahiti",           { {"PADTRA_TILE",8}, {"PADTRA_WPT",4}, {"PADTRA_PAD",0} } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, kDeviceVendorIntel, {
      }
    },
    { // Default
      kDeviceTypeAll, kDeviceVendorAll, {
        { kDefaultDevice,     { {"PADTRA_TILE",16}, {"PADTRA_WPT",1}, {"PADTRA_PAD",0} } },
      }
    },
  }
};

// =================================================================================================

const Database::DatabaseEntry Database::PadTraComplexSingle = {
  "PadTranspose", Precision::kComplexSingle, {
    { // NVIDIA GPUs
      kDeviceTypeGPU, kDeviceVendorNVIDIA, {
        { "GeForce GTX 480",  { {"PADTRA_TILE",16}, {"PADTRA_WPT",1}, {"PADTRA_PAD",1} } },
        { "Tesla K20m",       { {"PADTRA_TILE",16}, {"PADTRA_WPT",1}, {"PADTRA_PAD",1} } },
        { "Tesla K40m",       { {"PADTRA_TILE",16}, {"PADTRA_WPT",1}, {"PADTRA_PAD",0} } },
      }
    },
    { // AMD GPUs
      kDeviceTypeGPU, kDeviceVendorAMD, {
        { "Tahiti",           { {"PADTRA_TILE",16}, {"PADTRA_WPT",2}, {"PADTRA_PAD",0} } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, kDeviceVendorIntel, {
        { "Iris",             { {"PADTRA_TILE",16}, {"PADTRA_WPT",2}, {"PADTRA_PAD",0} } },
      }
    },
    { // Default
      kDeviceTypeAll, kDeviceVendorAll, {
        { kDefaultDevice,     { {"PADTRA_TILE",16}, {"PADTRA_WPT",1}, {"PADTRA_PAD",0} } },
      }
    },
  }
};

// =================================================================================================

const Database::DatabaseEntry Database::PadTraComplexDouble = {
  "PadTranspose", Precision::kComplexDouble, {
    { // NVIDIA GPUs
      kDeviceTypeGPU, kDeviceVendorNVIDIA, {
        { "GeForce GTX 480",  { {"PADTRA_TILE",16}, {"PADTRA_WPT",1}, {"PADTRA_PAD",1} } },
        { "Tesla K20m",       { {"PADTRA_TILE",16}, {"PADTRA_WPT",1}, {"PADTRA_PAD",1} } },
        { "Tesla K40m",       { {"PADTRA_TILE",16}, {"PADTRA_WPT",1}, {"PADTRA_PAD",1} } },
      }
    },
    { // AMD GPUs
      kDeviceTypeGPU, kDeviceVendorAMD, {
        { "Tahiti",           { {"PADTRA_TILE",8}, {"PADTRA_WPT",2}, {"PADTRA_PAD",1} } },
      }
    },
    { // Intel GPUs
      kDeviceTypeGPU, kDeviceVendorIntel, {
      }
    },
    { // Default
      kDeviceTypeAll, kDeviceVendorAll, {
        { kDefaultDevice,     { {"PADTRA_TILE",16}, {"PADTRA_WPT",1}, {"PADTRA_PAD",0} } },
      }
    },
  }
};

// =================================================================================================
} // namespace clblast
