//
//  Copyright (C) 2023 Schrödinger, LLC
//
//   @@ All Rights Reserved @@
//  This file is part of the RDKit.
//  The contents are covered by the terms of the BSD license
//  which is included in the file license.txt, found at the root
//  of the RDKit source tree.
//
// THIS FILE IS AUTOMATICALLY GENERATED. It contains templates used
// in 2D coordinate generation. If you want to contribute to these
// templates, please refer to instructions in:
// https://github.com/rdkit/molecular_templates/blob/main/README.md
//

#include <string>
#include <vector>

// clang-format off
const std::vector<std::string> TEMPLATE_SMILES = {
    "c1cc2ccc1-c1ccc(cc1)-c1ccc(cc1)-c1ccc(cc1)-c1ccc(cc1)-c1ccc-2cc1 |(2.33,1.43,;3.56,2.14,;3.56,3.56,;2.33,4.28,;1.1,3.57,;1.1,2.14,;0.12,0.44,;-1.12,-0.27,;-1.12,-1.69,;0.12,-2.4,;1.35,-1.69,;1.35,-0.27,;1.1,-4.1,;1.1,-5.53,;2.33,-6.24,;3.56,-5.52,;3.56,-4.1,;2.33,-3.39,;5.53,-5.52,;5.53,-4.1,;6.76,-3.39,;8,-4.11,;7.99,-5.53,;6.76,-6.24,;8.98,-2.4,;10.21,-1.69,;10.21,-0.27,;8.98,0.44,;7.75,-0.27,;7.75,-1.69,;8,2.14,;6.76,1.43,;5.53,2.14,;5.53,3.56,;6.76,4.27,;7.99,3.56,)|",
    "C1=CC=CC2CNc3cccc(c32)NCCCCC=C1 |(0.88,6.2,;-0.38,6.54,;-0.71,7.79,;-1.92,8.31,;-3.35,8.16,;-4.35,9.36,;-5.57,8.92,;-5.53,7.62,;-6.46,6.72,;-6.15,5.46,;-4.9,5.1,;-3.97,6,;-4.28,7.26,;-2.49,5.27,;-1.81,3.97,;-0.06,4.07,;1.98,3.38,;4.34,5.03,;2.46,4.61,;1.21,4.95,)|",
    "C1CCCC2CCCC(CCCCC3CCCCC3CCC1)C2 |(-4.26,2.7,;-2.96,3.45,;-1.66,2.7,;-1.66,1.2,;-2.96,0.45,;-4.26,1.2,;-5.56,0.45,;-5.56,-1.05,;-4.26,-1.8,;-4.26,-3.3,;-5.56,-4.05,;-6.86,-3.3,;-6.86,-1.8,;-8.16,-1.05,;-9.46,-1.8,;-10.76,-1.05,;-10.76,0.45,;-9.46,1.2,;-8.16,0.45,;-6.86,1.2,;-6.86,2.7,;-5.56,3.45,;-2.96,-1.05,)|",
    "C1CCCCC2CCCC(CCCCC3CCCCC3CCCC1)C2 |(3.45,3.7,;4.75,2.96,;5.5,1.66,;6.99,1.66,;7.74,0.37,;6.99,-0.92,;7.61,-2.28,;6.76,-3.51,;5.27,-3.41,;4.6,-2.07,;3.11,-2.07,;2.36,-0.78,;0.87,-0.78,;0.87,0.72,;-0.43,1.46,;-1.72,0.72,;-3.02,1.46,;-3.02,2.96,;-1.72,3.7,;-0.43,2.96,;0.87,3.7,;0.87,5.2,;2.16,5.95,;3.45,5.2,;5.35,-0.78,)|",
    "C1=CCCC2CCCCC2CCCCC2CCCC(CCCCCCC1)C2 |(13.33,1.35,;13.33,-0.15,;12.03,-0.9,;10.73,-0.15,;9.43,-0.9,;8.13,-0.15,;6.83,-0.9,;6.83,-2.4,;8.13,-3.15,;9.43,-2.4,;10.73,-3.15,;10.73,-4.65,;12.03,-5.4,;13.33,-4.65,;14.63,-5.4,;14.63,-6.9,;15.93,-7.65,;17.23,-6.9,;17.23,-5.4,;18.52,-4.65,;18.52,-3.15,;17.23,-2.4,;17.23,-0.9,;15.93,-0.15,;15.93,1.35,;14.63,2.1,;15.93,-4.65,)|",
    "C1CCCCC2CCCCC2CCCCC2CCCC(CCC1)C2 |(-12.42,3.97,;-13.92,3.97,;-14.67,5.27,;-16.17,5.27,;-16.92,3.97,;-18.32,3.43,;-19.62,4.18,;-20.92,3.43,;-20.92,1.93,;-19.62,1.18,;-18.32,1.93,;-16.92,1.39,;-16.17,0.09,;-14.67,0.09,;-13.92,-1.21,;-12.42,-1.21,;-11.67,-2.51,;-10.16,-2.51,;-9.41,-1.21,;-10.16,0.09,;-9.41,1.39,;-10.16,2.67,;-11.67,2.67,;-11.67,0.09,)|",
    "C1CCCCCC2CCCC(CCCCC3CCCCC3CCCCC1)C2 |(3.36,1.33,;3.36,-0.17,;4.66,-0.92,;4.66,-2.42,;3.36,-3.17,;2.06,-2.42,;0.76,-3.17,;0.76,-4.67,;-0.54,-5.41,;-1.84,-4.67,;-1.84,-3.17,;-3.14,-2.42,;-3.14,-0.92,;-1.84,-0.17,;-1.84,1.33,;-3.14,2.08,;-4.44,1.33,;-5.74,2.08,;-5.74,3.58,;-4.44,4.33,;-3.14,3.58,;-1.84,4.33,;-0.54,3.58,;0.76,4.33,;2.06,3.58,;2.06,2.08,;-0.54,-2.42,)|",
    "C1CCCCCC2CCCCC2CCCCC2CCCC(CCCC1)C2 |(2.29,2.48,;1.76,1.08,;0.46,0.33,;-0.84,1.08,;-2.14,0.33,;-3.44,1.08,;-4.74,0.33,;-6.03,1.08,;-7.33,0.33,;-7.33,-1.17,;-6.03,-1.91,;-4.74,-1.17,;-3.44,-1.91,;-2.14,-1.17,;-0.84,-1.91,;0.46,-1.17,;1.76,-1.91,;1.76,-3.41,;3.06,-4.16,;4.35,-3.41,;4.35,-1.91,;5.65,-1.17,;5.65,0.33,;4.33,1.08,;3.79,2.48,;3.06,-1.17,)|",
    "c1cc2cc(c1)CCNCCc1cccc(c1)CCCCC2 |(0.09,5.36,;1.36,4.57,;1.36,3.07,;-0.05,2.56,;-1.41,3.2,;-1.26,4.7,;-2.64,2.35,;-2.52,0.86,;-3.49,-0.29,;-2.99,-1.7,;-1.51,-1.97,;-0.66,-3.2,;-1.15,-4.62,;-0.18,-5.76,;1.3,-5.48,;1.79,-4.07,;0.82,-2.93,;3.03,-3.21,;2.31,-1.9,;3.09,-0.62,;2.24,0.62,;2.51,2.09,)|",
    "C1CCOC2CCCC(CCNCC3CCCC(C3)NC1)C2 |(-1.88,-3.03,;-3.18,-2.28,;-3.18,-0.78,;-1.88,-0.03,;-1.88,1.47,;-3.18,2.22,;-3.18,3.72,;-1.88,4.47,;-0.58,3.72,;0.72,4.47,;2.02,3.72,;2.02,2.22,;3.32,1.47,;3.32,-0.03,;4.62,-0.78,;4.62,-2.28,;3.32,-3.03,;2.02,-2.28,;2.02,-0.78,;0.72,-3.03,;-0.58,-2.28,;-0.58,2.22,)|",
    "c1cc2cc(c1)NCCCCCCCCCNCC2 |(4.8,-0.72,;4.06,-2.02,;2.56,-2.02,;1.81,-0.72,;2.56,0.58,;4.06,0.58,;1.81,1.88,;0.31,1.88,;-0.44,3.18,;-1.94,3.18,;-2.69,1.88,;-4.19,1.88,;-4.94,0.58,;-4.19,-0.72,;-2.69,-0.72,;-1.94,-2.02,;-0.44,-2.02,;0.31,-3.32,;1.81,-3.32,)|",
    "C1CCC2C(C1)C1CCN2NN1 |(-2.94,-0.77,;-2.94,0.77,;-1.6,1.54,;-0.27,0.77,;-0.27,-0.77,;-1.6,-1.54,;1.06,-1.54,;2.4,-0.77,;2.4,0.77,;1.06,1.54,;1.33,0.51,;1.33,-0.51,)|",
    "C1CCCC2CCCCCCC3CC(CCC(CCC1)C2)C3 |(-1.89,30.04,;-2.03,28.38,;-1.22,27.25,;0.24,26.77,;1.63,27.05,;2.02,25.65,;2.97,24.56,;4.31,23.99,;5.76,24.06,;7.04,24.75,;7.89,25.92,;7.78,28.04,;6.39,28.45,;6.8,29.84,;5.46,30.41,;4.01,30.34,;2.7,29.56,;1.98,30.77,;0.8,31.43,;-0.76,31.28,;2.62,28.11,;8.19,29.43,)|",
    "C1CCCC2CCC3CC(CCCCCCC(CC1)C2)C3 |(-1.62,29.21,;-1.04,30.56,;0.27,31.22,;1.7,30.89,;2.58,29.72,;3.91,30.51,;5.38,30.58,;6.73,30.01,;6.31,28.6,;7.71,28.18,;7.83,26.05,;6.97,24.86,;5.68,24.16,;4.21,24.09,;2.86,24.67,;1.89,25.77,;1.5,27.18,;0.04,27,;-1.19,27.8,;2.5,28.25,;8.13,29.59,)|",
    "C1CCC23CCCCC2CC2CCCC(C1)C23 |(-1,-3.09,;0.42,-2.62,;0.84,-1.18,;0.48,0.27,;1.4,-0.91,;2.89,-0.7,;3.45,0.7,;2.52,1.88,;1.04,1.66,;-0.12,2.63,;-1.39,1.83,;-2.83,2.24,;-3.91,1.19,;-3.54,-0.26,;-2.1,-0.67,;-2.19,-2.17,;-1.02,0.37,)|",
    "C1CCC2C3CCC(CCCC4(CCCNC4)CC3)C2C1 |(-2.15,-1.45,;-2.15,0,;-0.9,0.72,;0.35,0,;1.61,0.72,;2.86,0,;2.86,-1.45,;1.61,-2.17,;1.98,-0.78,;0.35,1.44,;0.35,2.89,;1.08,4.14,;-0.32,4.51,;-0.69,5.91,;0.33,6.93,;1.73,6.56,;2.1,5.16,;2.33,3.42,;2.33,1.97,;0.35,-1.45,;-0.9,-2.17,)|",
    "C1CC2CC(C1)C1C3CCC4(CCCNC4)CCCC(C4CCCCC43)C1C2 |(6.16,0.08,;6.16,-1.36,;4.62,-2.18,;4.62,-0.74,;3.37,-0.02,;4.91,0.8,;2.12,-0.74,;0.87,-0.02,;1.59,1.23,;1.59,2.67,;0.34,3.4,;-1.05,3.77,;-1.43,5.16,;-0.41,6.18,;0.99,5.81,;1.36,4.42,;-0.38,2.15,;-0.38,0.7,;1.24,-1.51,;0.87,-2.9,;-0.38,-2.18,;-1.63,-2.9,;-2.88,-2.18,;-2.88,-0.74,;-1.63,-0.02,;-0.38,-0.74,;2.12,-2.18,;3.37,-2.9,)|",
    "C1CCCC2C3CCCCC3C(CC1)C1CC3CCCC(C3)C21 |(0.34,2.84,;1.05,4.08,;2.29,3.37,;2.29,1.94,;1.58,0.7,;0.34,-0.02,;-0.9,0.7,;-2.14,-0.02,;-2.14,-1.45,;-0.9,-2.16,;0.34,-1.45,;1.58,-2.16,;1.95,-0.78,;0.34,1.41,;2.81,-1.45,;4.05,-2.16,;5.29,-1.45,;6.82,-0.64,;6.82,0.79,;5.58,1.51,;4.05,0.7,;5.29,-0.02,;2.81,-0.02,)|",
    "C1CCCC2CCC(CC1)C1CC3CCCC(C3)C21 |(-0.62,1.86,;0.09,3.08,;1.31,2.37,;1.31,0.96,;0.6,-0.27,;-0.62,-0.97,;-0.62,-2.39,;0.6,-3.1,;0.97,-1.73,;-0.62,0.44,;1.83,-2.39,;3.05,-3.1,;4.28,-2.39,;5.79,-1.59,;5.79,-0.17,;4.57,0.54,;3.05,-0.27,;4.28,-0.97,;1.83,-0.97,)|",
    "C1CC2CC34CCCC35C(CC4)CCC25C1 |(3.11,-0.92,;2.22,-2.14,;0.79,-1.67,;-0.65,-2.14,;-1.53,-0.92,;-2.97,-0.45,;-2.97,1.06,;-1.53,1.52,;-0.65,0.3,;-0.65,1.81,;0.42,0.74,;-0.08,-0.53,;0.79,2.28,;1.67,1.06,;0.79,-0.16,;2.22,0.3,)|",
    "c1cc2ccc1CCCOCCc1ccc3c(c1)CCC3O2 |(-1.78,-3.56,;-0.4,-3.88,;0.56,-2.84,;0.15,-1.49,;-1.23,-1.18,;-2.19,-2.21,;-3.89,-1.72,;-3.55,-0.04,;-4.8,1.15,;-3.93,2.64,;-2.58,2.3,;-1.41,3.1,;-0.21,2.36,;-0.61,1,;0.36,-0.03,;1.73,0.3,;2.14,1.65,;1.17,2.68,;3.54,1.69,;4.02,0.35,;2.89,-0.5,;2.19,-2.45,)|",
    "C1CCCN2CCCC(CC1)C2 |(2.64,1.53,;3.1,0.11,;2.52,-1.28,;1.17,-1.94,;-0.28,-1.57,;-1.7,-2.03,;-2.82,-1.03,;-2.51,0.44,;-1.08,0.9,;-0.13,2.06,;1.35,2.31,;0.03,-0.1,)|",
    "C1CCC23CC4CC(CC4C2)C3C1 |(2.64,1.27,;2.63,-0.11,;1.44,-0.79,;0.25,-0.1,;-0.94,-0.78,;-2.13,-0.08,;-2.12,1.29,;-0.93,1.97,;-0.94,0.6,;-2.14,-1.46,;0.24,-1.47,;0.26,1.28,;1.45,1.96,)|",
    "C1=C2CC(CC1)Oc1ccc3cccc(c3c1)N1CCC(C1)NCCc1cncn1C2 |(2.65,3.03,;1.66,1.89,;0.19,2.18,;-0.3,3.59,;0.68,4.73,;2.15,4.45,;-1.75,3.88,;-2.74,2.75,;-4.21,3.03,;-5.19,1.89,;-4.7,0.48,;-5.68,-0.66,;-5.19,-2.08,;-3.71,-2.36,;-2.73,-1.22,;-3.22,0.2,;-2.24,1.33,;-1.26,-1.5,;0.07,-0.81,;1.21,-1.79,;0.71,-3.2,;-0.76,-2.92,;1.68,-4.35,;3.09,-3.86,;3.14,-2.36,;4.12,-1.22,;5.62,-1.19,;6.06,0.25,;4.83,1.1,;3.63,0.2,;2.16,0.48,)|",
    "C1CC2CC(C1)C1C3CCC(CCCC4(CCCNC4)CC3)C1C2 |(5.24,-0.09,;5.24,-1.52,;3.7,-2.33,;3.7,-0.9,;2.46,-0.19,;3.99,0.63,;1.21,-0.9,;-0.03,-0.19,;-1.27,-0.9,;-1.27,-2.33,;-0.03,-3.04,;0.34,-1.66,;-1.27,0.53,;-1.27,1.96,;-0.54,3.2,;-1.94,3.58,;-2.31,4.96,;-1.28,5.98,;0.09,5.6,;0.46,4.22,;0.69,2.5,;0.69,1.06,;1.21,-2.33,;2.46,-3.04,)|",
    "C1CC2CCC3CC2C(C1)CC1CCC(CCC2CC4CCCC3C4C2)C1 |(-4.1,3.81,;-2.8,4.56,;-1.49,3.81,;-0.19,4.56,;1.11,3.81,;1.11,2.3,;-0.19,1.55,;-1.49,2.3,;-2.8,1.55,;-4.1,2.3,;-3.75,0.51,;-2.91,-0.74,;-3.71,-2.02,;-2.74,-3.17,;-1.34,-2.6,;-0.4,-3.64,;1.16,-3.64,;1.91,-2.34,;3.4,-2.18,;3.72,-0.71,;5.02,0.05,;5.02,1.55,;3.72,2.3,;2.41,1.55,;2.41,0.05,;1.3,-0.96,;-1.45,-1.1,)|",
    "c1ccc2c(c1)NCNc1cncc(n1)OCCCCCO2 |(-5.28,0.02,;-5.28,-1.48,;-3.98,-2.23,;-2.68,-1.48,;-2.68,0.02,;-3.98,0.77,;-1.38,0.77,;-1.38,2.27,;-0.08,3.02,;1.22,2.27,;2.52,3.02,;3.82,2.27,;3.82,0.77,;2.52,0.02,;1.22,0.77,;2.52,-1.48,;3.46,-2.65,;2.71,-3.94,;1.22,-3.73,;-0.08,-4.48,;-1.38,-3.73,;-1.38,-2.23,)|",
    "C1=CC23CCN=Cc4cccc(c42)OC3CC1 |(-2.96,0.48,;-1.5,0.79,;-0.49,-0.31,;-0.91,1.46,;-0.55,2.77,;0.94,3.13,;1.99,2.31,;2,0.81,;3.47,0.5,;3.94,-0.92,;2.94,-2.03,;1.47,-1.73,;1.01,-0.31,;0.27,-2.61,;-0.95,-1.74,;-2.41,-2.06,;-3.42,-0.95,)|",
    "C1=CC=CCCC2CCCC(CCN3CCCCC3COCCCCC=CCCCCCCC=C1)O2 |(6.01,0.54,;6.76,-0.76,;6.01,-2.06,;4.51,-2.06,;3.76,-3.36,;2.26,-3.36,;1.51,-4.65,;2.26,-5.95,;1.51,-7.25,;0.01,-7.25,;-0.74,-5.95,;-2.24,-5.95,;-2.98,-4.65,;-4.38,-4.12,;-5.68,-4.87,;-6.98,-4.12,;-6.98,-2.62,;-5.68,-1.87,;-4.38,-2.62,;-2.98,-2.08,;-2.24,-0.78,;-2.98,0.52,;-2.24,1.81,;-2.98,3.14,;-2.24,4.43,;-0.74,4.43,;0.01,5.73,;1.51,5.73,;2.26,7.03,;3.76,7.03,;4.51,5.73,;6.01,5.73,;6.76,4.43,;6.01,3.14,;6.76,1.84,;0.01,-4.65,)|",
    "[SH]12[Fe]34[SH]5[Fe]16[SH]1[Fe]27[SH]3[Fe]51467 |(-3.11,5.79,;-4,4.34,;-2.75,5.06,;-2.75,6.51,;-4,7.24,;-5.26,6.51,;-5.26,5.06,;-4.57,5.74,)|",
    "C1CCC2CCCCC2N2CCNC(C1)C2 |(1.84,-4.1,;2.79,-2.95,;2.76,-1.45,;1.76,-0.33,;2.66,0.86,;2.08,2.24,;0.59,2.43,;-0.32,1.23,;0.27,-0.15,;-0.98,-0.98,;-2.48,-1.01,;-3.2,-2.33,;-2.42,-3.61,;-0.92,-3.58,;0.36,-4.35,;-0.2,-2.26,)|",
    "C1CCCN2CCNC(CC1)C2 |(-2.83,-0.53,;-2.79,0.97,;-1.79,2.09,;-0.3,2.27,;0.95,1.44,;2.45,1.41,;3.17,0.09,;2.39,-1.19,;0.89,-1.16,;-0.39,-1.93,;-1.87,-1.68,;0.17,0.16,)|",
    "c1cc2c3c(c1)CC1CC3(COC2)C2CC3COCc4cccc(c43)C12 |(5.43,0.98,;4.79,2.31,;3.33,2.42,;2.5,1.2,;3.13,-0.12,;4.6,-0.23,;2.5,-1.45,;1.06,-1.78,;0.11,-0.12,;1.06,1.53,;0.48,2.88,;1.38,4.05,;2.83,3.81,;-0.09,0.61,;-1.37,1.35,;-2.64,0.61,;-3.92,1.35,;-5.19,0.61,;-5.19,-0.86,;-3.92,-1.6,;-3.92,-3.07,;-2.64,-3.81,;-1.37,-3.07,;-1.37,-1.6,;-2.64,-0.86,;-0.09,-0.86,)|",
    "C1CC2COCC3(C1)C2CCC12CCC(CCC13)C2 |(3.33,-0.43,;4.27,0.1,;3.06,0.61,;3.06,2.07,;1.79,2.81,;0.52,2.07,;0.52,0.61,;1.85,0.81,;1.79,-0.13,;1.79,-1.59,;0.52,-2.33,;-0.75,-1.59,;-1.9,-2.51,;-3.33,-2.18,;-3.97,-0.86,;-3.33,0.46,;-1.9,0.79,;-0.75,-0.13,;-2.04,-0.24,)|",
    "C1=C2CC3C4CCCC3(OC4)C23CCC1CC3 |(-2.37,1.38,;-0.86,1.06,;0.38,1.97,;1.62,1.06,;3.13,1.38,;4.16,0.24,;3.68,-1.22,;2.18,-1.54,;1.15,-0.4,;0.54,1.02,;2.07,2.3,;-0.39,-0.4,;-1.46,-0.82,;-2.59,-0.58,;-3.4,0.24,;-2.92,-1.22,;-1.42,-1.54,)|",
    "C1CC23CCC45CCC4(CCC12CN3)NN5 |(-0.72,-0.26,;0.4,0.86,;-0.72,1.97,;0.86,1.97,;1.97,0.86,;1.97,-0.72,;2.18,-1.48,;1.05,-2.61,;0.86,-1.83,;-0.72,-1.83,;-1.83,-0.72,;-1.83,0.86,;-2.95,1.97,;-1.83,3.09,;1.97,-2.95,;3.09,-1.83,)|",
    "C1NC2NC3CCC2CC13 |(0.28,-2.66,;-1.12,-2.66,;-1.26,-1.26,;-2.66,-0.84,;-1.26,-0.42,;-1.12,0.98,;0.28,0.98,;0.42,-0.42,;1.81,-0.84,;0.42,-1.26,)|",
    "C1=CC2CCC1C1=C2CCC1 |(2,-2.62,;2.9,-1.65,;0.47,-1.14,;-1.49,-1.76,;-0.56,-2.69,;0.79,-2.22,;1.19,-0.42,;-0.08,-0.08,;-0.15,1.24,;1.08,1.71,;1.91,0.69,)|",
    "C1=CCCCCCCCCC=COC2Cc3c(ccc4c3CCC(=C4)NCC=C1)O2 |(10.53,10.9,;10.17,9.41,;9.02,8.41,;7.44,8.88,;6.04,8.27,;4.62,8.93,;3.19,8.29,;1.88,9.12,;1.88,10.6,;0.89,11.75,;0.84,13.33,;1.8,14.23,;1.7,15.6,;3.23,16.09,;4.61,16.62,;5.54,15.47,;4.8,14.19,;5.54,12.91,;7.01,12.91,;7.75,14.19,;7.01,15.47,;7.75,16.75,;9.23,16.75,;9.97,15.47,;9.23,14.19,;11.44,15.47,;12.38,14.48,;12.48,12.89,;11.93,11.47,;3.3,14.61,)|",
    "C1CCCCC2CCC3CCC(CCCC1)C23 |(0.03,2.72,;-1.29,3.48,;-2.6,2.72,;-2.6,1.2,;-1.46,0.48,;-1.5,-0.96,;-2.39,-2.19,;-1.5,-3.42,;-0.05,-2.95,;1.39,-3.42,;2.28,-2.19,;1.39,-0.96,;1.35,0.44,;2.66,1.2,;2.66,2.72,;1.35,3.48,;-0.05,-1.43,)|",
    "C1CC2CC3CCC(CC4CCC(NN4)NC4CCC(CC5CCC(CC6CCC(CC1NN2)NN6)NN5)NN4)NN3 |(-3.9,-0.75,;-3.9,0.75,;-5.2,1.5,;-5.2,3,;-3.9,3.75,;-2.6,3,;-1.3,3.75,;-1.3,5.25,;0,6,;1.3,5.25,;1.3,3.75,;2.6,3,;3.9,3.75,;3.9,5.25,;2.6,6,;5.2,3,;5.2,1.5,;3.9,0.75,;3.9,-0.75,;5.2,-1.5,;5.2,-3,;3.9,-3.75,;2.6,-3,;1.3,-3.75,;1.3,-5.25,;0,-6,;-1.3,-5.25,;-1.3,-3.75,;-2.6,-3,;-3.9,-3.75,;-5.2,-3,;-5.2,-1.5,;-6.5,-0.75,;-6.5,0.75,;-3.9,-5.25,;-2.6,-6,;2.6,-6,;3.9,-5.25,;6.5,-0.75,;6.5,0.75,;-2.6,6,;-3.9,5.25,)|",
    "c1cc2c3c(c1)OC1C4CCC5(CC4)C(C2)NCCC315 |(-4.56,-1.05,;-3.81,0.24,;-2.32,0.24,;-1.58,-1.05,;-2.32,-2.34,;-3.81,-2.34,;-0.83,-3.33,;0.66,-2.34,;2.15,-2.34,;2.9,-1.05,;2.15,0.24,;0.66,0.24,;1.66,-0.26,;2.22,-1.22,;-0.09,1.53,;-1.58,1.53,;1.59,1.67,;2.46,0.24,;1.59,-1.19,;-0.08,-1.05,)|",
    "c1cc2c3c(c1)OC1CCCC4C(C2)NCCC314 |(-4.19,-0.81,;-3.47,0.44,;-2.03,0.44,;-1.31,-0.8,;-2.03,-2.05,;-3.47,-2.05,;-0.59,-3.01,;0.85,-2.05,;2.29,-2.05,;3.01,-0.8,;2.29,0.45,;0.85,0.45,;0.13,1.69,;-1.31,1.69,;1.74,1.83,;2.59,0.45,;1.75,-0.93,;0.13,-0.8,)|",
    "C1CCCCCC2CCCCCCCC(CCCCC1)C2 |(0.55,5.43,;1.85,4.68,;1.85,3.18,;3.15,2.42,;3.15,0.92,;1.85,0.18,;1.85,-1.32,;3.15,-2.08,;3.15,-3.58,;1.85,-4.33,;0.55,-3.58,;-0.75,-4.33,;-2.05,-3.58,;-2.05,-2.08,;-0.75,-1.32,;-0.75,0.18,;-2.05,0.92,;-2.05,2.42,;-0.75,3.18,;-0.75,4.68,;0.55,-2.08,)|",
    "C1CCC2CCC(C2)CC2CCCCC2CCCCCC2CC2CC1 |(-1.55,1.9,;-1.55,3.4,;-0.25,4.15,;1.05,3.4,;2.47,3.86,;3.35,2.65,;2.47,1.44,;1.05,1.9,;2.55,-0.15,;3.64,-1.1,;4.94,-0.35,;6.24,-1.1,;6.24,-2.6,;4.94,-3.35,;3.64,-2.6,;2.35,-3.35,;1.05,-2.6,;-0.25,-3.35,;-1.55,-2.6,;-2.84,-3.35,;-4.14,-2.6,;-5.44,-1.85,;-4.14,-1.1,;-2.84,-0.35,;-2.84,1.15,)|",
    "C1=C2CN3CCC45CCN6CCC(OC1)C(C2CC34)C65 |(3.54,1.92,;2.19,2.23,;-0.34,3.56,;-2.59,1.79,;-3.4,0.67,;-2.59,-0.44,;-1.28,-0.02,;-2.3,-0.94,;-1.74,-2.2,;-0.37,-2.06,;0.78,-2.82,;2.04,-2.25,;2.2,-0.87,;3.55,-0.56,;4.14,0.68,;1.12,-0.02,;1.12,1.36,;-0.08,2.06,;-1.28,1.36,;-0.08,-0.71,)|",
    "C1CC2CC(C1)CC1CCCC3CCCC(CC4CCC(CC4)CC4CCCC5CCC(C2)CC54)C31 |(0.63,1.23,;1.36,2.5,;0.63,3.76,;-0.83,3.76,;-1.56,2.5,;-0.83,1.23,;-3.02,2.5,;-3.75,1.23,;-4.48,2.5,;-5.94,2.5,;-6.67,1.23,;-5.94,-0.03,;-6.67,-1.29,;-5.94,-2.56,;-4.48,-2.56,;-3.75,-1.29,;-3.02,-2.56,;-1.56,-2.56,;-0.83,-3.82,;0.63,-3.82,;1.36,-2.56,;0.63,-1.29,;-0.83,-1.29,;2.96,-2.56,;3.69,-1.29,;4.42,-2.56,;5.88,-2.56,;6.61,-1.29,;5.88,-0.03,;6.61,1.23,;5.88,2.5,;4.42,2.5,;3.69,3.76,;3.69,1.23,;4.42,-0.03,;-4.48,-0.03,)|",
    "c1cc2cc(c1)C1CNC(CNCc3ccccc3-2)Cc2ccc(cc2)Oc2cc3cc(c2)C(CN1)NCCNCCCc1ccc(cc1)O3 |(-0.74,-5.67,;0.57,-6.39,;1.84,-5.59,;1.91,-4.09,;0.56,-3.44,;-0.75,-4.17,;0.44,-1.94,;1.74,-1.19,;3.04,-1.94,;4.34,-1.19,;5.39,-2.32,;4.6,-3.6,;5.17,-4.98,;4.45,-6.3,;5.42,-7.44,;4.92,-8.85,;3.44,-9.12,;2.47,-7.98,;2.98,-6.57,;4.34,0.3,;3.04,1.05,;1.74,0.3,;0.44,1.05,;0.44,2.55,;1.74,3.3,;3.04,2.55,;-0.86,3.3,;-2.15,2.55,;-3.45,3.3,;-4.75,2.55,;-4.75,1.05,;-3.45,0.3,;-2.15,1.05,;-3.45,-1.19,;-2.15,-1.94,;-0.86,-1.19,;-4.75,-1.94,;-6.05,-1.19,;-7.35,-1.94,;-8.65,-1.19,;-9.94,-1.94,;-11.24,-1.19,;-11.24,0.3,;-9.94,1.05,;-9.94,2.55,;-8.65,3.3,;-7.35,2.55,;-7.35,1.05,;-8.65,0.3,;-6.05,3.3,)|",
    "C1=C2CCC(=N2)C=C2CCC(N2)C2CCC(=N2)C=C2CCC1=N2 |(-0.08,3.66,;-1.38,2.91,;-2.75,3.53,;-3.76,2.42,;-3.01,1.12,;-1.55,1.43,;-3.63,-0.25,;-2.8,-1.49,;-3.31,-2.9,;-2.14,-3.82,;-0.89,-2.99,;-1.3,-1.55,;0.67,-3,;1.91,-3.84,;3.09,-2.92,;2.58,-1.51,;1.09,-1.56,;3.43,-0.27,;2.82,1.1,;3.58,2.39,;2.58,3.51,;1.21,2.9,;1.36,1.41,)|",
    "c1cc2nnc1CCNCCNCCCCO2 |(0.39,-0.94,;-0.83,-0.07,;-2.19,-0.69,;-2.33,-2.19,;-1.11,-3.06,;0.25,-2.43,;1.63,-3.02,;2.83,-2.13,;2.66,-0.64,;3.65,0.49,;3.17,1.91,;1.7,2.2,;0.93,3.5,;-0.57,3.48,;-1.3,2.17,;-2.76,1.84,;-3.21,0.41,)|",
    "c1cc2cc(c1)Nc1ncn3ncc(c3n1)CCCCCN2 |(-4.96,2.39,;-4.96,0.9,;-3.67,0.15,;-2.38,0.9,;-2.38,2.39,;-3.67,3.13,;-1.09,3.13,;0.2,2.39,;1.55,3.04,;2.94,2.3,;2.9,0.61,;3.78,-0.59,;2.9,-1.79,;1.49,-1.33,;1.49,0.15,;0.2,0.9,;0.2,-2.08,;0.2,-3.57,;-1.09,-4.31,;-2.38,-3.57,;-2.38,-2.08,;-3.67,-1.33,)|",
    "c1cc2nnc1CCNCCNCCCCCO2 |(0.13,0.23,;0.13,-1.27,;1.43,-2.02,;2.73,-1.27,;2.73,0.23,;1.43,0.98,;1.43,2.48,;0.13,3.23,;-1.17,2.48,;-2.47,3.23,;-3.77,2.48,;-3.77,0.98,;-2.47,0.23,;-2.47,-1.27,;-1.17,-2.02,;-1.17,-3.52,;0.13,-4.27,;1.43,-3.52,)|",
    "C1CC2COC3(C1)C2CC12CCC(CCC13)C2 |(3.39,-1.29,;3.85,0.13,;2.85,1.24,;1.66,1.56,;0.74,0.73,;0.93,-0.49,;1.93,-1.6,;1.39,0.93,;0.18,1.81,;-1.03,0.93,;-2.43,1.46,;-3.71,0.69,;-3.91,-0.79,;-2.88,-1.87,;-1.39,-1.74,;-0.57,-0.49,;-1.98,-0.76,)|",
    "C1CC2CCOC3OC4CCC(C1)C23OO4 |(3.53,-1.22,;3.53,0.3,;2.21,1.06,;2.21,2.59,;0.89,3.35,;-0.43,2.59,;-0.43,1.06,;-1.9,0.65,;-2.47,-0.76,;-1.71,-2.08,;-0.2,-2.29,;0.89,-1.22,;2.21,-1.99,;0.89,0.3,;0.12,-0.83,;-1.19,-1.25,)|",
    "C1CC23CC4C5CCN(C4C2)C(C5)C3N1 |(3.25,0.28,;2.47,-0.8,;1.2,-0.39,;-0.33,-1.8,;-2.28,-1.06,;-3.43,-0.39,;-3.43,0.95,;-2.28,1.62,;-1.12,0.95,;-1.12,-0.39,;0.04,-1.06,;0.04,1.62,;-1.44,1.59,;1.2,0.95,;2.47,1.36,)|",
    "C1CCC23CC45OCCC4OCC5CCC2CC(C1)O3 |(-2.99,2.87,;-1.47,2.85,;-0.54,1.65,;-0.89,0.17,;0.55,0.5,;1.71,-0.42,;1.01,0.93,;1.94,2.13,;3.34,1.54,;3.12,0.04,;3.99,-1.16,;3.12,-2.36,;1.71,-1.9,;0.55,-2.83,;-0.89,-2.5,;-1.54,-1.16,;-3.02,-1.15,;-3.63,0.2,;-3.95,1.69,;-2.27,-0.47,)|",
    "C1CCC23COC(CC2C1)C12CCC(CCC31)C2 |(3.82,2.18,;2.51,2.94,;1.2,2.18,;1.2,0.67,;1.83,-0.27,;1.83,-1.41,;1.2,-2.35,;2.51,-1.6,;2.51,-0.08,;3.82,0.67,;-0.11,-1.6,;-1.29,-2.54,;-2.76,-2.2,;-3.42,-0.84,;-2.76,0.52,;-1.29,0.86,;-0.11,-0.08,;-1.98,-2.17,)|",
    "C1=c2ccc3n2[Ni]24n5c1ccc5C=c1ccc(n12)=Cc1ccc(n14)C=3 |(2.49,2.49,;2.93,1.14,;4.27,0.71,;4.27,-0.71,;2.93,-1.14,;2.1,0,;-0.01,0.04,;0,2.1,;1.14,2.93,;0.71,4.27,;-0.71,4.27,;-1.14,2.93,;-2.49,2.49,;-2.93,1.14,;-4.27,0.71,;-4.27,-0.71,;-2.93,-1.14,;-2.1,0,;-2.49,-2.49,;-1.14,-2.93,;-0.71,-4.27,;0.71,-4.27,;1.14,-2.93,;0,-2.1,;2.49,-2.49,)|",
    "C1=C2C=c3ccc4n3[Ni]n3c(ccc3=CC(=N2)C1)=CC1=CCC(=N1)C=4 |(0.73,-4.39,;1.18,-3.01,;2.56,-2.56,;3.01,-1.18,;4.39,-0.73,;4.39,0.73,;3.01,1.18,;2.15,0,;-0.01,0.04,;-2.15,0,;-3.01,1.18,;-4.39,0.73,;-4.39,-0.73,;-3.01,-1.18,;-2.56,-2.56,;-1.18,-3.01,;0,-2.15,;-0.73,-4.39,;-2.56,2.56,;-1.18,3.01,;-0.73,4.39,;0.73,4.39,;1.18,3.01,;0,2.15,;2.56,2.56,)|",
    "C1=c2cc3ccc(cc4nc(cc5ccc(cc(n2)C1)[nH]5)=CC4)[nH]3 |(0.75,-4.53,;1.21,-3.1,;2.64,-2.64,;3.1,-1.21,;4.53,-0.75,;4.53,0.75,;3.1,1.21,;2.64,2.64,;1.21,3.1,;0,2.22,;-1.21,3.1,;-2.64,2.64,;-3.1,1.21,;-4.53,0.75,;-4.53,-0.75,;-3.1,-1.21,;-2.64,-2.64,;-1.21,-3.1,;0,-2.22,;-0.75,-4.53,;-2.22,0,;-0.75,4.53,;0.75,4.53,;2.22,0,)|",
    "C1CC2NNNC3(C1)C2CCC12CCC(CC13)NN2 |(3.2,-1.23,;4.24,-0.24,;3.66,0.98,;3.66,2.53,;2.32,3.31,;0.97,2.53,;0.97,0.98,;1.5,-0.45,;2.32,0.2,;2.32,-1.35,;0.97,-2.13,;-0.37,-1.35,;-1.53,-1.42,;-2.54,-0.84,;-3.06,0.2,;-1.71,0.98,;-0.37,0.2,;-3.06,-1.35,;-1.71,-2.13,)|",
    "C1CCOCC2NNC3CCC(OCCCCOC1)C32 |(-3.81,0.3,;-2.49,-0.41,;-1.35,0.57,;0.13,0.28,;0.93,1.55,;2.43,1.49,;3.48,2.56,;4.82,1.89,;4.6,0.41,;4.84,-1.07,;3.59,-1.9,;2.32,-1.11,;0.82,-1.05,;0.22,-2.42,;-1.23,-2.8,;-2.44,-1.91,;-3.71,-2.7,;-5.03,-1.99,;-5.08,-0.49,;3.12,0.16,)|",
    "C1CC2COC3(C1)C2CCC12CCC(CCC13)C2 |(2.09,2.75,;3.33,2.03,;3.33,0.6,;3.83,-0.53,;1.64,-0.68,;0.85,0.6,;0.85,2.03,;2.09,-0.12,;2.09,-1.55,;0.85,-2.27,;-0.39,-1.55,;-1.51,-2.45,;-2.91,-2.13,;-3.53,-0.84,;-2.91,0.45,;-1.51,0.77,;-0.39,-0.12,;-1.76,-0.29,)|",
    "C1CC2COCC3(C1)C2CC12CCC(CCC13)C2 |(2.1,2.48,;3.1,1.95,;2.88,0.72,;3.84,-0.35,;3.39,-1.72,;1.99,-2.02,;1.02,-0.95,;1.04,1.33,;1.47,0.42,;0.3,1.27,;-0.86,0.42,;-2.21,0.93,;-3.45,0.19,;-3.64,-1.24,;-2.64,-2.28,;-1.21,-2.15,;-0.42,-0.95,;-1.77,-1.21,)|",
    "C1=CCOCCNCc2cccc(c2)CNCC1 |(-3.02,-3.37,;-3.13,-1.88,;-1.89,-1.03,;-2.22,0.43,;-1.29,1.6,;-2.04,2.9,;-1.29,4.2,;0.21,4.2,;0.96,2.9,;2.45,3.07,;3.31,1.84,;2.64,0.49,;1.15,0.43,;0.21,1.6,;0.81,-1.03,;-0.54,-1.68,;-0.43,-3.18,;-1.67,-4.02,)|",
    "C1CCCC2CCCC(CCCCC3CCCCC3CCC1)C2 |(1.28,2.33,;2.58,3.08,;3.88,2.33,;3.88,0.83,;2.58,0.08,;1.28,0.83,;-0.02,0.08,;-0.02,-1.42,;1.28,-2.17,;1.28,-3.67,;-0.02,-4.42,;-1.32,-3.67,;-1.32,-2.17,;-2.62,-1.42,;-3.92,-2.17,;-5.22,-1.42,;-5.22,0.08,;-3.92,0.83,;-2.62,0.08,;-1.32,0.83,;-1.32,2.33,;-0.02,3.08,;2.58,-1.42,)|",
    "C1CCCCC2CCCC(CCCCC3CCCCC3CCCC1)C2 |(0.79,2.19,;2.09,1.44,;2.84,0.15,;4.33,0.15,;5.08,-1.15,;4.33,-2.44,;4.95,-3.8,;4.1,-5.03,;2.61,-4.92,;1.94,-3.59,;0.45,-3.59,;-0.3,-2.3,;-1.79,-2.3,;-1.79,-0.8,;-3.09,-0.05,;-4.38,-0.8,;-5.68,-0.05,;-5.68,1.44,;-4.38,2.19,;-3.09,1.44,;-1.79,2.19,;-1.79,3.68,;-0.5,4.43,;0.79,3.68,;2.69,-2.3,)|",
    "C1=CCCC2CCCCC2CCCCC2CCCC(CCCCCCC1)C2 |(-0.04,3.43,;-0.04,1.93,;-1.34,1.18,;-2.64,1.93,;-3.94,1.18,;-5.24,1.93,;-6.54,1.18,;-6.54,-0.32,;-5.24,-1.07,;-3.94,-0.32,;-2.64,-1.07,;-2.64,-2.57,;-1.34,-3.32,;-0.04,-2.57,;1.26,-3.32,;1.26,-4.82,;2.56,-5.56,;3.86,-4.82,;3.86,-3.32,;5.16,-2.57,;5.16,-1.07,;3.86,-0.32,;3.86,1.18,;2.56,1.93,;2.56,3.43,;1.26,4.18,;2.56,-2.57,)|",
    "C1CCCCC2CCCCC2CCCCC2CCCC(CCC1)C2 |(1.96,1.8,;0.46,1.8,;-0.29,3.1,;-1.79,3.1,;-2.54,1.8,;-3.94,1.26,;-5.24,2.01,;-6.54,1.26,;-6.54,-0.24,;-5.24,-0.99,;-3.94,-0.24,;-2.54,-0.78,;-1.79,-2.08,;-0.29,-2.08,;0.46,-3.38,;1.96,-3.38,;2.71,-4.68,;4.21,-4.68,;4.96,-3.38,;4.21,-2.08,;4.96,-0.78,;4.21,0.5,;2.71,0.5,;2.71,-2.08,)|",
    "C12C3C4C1C1C2C3C41 |(-4.87,2.71,;-4.87,4.42,;-3.16,4.42,;-3.16,2.71,;-3.89,1.9,;-5.6,1.9,;-5.6,3.61,;-3.89,3.61,)|",
    "C1CC2NCC1CN2 |(0.18,3.02,;1.22,3.92,;0.63,5.1,;-0.75,4.3,;-0.75,2.69,;0.63,1.89,;2.02,2.69,;2.02,4.3,)|",
    "C1C2CC3CC1CC3C2 |(-7.01,3.13,;-7.71,4.35,;-7.01,5.56,;-5.61,5.56,;-4.91,4.35,;-5.61,3.13,;-4.28,3.57,;-4.28,5.13,;-6.34,4.05,)|",
};
// clang-format on