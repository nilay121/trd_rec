//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Aug 31 09:28:41 2021 by ROOT version 6.24/02
// from TTree events/Events tree
// found on file: test.root
//////////////////////////////////////////////////////////

#ifndef events_h
#define events_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "dd4pod/Geant4ParticleData.h"
#include "vector"
#include "vector"
#include "dd4pod/CalorimeterHitData.h"
#include "dd4pod/FourVector.h"
#include "dd4pod/MonteCarloContrib.h"
#include "vector"
#include "dd4pod/TrackerHitData.h"
#include "vector"
#include "dd4pod/PhotoMultiplierHitData.h"

class events {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxmcparticles = 29;
   static constexpr Int_t kMaxEcalEndcapPHits = 2759;
   static constexpr Int_t kMaxBarrelTOFHits = 18;
   static constexpr Int_t kMaxVertexBarrelHits = 2;
   static constexpr Int_t kMaxVertexEndcapHits = 6;
   static constexpr Int_t kMaxTrackerBarrelHits = 17;
   static constexpr Int_t kMaxTrackerEndcapHits = 26;
   static constexpr Int_t kMaxForwardTRDHits = 153;
   static constexpr Int_t kMaxDRICHHits = 47;
   static constexpr Int_t kMaxHcalBarrelHits = 271;
   static constexpr Int_t kMaxTOFEndcapHits = 27;
   static constexpr Int_t kMaxEcalEndcapNHits = 106;
   static constexpr Int_t kMaxEcalBarrelHits = 19;
   static constexpr Int_t kMaxEcalBarrelScFiHits = 1638;
   static constexpr Int_t kMaxHcalHadronEndcapHits = 520;
   static constexpr Int_t kMaxForwardOffMTrackerHits = 1;
   static constexpr Int_t kMaxHcalElectronEndcapHits = 32;
   static constexpr Int_t kMaxB0TrackerHits = 1;
   static constexpr Int_t kMaxB0PreshowerHits = 1;
   static constexpr Int_t kMaxffiZDCSiHits = 1;
   static constexpr Int_t kMaxffiZDCPbWO4Hits = 1;
   static constexpr Int_t kMaxForwardRomanPotHits = 1;
   static constexpr Int_t kMaxffiZDCSiWHits = 1;
   static constexpr Int_t kMaxffiZDCSiPbHits = 1;
   static constexpr Int_t kMaxffiZDCScintHits = 1;

   // Declaration of leaf types
   Int_t           mcparticles_;
   Int_t           mcparticles_ID[kMaxmcparticles];   //[mcparticles_]
   Int_t           mcparticles_g4Parent[kMaxmcparticles];   //[mcparticles_]
   Int_t           mcparticles_reason[kMaxmcparticles];   //[mcparticles_]
   Int_t           mcparticles_mask[kMaxmcparticles];   //[mcparticles_]
   Int_t           mcparticles_steps[kMaxmcparticles];   //[mcparticles_]
   Int_t           mcparticles_secondaries[kMaxmcparticles];   //[mcparticles_]
   Int_t           mcparticles_pdgID[kMaxmcparticles];   //[mcparticles_]
   Int_t           mcparticles_status[kMaxmcparticles];   //[mcparticles_]
   Int_t           mcparticles_colorFlow[kMaxmcparticles][2];   //[mcparticles_]
   Int_t           mcparticles_genStatus[kMaxmcparticles];   //[mcparticles_]
   Int_t           mcparticles_charge[kMaxmcparticles];   //[mcparticles_]
   Int_t           mcparticles_spare[kMaxmcparticles][1];   //[mcparticles_]
   Float_t         mcparticles_spin[kMaxmcparticles][3];   //[mcparticles_]
   Double_t        mcparticles_vsx[kMaxmcparticles];   //[mcparticles_]
   Double_t        mcparticles_vsy[kMaxmcparticles];   //[mcparticles_]
   Double_t        mcparticles_vsz[kMaxmcparticles];   //[mcparticles_]
   Double_t        mcparticles_vex[kMaxmcparticles];   //[mcparticles_]
   Double_t        mcparticles_vey[kMaxmcparticles];   //[mcparticles_]
   Double_t        mcparticles_vez[kMaxmcparticles];   //[mcparticles_]
   Double_t        mcparticles_psx[kMaxmcparticles];   //[mcparticles_]
   Double_t        mcparticles_psy[kMaxmcparticles];   //[mcparticles_]
   Double_t        mcparticles_psz[kMaxmcparticles];   //[mcparticles_]
   Double_t        mcparticles_pex[kMaxmcparticles];   //[mcparticles_]
   Double_t        mcparticles_pey[kMaxmcparticles];   //[mcparticles_]
   Double_t        mcparticles_pez[kMaxmcparticles];   //[mcparticles_]
   Double_t        mcparticles_mass[kMaxmcparticles];   //[mcparticles_]
   Double_t        mcparticles_time[kMaxmcparticles];   //[mcparticles_]
   Double_t        mcparticles_properTime[kMaxmcparticles];   //[mcparticles_]
   UInt_t          mcparticles_parents_begin[kMaxmcparticles];   //[mcparticles_]
   UInt_t          mcparticles_parents_end[kMaxmcparticles];   //[mcparticles_]
   UInt_t          mcparticles_daughters_begin[kMaxmcparticles];   //[mcparticles_]
   UInt_t          mcparticles_daughters_end[kMaxmcparticles];   //[mcparticles_]
   vector<int>     *mcparticles_0;
   vector<int>     *mcparticles_1;
   Int_t           EcalEndcapPHits_;
   Long64_t        EcalEndcapPHits_cellID[kMaxEcalEndcapPHits];   //[EcalEndcapPHits_]
   Long_t          EcalEndcapPHits_flag[kMaxEcalEndcapPHits];   //[EcalEndcapPHits_]
   Long_t          EcalEndcapPHits_g4ID[kMaxEcalEndcapPHits];   //[EcalEndcapPHits_]
   Double_t        EcalEndcapPHits_position_x[kMaxEcalEndcapPHits];   //[EcalEndcapPHits_]
   Double_t        EcalEndcapPHits_position_y[kMaxEcalEndcapPHits];   //[EcalEndcapPHits_]
   Double_t        EcalEndcapPHits_position_z[kMaxEcalEndcapPHits];   //[EcalEndcapPHits_]
   Double_t        EcalEndcapPHits_position_t[kMaxEcalEndcapPHits];   //[EcalEndcapPHits_]
   Int_t           EcalEndcapPHits_truth_trackID[kMaxEcalEndcapPHits];   //[EcalEndcapPHits_]
   Int_t           EcalEndcapPHits_truth_pdgID[kMaxEcalEndcapPHits];   //[EcalEndcapPHits_]
   Double_t        EcalEndcapPHits_truth_deposit[kMaxEcalEndcapPHits];   //[EcalEndcapPHits_]
   Double_t        EcalEndcapPHits_truth_time[kMaxEcalEndcapPHits];   //[EcalEndcapPHits_]
   Double_t        EcalEndcapPHits_truth_length[kMaxEcalEndcapPHits];   //[EcalEndcapPHits_]
   Double_t        EcalEndcapPHits_truth_x[kMaxEcalEndcapPHits];   //[EcalEndcapPHits_]
   Double_t        EcalEndcapPHits_truth_y[kMaxEcalEndcapPHits];   //[EcalEndcapPHits_]
   Double_t        EcalEndcapPHits_truth_z[kMaxEcalEndcapPHits];   //[EcalEndcapPHits_]
   Double_t        EcalEndcapPHits_energyDeposit[kMaxEcalEndcapPHits];   //[EcalEndcapPHits_]
   Int_t           BarrelTOFHits_;
   Long64_t        BarrelTOFHits_cellID[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Long_t          BarrelTOFHits_flag[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Long_t          BarrelTOFHits_g4ID[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Double_t        BarrelTOFHits_position_x[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Double_t        BarrelTOFHits_position_y[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Double_t        BarrelTOFHits_position_z[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Double_t        BarrelTOFHits_position_t[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Double_t        BarrelTOFHits_momentum_x[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Double_t        BarrelTOFHits_momentum_y[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Double_t        BarrelTOFHits_momentum_z[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Double_t        BarrelTOFHits_momentum_t[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Double_t        BarrelTOFHits_length[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Int_t           BarrelTOFHits_truth_trackID[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Int_t           BarrelTOFHits_truth_pdgID[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Double_t        BarrelTOFHits_truth_deposit[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Double_t        BarrelTOFHits_truth_time[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Double_t        BarrelTOFHits_truth_length[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Double_t        BarrelTOFHits_truth_x[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Double_t        BarrelTOFHits_truth_y[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Double_t        BarrelTOFHits_truth_z[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Double_t        BarrelTOFHits_energyDeposit[kMaxBarrelTOFHits];   //[BarrelTOFHits_]
   Int_t           VertexBarrelHits_;
   Long64_t        VertexBarrelHits_cellID[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Long_t          VertexBarrelHits_flag[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Long_t          VertexBarrelHits_g4ID[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Double_t        VertexBarrelHits_position_x[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Double_t        VertexBarrelHits_position_y[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Double_t        VertexBarrelHits_position_z[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Double_t        VertexBarrelHits_position_t[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Double_t        VertexBarrelHits_momentum_x[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Double_t        VertexBarrelHits_momentum_y[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Double_t        VertexBarrelHits_momentum_z[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Double_t        VertexBarrelHits_momentum_t[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Double_t        VertexBarrelHits_length[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Int_t           VertexBarrelHits_truth_trackID[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Int_t           VertexBarrelHits_truth_pdgID[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Double_t        VertexBarrelHits_truth_deposit[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Double_t        VertexBarrelHits_truth_time[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Double_t        VertexBarrelHits_truth_length[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Double_t        VertexBarrelHits_truth_x[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Double_t        VertexBarrelHits_truth_y[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Double_t        VertexBarrelHits_truth_z[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Double_t        VertexBarrelHits_energyDeposit[kMaxVertexBarrelHits];   //[VertexBarrelHits_]
   Int_t           VertexEndcapHits_;
   Long64_t        VertexEndcapHits_cellID[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Long_t          VertexEndcapHits_flag[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Long_t          VertexEndcapHits_g4ID[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Double_t        VertexEndcapHits_position_x[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Double_t        VertexEndcapHits_position_y[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Double_t        VertexEndcapHits_position_z[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Double_t        VertexEndcapHits_position_t[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Double_t        VertexEndcapHits_momentum_x[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Double_t        VertexEndcapHits_momentum_y[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Double_t        VertexEndcapHits_momentum_z[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Double_t        VertexEndcapHits_momentum_t[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Double_t        VertexEndcapHits_length[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Int_t           VertexEndcapHits_truth_trackID[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Int_t           VertexEndcapHits_truth_pdgID[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Double_t        VertexEndcapHits_truth_deposit[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Double_t        VertexEndcapHits_truth_time[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Double_t        VertexEndcapHits_truth_length[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Double_t        VertexEndcapHits_truth_x[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Double_t        VertexEndcapHits_truth_y[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Double_t        VertexEndcapHits_truth_z[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Double_t        VertexEndcapHits_energyDeposit[kMaxVertexEndcapHits];   //[VertexEndcapHits_]
   Int_t           TrackerBarrelHits_;
   Long64_t        TrackerBarrelHits_cellID[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Long_t          TrackerBarrelHits_flag[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Long_t          TrackerBarrelHits_g4ID[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Double_t        TrackerBarrelHits_position_x[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Double_t        TrackerBarrelHits_position_y[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Double_t        TrackerBarrelHits_position_z[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Double_t        TrackerBarrelHits_position_t[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Double_t        TrackerBarrelHits_momentum_x[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Double_t        TrackerBarrelHits_momentum_y[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Double_t        TrackerBarrelHits_momentum_z[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Double_t        TrackerBarrelHits_momentum_t[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Double_t        TrackerBarrelHits_length[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Int_t           TrackerBarrelHits_truth_trackID[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Int_t           TrackerBarrelHits_truth_pdgID[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Double_t        TrackerBarrelHits_truth_deposit[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Double_t        TrackerBarrelHits_truth_time[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Double_t        TrackerBarrelHits_truth_length[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Double_t        TrackerBarrelHits_truth_x[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Double_t        TrackerBarrelHits_truth_y[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Double_t        TrackerBarrelHits_truth_z[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Double_t        TrackerBarrelHits_energyDeposit[kMaxTrackerBarrelHits];   //[TrackerBarrelHits_]
   Int_t           TrackerEndcapHits_;
   Long64_t        TrackerEndcapHits_cellID[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Long_t          TrackerEndcapHits_flag[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Long_t          TrackerEndcapHits_g4ID[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Double_t        TrackerEndcapHits_position_x[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Double_t        TrackerEndcapHits_position_y[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Double_t        TrackerEndcapHits_position_z[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Double_t        TrackerEndcapHits_position_t[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Double_t        TrackerEndcapHits_momentum_x[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Double_t        TrackerEndcapHits_momentum_y[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Double_t        TrackerEndcapHits_momentum_z[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Double_t        TrackerEndcapHits_momentum_t[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Double_t        TrackerEndcapHits_length[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Int_t           TrackerEndcapHits_truth_trackID[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Int_t           TrackerEndcapHits_truth_pdgID[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Double_t        TrackerEndcapHits_truth_deposit[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Double_t        TrackerEndcapHits_truth_time[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Double_t        TrackerEndcapHits_truth_length[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Double_t        TrackerEndcapHits_truth_x[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Double_t        TrackerEndcapHits_truth_y[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Double_t        TrackerEndcapHits_truth_z[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Double_t        TrackerEndcapHits_energyDeposit[kMaxTrackerEndcapHits];   //[TrackerEndcapHits_]
   Int_t           ForwardTRDHits_;
   Long64_t        ForwardTRDHits_cellID[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Long_t          ForwardTRDHits_flag[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Long_t          ForwardTRDHits_g4ID[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Double_t        ForwardTRDHits_position_x[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Double_t        ForwardTRDHits_position_y[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Double_t        ForwardTRDHits_position_z[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Double_t        ForwardTRDHits_position_t[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Double_t        ForwardTRDHits_momentum_x[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Double_t        ForwardTRDHits_momentum_y[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Double_t        ForwardTRDHits_momentum_z[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Double_t        ForwardTRDHits_momentum_t[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Double_t        ForwardTRDHits_length[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Int_t           ForwardTRDHits_truth_trackID[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Int_t           ForwardTRDHits_truth_pdgID[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Double_t        ForwardTRDHits_truth_deposit[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Double_t        ForwardTRDHits_truth_time[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Double_t        ForwardTRDHits_truth_length[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Double_t        ForwardTRDHits_truth_x[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Double_t        ForwardTRDHits_truth_y[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Double_t        ForwardTRDHits_truth_z[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Double_t        ForwardTRDHits_energyDeposit[kMaxForwardTRDHits];   //[ForwardTRDHits_]
   Int_t           DRICHHits_;
   Long64_t        DRICHHits_cellID[kMaxDRICHHits];   //[DRICHHits_]
   Long_t          DRICHHits_flag[kMaxDRICHHits];   //[DRICHHits_]
   Long_t          DRICHHits_g4ID[kMaxDRICHHits];   //[DRICHHits_]
   Double_t        DRICHHits_position_x[kMaxDRICHHits];   //[DRICHHits_]
   Double_t        DRICHHits_position_y[kMaxDRICHHits];   //[DRICHHits_]
   Double_t        DRICHHits_position_z[kMaxDRICHHits];   //[DRICHHits_]
   Double_t        DRICHHits_position_t[kMaxDRICHHits];   //[DRICHHits_]
   Double_t        DRICHHits_momentum_x[kMaxDRICHHits];   //[DRICHHits_]
   Double_t        DRICHHits_momentum_y[kMaxDRICHHits];   //[DRICHHits_]
   Double_t        DRICHHits_momentum_z[kMaxDRICHHits];   //[DRICHHits_]
   Double_t        DRICHHits_momentum_t[kMaxDRICHHits];   //[DRICHHits_]
   Double_t        DRICHHits_length[kMaxDRICHHits];   //[DRICHHits_]
   Int_t           DRICHHits_truth_trackID[kMaxDRICHHits];   //[DRICHHits_]
   Int_t           DRICHHits_truth_pdgID[kMaxDRICHHits];   //[DRICHHits_]
   Double_t        DRICHHits_truth_deposit[kMaxDRICHHits];   //[DRICHHits_]
   Double_t        DRICHHits_truth_time[kMaxDRICHHits];   //[DRICHHits_]
   Double_t        DRICHHits_truth_length[kMaxDRICHHits];   //[DRICHHits_]
   Double_t        DRICHHits_truth_x[kMaxDRICHHits];   //[DRICHHits_]
   Double_t        DRICHHits_truth_y[kMaxDRICHHits];   //[DRICHHits_]
   Double_t        DRICHHits_truth_z[kMaxDRICHHits];   //[DRICHHits_]
   Double_t        DRICHHits_energy[kMaxDRICHHits];   //[DRICHHits_]
   Int_t           HcalBarrelHits_;
   Long64_t        HcalBarrelHits_cellID[kMaxHcalBarrelHits];   //[HcalBarrelHits_]
   Long_t          HcalBarrelHits_flag[kMaxHcalBarrelHits];   //[HcalBarrelHits_]
   Long_t          HcalBarrelHits_g4ID[kMaxHcalBarrelHits];   //[HcalBarrelHits_]
   Double_t        HcalBarrelHits_position_x[kMaxHcalBarrelHits];   //[HcalBarrelHits_]
   Double_t        HcalBarrelHits_position_y[kMaxHcalBarrelHits];   //[HcalBarrelHits_]
   Double_t        HcalBarrelHits_position_z[kMaxHcalBarrelHits];   //[HcalBarrelHits_]
   Double_t        HcalBarrelHits_position_t[kMaxHcalBarrelHits];   //[HcalBarrelHits_]
   Int_t           HcalBarrelHits_truth_trackID[kMaxHcalBarrelHits];   //[HcalBarrelHits_]
   Int_t           HcalBarrelHits_truth_pdgID[kMaxHcalBarrelHits];   //[HcalBarrelHits_]
   Double_t        HcalBarrelHits_truth_deposit[kMaxHcalBarrelHits];   //[HcalBarrelHits_]
   Double_t        HcalBarrelHits_truth_time[kMaxHcalBarrelHits];   //[HcalBarrelHits_]
   Double_t        HcalBarrelHits_truth_length[kMaxHcalBarrelHits];   //[HcalBarrelHits_]
   Double_t        HcalBarrelHits_truth_x[kMaxHcalBarrelHits];   //[HcalBarrelHits_]
   Double_t        HcalBarrelHits_truth_y[kMaxHcalBarrelHits];   //[HcalBarrelHits_]
   Double_t        HcalBarrelHits_truth_z[kMaxHcalBarrelHits];   //[HcalBarrelHits_]
   Double_t        HcalBarrelHits_energyDeposit[kMaxHcalBarrelHits];   //[HcalBarrelHits_]
   Int_t           TOFEndcapHits_;
   Long64_t        TOFEndcapHits_cellID[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Long_t          TOFEndcapHits_flag[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Long_t          TOFEndcapHits_g4ID[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Double_t        TOFEndcapHits_position_x[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Double_t        TOFEndcapHits_position_y[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Double_t        TOFEndcapHits_position_z[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Double_t        TOFEndcapHits_position_t[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Double_t        TOFEndcapHits_momentum_x[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Double_t        TOFEndcapHits_momentum_y[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Double_t        TOFEndcapHits_momentum_z[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Double_t        TOFEndcapHits_momentum_t[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Double_t        TOFEndcapHits_length[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Int_t           TOFEndcapHits_truth_trackID[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Int_t           TOFEndcapHits_truth_pdgID[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Double_t        TOFEndcapHits_truth_deposit[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Double_t        TOFEndcapHits_truth_time[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Double_t        TOFEndcapHits_truth_length[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Double_t        TOFEndcapHits_truth_x[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Double_t        TOFEndcapHits_truth_y[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Double_t        TOFEndcapHits_truth_z[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Double_t        TOFEndcapHits_energyDeposit[kMaxTOFEndcapHits];   //[TOFEndcapHits_]
   Int_t           EcalEndcapNHits_;
   Long64_t        EcalEndcapNHits_cellID[kMaxEcalEndcapNHits];   //[EcalEndcapNHits_]
   Long_t          EcalEndcapNHits_flag[kMaxEcalEndcapNHits];   //[EcalEndcapNHits_]
   Long_t          EcalEndcapNHits_g4ID[kMaxEcalEndcapNHits];   //[EcalEndcapNHits_]
   Double_t        EcalEndcapNHits_position_x[kMaxEcalEndcapNHits];   //[EcalEndcapNHits_]
   Double_t        EcalEndcapNHits_position_y[kMaxEcalEndcapNHits];   //[EcalEndcapNHits_]
   Double_t        EcalEndcapNHits_position_z[kMaxEcalEndcapNHits];   //[EcalEndcapNHits_]
   Double_t        EcalEndcapNHits_position_t[kMaxEcalEndcapNHits];   //[EcalEndcapNHits_]
   Int_t           EcalEndcapNHits_truth_trackID[kMaxEcalEndcapNHits];   //[EcalEndcapNHits_]
   Int_t           EcalEndcapNHits_truth_pdgID[kMaxEcalEndcapNHits];   //[EcalEndcapNHits_]
   Double_t        EcalEndcapNHits_truth_deposit[kMaxEcalEndcapNHits];   //[EcalEndcapNHits_]
   Double_t        EcalEndcapNHits_truth_time[kMaxEcalEndcapNHits];   //[EcalEndcapNHits_]
   Double_t        EcalEndcapNHits_truth_length[kMaxEcalEndcapNHits];   //[EcalEndcapNHits_]
   Double_t        EcalEndcapNHits_truth_x[kMaxEcalEndcapNHits];   //[EcalEndcapNHits_]
   Double_t        EcalEndcapNHits_truth_y[kMaxEcalEndcapNHits];   //[EcalEndcapNHits_]
   Double_t        EcalEndcapNHits_truth_z[kMaxEcalEndcapNHits];   //[EcalEndcapNHits_]
   Double_t        EcalEndcapNHits_energyDeposit[kMaxEcalEndcapNHits];   //[EcalEndcapNHits_]
   Int_t           EcalBarrelHits_;
   Long64_t        EcalBarrelHits_cellID[kMaxEcalBarrelHits];   //[EcalBarrelHits_]
   Long_t          EcalBarrelHits_flag[kMaxEcalBarrelHits];   //[EcalBarrelHits_]
   Long_t          EcalBarrelHits_g4ID[kMaxEcalBarrelHits];   //[EcalBarrelHits_]
   Double_t        EcalBarrelHits_position_x[kMaxEcalBarrelHits];   //[EcalBarrelHits_]
   Double_t        EcalBarrelHits_position_y[kMaxEcalBarrelHits];   //[EcalBarrelHits_]
   Double_t        EcalBarrelHits_position_z[kMaxEcalBarrelHits];   //[EcalBarrelHits_]
   Double_t        EcalBarrelHits_position_t[kMaxEcalBarrelHits];   //[EcalBarrelHits_]
   Int_t           EcalBarrelHits_truth_trackID[kMaxEcalBarrelHits];   //[EcalBarrelHits_]
   Int_t           EcalBarrelHits_truth_pdgID[kMaxEcalBarrelHits];   //[EcalBarrelHits_]
   Double_t        EcalBarrelHits_truth_deposit[kMaxEcalBarrelHits];   //[EcalBarrelHits_]
   Double_t        EcalBarrelHits_truth_time[kMaxEcalBarrelHits];   //[EcalBarrelHits_]
   Double_t        EcalBarrelHits_truth_length[kMaxEcalBarrelHits];   //[EcalBarrelHits_]
   Double_t        EcalBarrelHits_truth_x[kMaxEcalBarrelHits];   //[EcalBarrelHits_]
   Double_t        EcalBarrelHits_truth_y[kMaxEcalBarrelHits];   //[EcalBarrelHits_]
   Double_t        EcalBarrelHits_truth_z[kMaxEcalBarrelHits];   //[EcalBarrelHits_]
   Double_t        EcalBarrelHits_energyDeposit[kMaxEcalBarrelHits];   //[EcalBarrelHits_]
   Int_t           EcalBarrelScFiHits_;
   Long64_t        EcalBarrelScFiHits_cellID[kMaxEcalBarrelScFiHits];   //[EcalBarrelScFiHits_]
   Long_t          EcalBarrelScFiHits_flag[kMaxEcalBarrelScFiHits];   //[EcalBarrelScFiHits_]
   Long_t          EcalBarrelScFiHits_g4ID[kMaxEcalBarrelScFiHits];   //[EcalBarrelScFiHits_]
   Double_t        EcalBarrelScFiHits_position_x[kMaxEcalBarrelScFiHits];   //[EcalBarrelScFiHits_]
   Double_t        EcalBarrelScFiHits_position_y[kMaxEcalBarrelScFiHits];   //[EcalBarrelScFiHits_]
   Double_t        EcalBarrelScFiHits_position_z[kMaxEcalBarrelScFiHits];   //[EcalBarrelScFiHits_]
   Double_t        EcalBarrelScFiHits_position_t[kMaxEcalBarrelScFiHits];   //[EcalBarrelScFiHits_]
   Int_t           EcalBarrelScFiHits_truth_trackID[kMaxEcalBarrelScFiHits];   //[EcalBarrelScFiHits_]
   Int_t           EcalBarrelScFiHits_truth_pdgID[kMaxEcalBarrelScFiHits];   //[EcalBarrelScFiHits_]
   Double_t        EcalBarrelScFiHits_truth_deposit[kMaxEcalBarrelScFiHits];   //[EcalBarrelScFiHits_]
   Double_t        EcalBarrelScFiHits_truth_time[kMaxEcalBarrelScFiHits];   //[EcalBarrelScFiHits_]
   Double_t        EcalBarrelScFiHits_truth_length[kMaxEcalBarrelScFiHits];   //[EcalBarrelScFiHits_]
   Double_t        EcalBarrelScFiHits_truth_x[kMaxEcalBarrelScFiHits];   //[EcalBarrelScFiHits_]
   Double_t        EcalBarrelScFiHits_truth_y[kMaxEcalBarrelScFiHits];   //[EcalBarrelScFiHits_]
   Double_t        EcalBarrelScFiHits_truth_z[kMaxEcalBarrelScFiHits];   //[EcalBarrelScFiHits_]
   Double_t        EcalBarrelScFiHits_energyDeposit[kMaxEcalBarrelScFiHits];   //[EcalBarrelScFiHits_]
   Int_t           HcalHadronEndcapHits_;
   Long64_t        HcalHadronEndcapHits_cellID[kMaxHcalHadronEndcapHits];   //[HcalHadronEndcapHits_]
   Long_t          HcalHadronEndcapHits_flag[kMaxHcalHadronEndcapHits];   //[HcalHadronEndcapHits_]
   Long_t          HcalHadronEndcapHits_g4ID[kMaxHcalHadronEndcapHits];   //[HcalHadronEndcapHits_]
   Double_t        HcalHadronEndcapHits_position_x[kMaxHcalHadronEndcapHits];   //[HcalHadronEndcapHits_]
   Double_t        HcalHadronEndcapHits_position_y[kMaxHcalHadronEndcapHits];   //[HcalHadronEndcapHits_]
   Double_t        HcalHadronEndcapHits_position_z[kMaxHcalHadronEndcapHits];   //[HcalHadronEndcapHits_]
   Double_t        HcalHadronEndcapHits_position_t[kMaxHcalHadronEndcapHits];   //[HcalHadronEndcapHits_]
   Int_t           HcalHadronEndcapHits_truth_trackID[kMaxHcalHadronEndcapHits];   //[HcalHadronEndcapHits_]
   Int_t           HcalHadronEndcapHits_truth_pdgID[kMaxHcalHadronEndcapHits];   //[HcalHadronEndcapHits_]
   Double_t        HcalHadronEndcapHits_truth_deposit[kMaxHcalHadronEndcapHits];   //[HcalHadronEndcapHits_]
   Double_t        HcalHadronEndcapHits_truth_time[kMaxHcalHadronEndcapHits];   //[HcalHadronEndcapHits_]
   Double_t        HcalHadronEndcapHits_truth_length[kMaxHcalHadronEndcapHits];   //[HcalHadronEndcapHits_]
   Double_t        HcalHadronEndcapHits_truth_x[kMaxHcalHadronEndcapHits];   //[HcalHadronEndcapHits_]
   Double_t        HcalHadronEndcapHits_truth_y[kMaxHcalHadronEndcapHits];   //[HcalHadronEndcapHits_]
   Double_t        HcalHadronEndcapHits_truth_z[kMaxHcalHadronEndcapHits];   //[HcalHadronEndcapHits_]
   Double_t        HcalHadronEndcapHits_energyDeposit[kMaxHcalHadronEndcapHits];   //[HcalHadronEndcapHits_]
   Int_t           ForwardOffMTrackerHits_;
   Long64_t        ForwardOffMTrackerHits_cellID[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Long_t          ForwardOffMTrackerHits_flag[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Long_t          ForwardOffMTrackerHits_g4ID[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Double_t        ForwardOffMTrackerHits_position_x[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Double_t        ForwardOffMTrackerHits_position_y[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Double_t        ForwardOffMTrackerHits_position_z[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Double_t        ForwardOffMTrackerHits_position_t[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Double_t        ForwardOffMTrackerHits_momentum_x[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Double_t        ForwardOffMTrackerHits_momentum_y[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Double_t        ForwardOffMTrackerHits_momentum_z[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Double_t        ForwardOffMTrackerHits_momentum_t[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Double_t        ForwardOffMTrackerHits_length[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Int_t           ForwardOffMTrackerHits_truth_trackID[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Int_t           ForwardOffMTrackerHits_truth_pdgID[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Double_t        ForwardOffMTrackerHits_truth_deposit[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Double_t        ForwardOffMTrackerHits_truth_time[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Double_t        ForwardOffMTrackerHits_truth_length[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Double_t        ForwardOffMTrackerHits_truth_x[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Double_t        ForwardOffMTrackerHits_truth_y[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Double_t        ForwardOffMTrackerHits_truth_z[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Double_t        ForwardOffMTrackerHits_energyDeposit[kMaxForwardOffMTrackerHits];   //[ForwardOffMTrackerHits_]
   Int_t           HcalElectronEndcapHits_;
   Long64_t        HcalElectronEndcapHits_cellID[kMaxHcalElectronEndcapHits];   //[HcalElectronEndcapHits_]
   Long_t          HcalElectronEndcapHits_flag[kMaxHcalElectronEndcapHits];   //[HcalElectronEndcapHits_]
   Long_t          HcalElectronEndcapHits_g4ID[kMaxHcalElectronEndcapHits];   //[HcalElectronEndcapHits_]
   Double_t        HcalElectronEndcapHits_position_x[kMaxHcalElectronEndcapHits];   //[HcalElectronEndcapHits_]
   Double_t        HcalElectronEndcapHits_position_y[kMaxHcalElectronEndcapHits];   //[HcalElectronEndcapHits_]
   Double_t        HcalElectronEndcapHits_position_z[kMaxHcalElectronEndcapHits];   //[HcalElectronEndcapHits_]
   Double_t        HcalElectronEndcapHits_position_t[kMaxHcalElectronEndcapHits];   //[HcalElectronEndcapHits_]
   Int_t           HcalElectronEndcapHits_truth_trackID[kMaxHcalElectronEndcapHits];   //[HcalElectronEndcapHits_]
   Int_t           HcalElectronEndcapHits_truth_pdgID[kMaxHcalElectronEndcapHits];   //[HcalElectronEndcapHits_]
   Double_t        HcalElectronEndcapHits_truth_deposit[kMaxHcalElectronEndcapHits];   //[HcalElectronEndcapHits_]
   Double_t        HcalElectronEndcapHits_truth_time[kMaxHcalElectronEndcapHits];   //[HcalElectronEndcapHits_]
   Double_t        HcalElectronEndcapHits_truth_length[kMaxHcalElectronEndcapHits];   //[HcalElectronEndcapHits_]
   Double_t        HcalElectronEndcapHits_truth_x[kMaxHcalElectronEndcapHits];   //[HcalElectronEndcapHits_]
   Double_t        HcalElectronEndcapHits_truth_y[kMaxHcalElectronEndcapHits];   //[HcalElectronEndcapHits_]
   Double_t        HcalElectronEndcapHits_truth_z[kMaxHcalElectronEndcapHits];   //[HcalElectronEndcapHits_]
   Double_t        HcalElectronEndcapHits_energyDeposit[kMaxHcalElectronEndcapHits];   //[HcalElectronEndcapHits_]
   Int_t           B0TrackerHits_;
   Long64_t        B0TrackerHits_cellID[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Long_t          B0TrackerHits_flag[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Long_t          B0TrackerHits_g4ID[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Double_t        B0TrackerHits_position_x[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Double_t        B0TrackerHits_position_y[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Double_t        B0TrackerHits_position_z[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Double_t        B0TrackerHits_position_t[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Double_t        B0TrackerHits_momentum_x[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Double_t        B0TrackerHits_momentum_y[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Double_t        B0TrackerHits_momentum_z[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Double_t        B0TrackerHits_momentum_t[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Double_t        B0TrackerHits_length[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Int_t           B0TrackerHits_truth_trackID[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Int_t           B0TrackerHits_truth_pdgID[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Double_t        B0TrackerHits_truth_deposit[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Double_t        B0TrackerHits_truth_time[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Double_t        B0TrackerHits_truth_length[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Double_t        B0TrackerHits_truth_x[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Double_t        B0TrackerHits_truth_y[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Double_t        B0TrackerHits_truth_z[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Double_t        B0TrackerHits_energyDeposit[kMaxB0TrackerHits];   //[B0TrackerHits_]
   Int_t           B0PreshowerHits_;
   Long64_t        B0PreshowerHits_cellID[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Long_t          B0PreshowerHits_flag[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Long_t          B0PreshowerHits_g4ID[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Double_t        B0PreshowerHits_position_x[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Double_t        B0PreshowerHits_position_y[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Double_t        B0PreshowerHits_position_z[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Double_t        B0PreshowerHits_position_t[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Double_t        B0PreshowerHits_momentum_x[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Double_t        B0PreshowerHits_momentum_y[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Double_t        B0PreshowerHits_momentum_z[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Double_t        B0PreshowerHits_momentum_t[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Double_t        B0PreshowerHits_length[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Int_t           B0PreshowerHits_truth_trackID[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Int_t           B0PreshowerHits_truth_pdgID[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Double_t        B0PreshowerHits_truth_deposit[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Double_t        B0PreshowerHits_truth_time[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Double_t        B0PreshowerHits_truth_length[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Double_t        B0PreshowerHits_truth_x[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Double_t        B0PreshowerHits_truth_y[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Double_t        B0PreshowerHits_truth_z[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Double_t        B0PreshowerHits_energyDeposit[kMaxB0PreshowerHits];   //[B0PreshowerHits_]
   Int_t           ffiZDCSiHits_;
   Long64_t        ffiZDCSiHits_cellID[kMaxffiZDCSiHits];   //[ffiZDCSiHits_]
   Long_t          ffiZDCSiHits_flag[kMaxffiZDCSiHits];   //[ffiZDCSiHits_]
   Long_t          ffiZDCSiHits_g4ID[kMaxffiZDCSiHits];   //[ffiZDCSiHits_]
   Double_t        ffiZDCSiHits_position_x[kMaxffiZDCSiHits];   //[ffiZDCSiHits_]
   Double_t        ffiZDCSiHits_position_y[kMaxffiZDCSiHits];   //[ffiZDCSiHits_]
   Double_t        ffiZDCSiHits_position_z[kMaxffiZDCSiHits];   //[ffiZDCSiHits_]
   Double_t        ffiZDCSiHits_position_t[kMaxffiZDCSiHits];   //[ffiZDCSiHits_]
   Int_t           ffiZDCSiHits_truth_trackID[kMaxffiZDCSiHits];   //[ffiZDCSiHits_]
   Int_t           ffiZDCSiHits_truth_pdgID[kMaxffiZDCSiHits];   //[ffiZDCSiHits_]
   Double_t        ffiZDCSiHits_truth_deposit[kMaxffiZDCSiHits];   //[ffiZDCSiHits_]
   Double_t        ffiZDCSiHits_truth_time[kMaxffiZDCSiHits];   //[ffiZDCSiHits_]
   Double_t        ffiZDCSiHits_truth_length[kMaxffiZDCSiHits];   //[ffiZDCSiHits_]
   Double_t        ffiZDCSiHits_truth_x[kMaxffiZDCSiHits];   //[ffiZDCSiHits_]
   Double_t        ffiZDCSiHits_truth_y[kMaxffiZDCSiHits];   //[ffiZDCSiHits_]
   Double_t        ffiZDCSiHits_truth_z[kMaxffiZDCSiHits];   //[ffiZDCSiHits_]
   Double_t        ffiZDCSiHits_energyDeposit[kMaxffiZDCSiHits];   //[ffiZDCSiHits_]
   Int_t           ffiZDCPbWO4Hits_;
   Long64_t        ffiZDCPbWO4Hits_cellID[kMaxffiZDCPbWO4Hits];   //[ffiZDCPbWO4Hits_]
   Long_t          ffiZDCPbWO4Hits_flag[kMaxffiZDCPbWO4Hits];   //[ffiZDCPbWO4Hits_]
   Long_t          ffiZDCPbWO4Hits_g4ID[kMaxffiZDCPbWO4Hits];   //[ffiZDCPbWO4Hits_]
   Double_t        ffiZDCPbWO4Hits_position_x[kMaxffiZDCPbWO4Hits];   //[ffiZDCPbWO4Hits_]
   Double_t        ffiZDCPbWO4Hits_position_y[kMaxffiZDCPbWO4Hits];   //[ffiZDCPbWO4Hits_]
   Double_t        ffiZDCPbWO4Hits_position_z[kMaxffiZDCPbWO4Hits];   //[ffiZDCPbWO4Hits_]
   Double_t        ffiZDCPbWO4Hits_position_t[kMaxffiZDCPbWO4Hits];   //[ffiZDCPbWO4Hits_]
   Int_t           ffiZDCPbWO4Hits_truth_trackID[kMaxffiZDCPbWO4Hits];   //[ffiZDCPbWO4Hits_]
   Int_t           ffiZDCPbWO4Hits_truth_pdgID[kMaxffiZDCPbWO4Hits];   //[ffiZDCPbWO4Hits_]
   Double_t        ffiZDCPbWO4Hits_truth_deposit[kMaxffiZDCPbWO4Hits];   //[ffiZDCPbWO4Hits_]
   Double_t        ffiZDCPbWO4Hits_truth_time[kMaxffiZDCPbWO4Hits];   //[ffiZDCPbWO4Hits_]
   Double_t        ffiZDCPbWO4Hits_truth_length[kMaxffiZDCPbWO4Hits];   //[ffiZDCPbWO4Hits_]
   Double_t        ffiZDCPbWO4Hits_truth_x[kMaxffiZDCPbWO4Hits];   //[ffiZDCPbWO4Hits_]
   Double_t        ffiZDCPbWO4Hits_truth_y[kMaxffiZDCPbWO4Hits];   //[ffiZDCPbWO4Hits_]
   Double_t        ffiZDCPbWO4Hits_truth_z[kMaxffiZDCPbWO4Hits];   //[ffiZDCPbWO4Hits_]
   Double_t        ffiZDCPbWO4Hits_energyDeposit[kMaxffiZDCPbWO4Hits];   //[ffiZDCPbWO4Hits_]
   Int_t           ForwardRomanPotHits_;
   Long64_t        ForwardRomanPotHits_cellID[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Long_t          ForwardRomanPotHits_flag[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Long_t          ForwardRomanPotHits_g4ID[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Double_t        ForwardRomanPotHits_position_x[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Double_t        ForwardRomanPotHits_position_y[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Double_t        ForwardRomanPotHits_position_z[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Double_t        ForwardRomanPotHits_position_t[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Double_t        ForwardRomanPotHits_momentum_x[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Double_t        ForwardRomanPotHits_momentum_y[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Double_t        ForwardRomanPotHits_momentum_z[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Double_t        ForwardRomanPotHits_momentum_t[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Double_t        ForwardRomanPotHits_length[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Int_t           ForwardRomanPotHits_truth_trackID[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Int_t           ForwardRomanPotHits_truth_pdgID[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Double_t        ForwardRomanPotHits_truth_deposit[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Double_t        ForwardRomanPotHits_truth_time[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Double_t        ForwardRomanPotHits_truth_length[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Double_t        ForwardRomanPotHits_truth_x[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Double_t        ForwardRomanPotHits_truth_y[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Double_t        ForwardRomanPotHits_truth_z[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Double_t        ForwardRomanPotHits_energyDeposit[kMaxForwardRomanPotHits];   //[ForwardRomanPotHits_]
   Int_t           ffiZDCSiWHits_;
   Long64_t        ffiZDCSiWHits_cellID[kMaxffiZDCSiWHits];   //[ffiZDCSiWHits_]
   Long_t          ffiZDCSiWHits_flag[kMaxffiZDCSiWHits];   //[ffiZDCSiWHits_]
   Long_t          ffiZDCSiWHits_g4ID[kMaxffiZDCSiWHits];   //[ffiZDCSiWHits_]
   Double_t        ffiZDCSiWHits_position_x[kMaxffiZDCSiWHits];   //[ffiZDCSiWHits_]
   Double_t        ffiZDCSiWHits_position_y[kMaxffiZDCSiWHits];   //[ffiZDCSiWHits_]
   Double_t        ffiZDCSiWHits_position_z[kMaxffiZDCSiWHits];   //[ffiZDCSiWHits_]
   Double_t        ffiZDCSiWHits_position_t[kMaxffiZDCSiWHits];   //[ffiZDCSiWHits_]
   Int_t           ffiZDCSiWHits_truth_trackID[kMaxffiZDCSiWHits];   //[ffiZDCSiWHits_]
   Int_t           ffiZDCSiWHits_truth_pdgID[kMaxffiZDCSiWHits];   //[ffiZDCSiWHits_]
   Double_t        ffiZDCSiWHits_truth_deposit[kMaxffiZDCSiWHits];   //[ffiZDCSiWHits_]
   Double_t        ffiZDCSiWHits_truth_time[kMaxffiZDCSiWHits];   //[ffiZDCSiWHits_]
   Double_t        ffiZDCSiWHits_truth_length[kMaxffiZDCSiWHits];   //[ffiZDCSiWHits_]
   Double_t        ffiZDCSiWHits_truth_x[kMaxffiZDCSiWHits];   //[ffiZDCSiWHits_]
   Double_t        ffiZDCSiWHits_truth_y[kMaxffiZDCSiWHits];   //[ffiZDCSiWHits_]
   Double_t        ffiZDCSiWHits_truth_z[kMaxffiZDCSiWHits];   //[ffiZDCSiWHits_]
   Double_t        ffiZDCSiWHits_energyDeposit[kMaxffiZDCSiWHits];   //[ffiZDCSiWHits_]
   Int_t           ffiZDCSiPbHits_;
   Long64_t        ffiZDCSiPbHits_cellID[kMaxffiZDCSiPbHits];   //[ffiZDCSiPbHits_]
   Long_t          ffiZDCSiPbHits_flag[kMaxffiZDCSiPbHits];   //[ffiZDCSiPbHits_]
   Long_t          ffiZDCSiPbHits_g4ID[kMaxffiZDCSiPbHits];   //[ffiZDCSiPbHits_]
   Double_t        ffiZDCSiPbHits_position_x[kMaxffiZDCSiPbHits];   //[ffiZDCSiPbHits_]
   Double_t        ffiZDCSiPbHits_position_y[kMaxffiZDCSiPbHits];   //[ffiZDCSiPbHits_]
   Double_t        ffiZDCSiPbHits_position_z[kMaxffiZDCSiPbHits];   //[ffiZDCSiPbHits_]
   Double_t        ffiZDCSiPbHits_position_t[kMaxffiZDCSiPbHits];   //[ffiZDCSiPbHits_]
   Int_t           ffiZDCSiPbHits_truth_trackID[kMaxffiZDCSiPbHits];   //[ffiZDCSiPbHits_]
   Int_t           ffiZDCSiPbHits_truth_pdgID[kMaxffiZDCSiPbHits];   //[ffiZDCSiPbHits_]
   Double_t        ffiZDCSiPbHits_truth_deposit[kMaxffiZDCSiPbHits];   //[ffiZDCSiPbHits_]
   Double_t        ffiZDCSiPbHits_truth_time[kMaxffiZDCSiPbHits];   //[ffiZDCSiPbHits_]
   Double_t        ffiZDCSiPbHits_truth_length[kMaxffiZDCSiPbHits];   //[ffiZDCSiPbHits_]
   Double_t        ffiZDCSiPbHits_truth_x[kMaxffiZDCSiPbHits];   //[ffiZDCSiPbHits_]
   Double_t        ffiZDCSiPbHits_truth_y[kMaxffiZDCSiPbHits];   //[ffiZDCSiPbHits_]
   Double_t        ffiZDCSiPbHits_truth_z[kMaxffiZDCSiPbHits];   //[ffiZDCSiPbHits_]
   Double_t        ffiZDCSiPbHits_energyDeposit[kMaxffiZDCSiPbHits];   //[ffiZDCSiPbHits_]
   Int_t           ffiZDCScintHits_;
   Long64_t        ffiZDCScintHits_cellID[kMaxffiZDCScintHits];   //[ffiZDCScintHits_]
   Long_t          ffiZDCScintHits_flag[kMaxffiZDCScintHits];   //[ffiZDCScintHits_]
   Long_t          ffiZDCScintHits_g4ID[kMaxffiZDCScintHits];   //[ffiZDCScintHits_]
   Double_t        ffiZDCScintHits_position_x[kMaxffiZDCScintHits];   //[ffiZDCScintHits_]
   Double_t        ffiZDCScintHits_position_y[kMaxffiZDCScintHits];   //[ffiZDCScintHits_]
   Double_t        ffiZDCScintHits_position_z[kMaxffiZDCScintHits];   //[ffiZDCScintHits_]
   Double_t        ffiZDCScintHits_position_t[kMaxffiZDCScintHits];   //[ffiZDCScintHits_]
   Int_t           ffiZDCScintHits_truth_trackID[kMaxffiZDCScintHits];   //[ffiZDCScintHits_]
   Int_t           ffiZDCScintHits_truth_pdgID[kMaxffiZDCScintHits];   //[ffiZDCScintHits_]
   Double_t        ffiZDCScintHits_truth_deposit[kMaxffiZDCScintHits];   //[ffiZDCScintHits_]
   Double_t        ffiZDCScintHits_truth_time[kMaxffiZDCScintHits];   //[ffiZDCScintHits_]
   Double_t        ffiZDCScintHits_truth_length[kMaxffiZDCScintHits];   //[ffiZDCScintHits_]
   Double_t        ffiZDCScintHits_truth_x[kMaxffiZDCScintHits];   //[ffiZDCScintHits_]
   Double_t        ffiZDCScintHits_truth_y[kMaxffiZDCScintHits];   //[ffiZDCScintHits_]
   Double_t        ffiZDCScintHits_truth_z[kMaxffiZDCScintHits];   //[ffiZDCScintHits_]
   Double_t        ffiZDCScintHits_energyDeposit[kMaxffiZDCScintHits];   //[ffiZDCScintHits_]

   // List of branches
   TBranch        *b_mcparticles_;   //!
   TBranch        *b_mcparticles_ID;   //!
   TBranch        *b_mcparticles_g4Parent;   //!
   TBranch        *b_mcparticles_reason;   //!
   TBranch        *b_mcparticles_mask;   //!
   TBranch        *b_mcparticles_steps;   //!
   TBranch        *b_mcparticles_secondaries;   //!
   TBranch        *b_mcparticles_pdgID;   //!
   TBranch        *b_mcparticles_status;   //!
   TBranch        *b_mcparticles_colorFlow;   //!
   TBranch        *b_mcparticles_genStatus;   //!
   TBranch        *b_mcparticles_charge;   //!
   TBranch        *b_mcparticles_spare;   //!
   TBranch        *b_mcparticles_spin;   //!
   TBranch        *b_mcparticles_vsx;   //!
   TBranch        *b_mcparticles_vsy;   //!
   TBranch        *b_mcparticles_vsz;   //!
   TBranch        *b_mcparticles_vex;   //!
   TBranch        *b_mcparticles_vey;   //!
   TBranch        *b_mcparticles_vez;   //!
   TBranch        *b_mcparticles_psx;   //!
   TBranch        *b_mcparticles_psy;   //!
   TBranch        *b_mcparticles_psz;   //!
   TBranch        *b_mcparticles_pex;   //!
   TBranch        *b_mcparticles_pey;   //!
   TBranch        *b_mcparticles_pez;   //!
   TBranch        *b_mcparticles_mass;   //!
   TBranch        *b_mcparticles_time;   //!
   TBranch        *b_mcparticles_properTime;   //!
   TBranch        *b_mcparticles_parents_begin;   //!
   TBranch        *b_mcparticles_parents_end;   //!
   TBranch        *b_mcparticles_daughters_begin;   //!
   TBranch        *b_mcparticles_daughters_end;   //!
   TBranch        *b_mcparticles_0;   //!
   TBranch        *b_mcparticles_1;   //!
   TBranch        *b_EcalEndcapPHits_;   //!
   TBranch        *b_EcalEndcapPHits_cellID;   //!
   TBranch        *b_EcalEndcapPHits_flag;   //!
   TBranch        *b_EcalEndcapPHits_g4ID;   //!
   TBranch        *b_EcalEndcapPHits_position_x;   //!
   TBranch        *b_EcalEndcapPHits_position_y;   //!
   TBranch        *b_EcalEndcapPHits_position_z;   //!
   TBranch        *b_EcalEndcapPHits_position_t;   //!
   TBranch        *b_EcalEndcapPHits_truth_trackID;   //!
   TBranch        *b_EcalEndcapPHits_truth_pdgID;   //!
   TBranch        *b_EcalEndcapPHits_truth_deposit;   //!
   TBranch        *b_EcalEndcapPHits_truth_time;   //!
   TBranch        *b_EcalEndcapPHits_truth_length;   //!
   TBranch        *b_EcalEndcapPHits_truth_x;   //!
   TBranch        *b_EcalEndcapPHits_truth_y;   //!
   TBranch        *b_EcalEndcapPHits_truth_z;   //!
   TBranch        *b_EcalEndcapPHits_energyDeposit;   //!
   TBranch        *b_BarrelTOFHits_;   //!
   TBranch        *b_BarrelTOFHits_cellID;   //!
   TBranch        *b_BarrelTOFHits_flag;   //!
   TBranch        *b_BarrelTOFHits_g4ID;   //!
   TBranch        *b_BarrelTOFHits_position_x;   //!
   TBranch        *b_BarrelTOFHits_position_y;   //!
   TBranch        *b_BarrelTOFHits_position_z;   //!
   TBranch        *b_BarrelTOFHits_position_t;   //!
   TBranch        *b_BarrelTOFHits_momentum_x;   //!
   TBranch        *b_BarrelTOFHits_momentum_y;   //!
   TBranch        *b_BarrelTOFHits_momentum_z;   //!
   TBranch        *b_BarrelTOFHits_momentum_t;   //!
   TBranch        *b_BarrelTOFHits_length;   //!
   TBranch        *b_BarrelTOFHits_truth_trackID;   //!
   TBranch        *b_BarrelTOFHits_truth_pdgID;   //!
   TBranch        *b_BarrelTOFHits_truth_deposit;   //!
   TBranch        *b_BarrelTOFHits_truth_time;   //!
   TBranch        *b_BarrelTOFHits_truth_length;   //!
   TBranch        *b_BarrelTOFHits_truth_x;   //!
   TBranch        *b_BarrelTOFHits_truth_y;   //!
   TBranch        *b_BarrelTOFHits_truth_z;   //!
   TBranch        *b_BarrelTOFHits_energyDeposit;   //!
   TBranch        *b_VertexBarrelHits_;   //!
   TBranch        *b_VertexBarrelHits_cellID;   //!
   TBranch        *b_VertexBarrelHits_flag;   //!
   TBranch        *b_VertexBarrelHits_g4ID;   //!
   TBranch        *b_VertexBarrelHits_position_x;   //!
   TBranch        *b_VertexBarrelHits_position_y;   //!
   TBranch        *b_VertexBarrelHits_position_z;   //!
   TBranch        *b_VertexBarrelHits_position_t;   //!
   TBranch        *b_VertexBarrelHits_momentum_x;   //!
   TBranch        *b_VertexBarrelHits_momentum_y;   //!
   TBranch        *b_VertexBarrelHits_momentum_z;   //!
   TBranch        *b_VertexBarrelHits_momentum_t;   //!
   TBranch        *b_VertexBarrelHits_length;   //!
   TBranch        *b_VertexBarrelHits_truth_trackID;   //!
   TBranch        *b_VertexBarrelHits_truth_pdgID;   //!
   TBranch        *b_VertexBarrelHits_truth_deposit;   //!
   TBranch        *b_VertexBarrelHits_truth_time;   //!
   TBranch        *b_VertexBarrelHits_truth_length;   //!
   TBranch        *b_VertexBarrelHits_truth_x;   //!
   TBranch        *b_VertexBarrelHits_truth_y;   //!
   TBranch        *b_VertexBarrelHits_truth_z;   //!
   TBranch        *b_VertexBarrelHits_energyDeposit;   //!
   TBranch        *b_VertexEndcapHits_;   //!
   TBranch        *b_VertexEndcapHits_cellID;   //!
   TBranch        *b_VertexEndcapHits_flag;   //!
   TBranch        *b_VertexEndcapHits_g4ID;   //!
   TBranch        *b_VertexEndcapHits_position_x;   //!
   TBranch        *b_VertexEndcapHits_position_y;   //!
   TBranch        *b_VertexEndcapHits_position_z;   //!
   TBranch        *b_VertexEndcapHits_position_t;   //!
   TBranch        *b_VertexEndcapHits_momentum_x;   //!
   TBranch        *b_VertexEndcapHits_momentum_y;   //!
   TBranch        *b_VertexEndcapHits_momentum_z;   //!
   TBranch        *b_VertexEndcapHits_momentum_t;   //!
   TBranch        *b_VertexEndcapHits_length;   //!
   TBranch        *b_VertexEndcapHits_truth_trackID;   //!
   TBranch        *b_VertexEndcapHits_truth_pdgID;   //!
   TBranch        *b_VertexEndcapHits_truth_deposit;   //!
   TBranch        *b_VertexEndcapHits_truth_time;   //!
   TBranch        *b_VertexEndcapHits_truth_length;   //!
   TBranch        *b_VertexEndcapHits_truth_x;   //!
   TBranch        *b_VertexEndcapHits_truth_y;   //!
   TBranch        *b_VertexEndcapHits_truth_z;   //!
   TBranch        *b_VertexEndcapHits_energyDeposit;   //!
   TBranch        *b_TrackerBarrelHits_;   //!
   TBranch        *b_TrackerBarrelHits_cellID;   //!
   TBranch        *b_TrackerBarrelHits_flag;   //!
   TBranch        *b_TrackerBarrelHits_g4ID;   //!
   TBranch        *b_TrackerBarrelHits_position_x;   //!
   TBranch        *b_TrackerBarrelHits_position_y;   //!
   TBranch        *b_TrackerBarrelHits_position_z;   //!
   TBranch        *b_TrackerBarrelHits_position_t;   //!
   TBranch        *b_TrackerBarrelHits_momentum_x;   //!
   TBranch        *b_TrackerBarrelHits_momentum_y;   //!
   TBranch        *b_TrackerBarrelHits_momentum_z;   //!
   TBranch        *b_TrackerBarrelHits_momentum_t;   //!
   TBranch        *b_TrackerBarrelHits_length;   //!
   TBranch        *b_TrackerBarrelHits_truth_trackID;   //!
   TBranch        *b_TrackerBarrelHits_truth_pdgID;   //!
   TBranch        *b_TrackerBarrelHits_truth_deposit;   //!
   TBranch        *b_TrackerBarrelHits_truth_time;   //!
   TBranch        *b_TrackerBarrelHits_truth_length;   //!
   TBranch        *b_TrackerBarrelHits_truth_x;   //!
   TBranch        *b_TrackerBarrelHits_truth_y;   //!
   TBranch        *b_TrackerBarrelHits_truth_z;   //!
   TBranch        *b_TrackerBarrelHits_energyDeposit;   //!
   TBranch        *b_TrackerEndcapHits_;   //!
   TBranch        *b_TrackerEndcapHits_cellID;   //!
   TBranch        *b_TrackerEndcapHits_flag;   //!
   TBranch        *b_TrackerEndcapHits_g4ID;   //!
   TBranch        *b_TrackerEndcapHits_position_x;   //!
   TBranch        *b_TrackerEndcapHits_position_y;   //!
   TBranch        *b_TrackerEndcapHits_position_z;   //!
   TBranch        *b_TrackerEndcapHits_position_t;   //!
   TBranch        *b_TrackerEndcapHits_momentum_x;   //!
   TBranch        *b_TrackerEndcapHits_momentum_y;   //!
   TBranch        *b_TrackerEndcapHits_momentum_z;   //!
   TBranch        *b_TrackerEndcapHits_momentum_t;   //!
   TBranch        *b_TrackerEndcapHits_length;   //!
   TBranch        *b_TrackerEndcapHits_truth_trackID;   //!
   TBranch        *b_TrackerEndcapHits_truth_pdgID;   //!
   TBranch        *b_TrackerEndcapHits_truth_deposit;   //!
   TBranch        *b_TrackerEndcapHits_truth_time;   //!
   TBranch        *b_TrackerEndcapHits_truth_length;   //!
   TBranch        *b_TrackerEndcapHits_truth_x;   //!
   TBranch        *b_TrackerEndcapHits_truth_y;   //!
   TBranch        *b_TrackerEndcapHits_truth_z;   //!
   TBranch        *b_TrackerEndcapHits_energyDeposit;   //!
   TBranch        *b_ForwardTRDHits_;   //!
   TBranch        *b_ForwardTRDHits_cellID;   //!
   TBranch        *b_ForwardTRDHits_flag;   //!
   TBranch        *b_ForwardTRDHits_g4ID;   //!
   TBranch        *b_ForwardTRDHits_position_x;   //!
   TBranch        *b_ForwardTRDHits_position_y;   //!
   TBranch        *b_ForwardTRDHits_position_z;   //!
   TBranch        *b_ForwardTRDHits_position_t;   //!
   TBranch        *b_ForwardTRDHits_momentum_x;   //!
   TBranch        *b_ForwardTRDHits_momentum_y;   //!
   TBranch        *b_ForwardTRDHits_momentum_z;   //!
   TBranch        *b_ForwardTRDHits_momentum_t;   //!
   TBranch        *b_ForwardTRDHits_length;   //!
   TBranch        *b_ForwardTRDHits_truth_trackID;   //!
   TBranch        *b_ForwardTRDHits_truth_pdgID;   //!
   TBranch        *b_ForwardTRDHits_truth_deposit;   //!
   TBranch        *b_ForwardTRDHits_truth_time;   //!
   TBranch        *b_ForwardTRDHits_truth_length;   //!
   TBranch        *b_ForwardTRDHits_truth_x;   //!
   TBranch        *b_ForwardTRDHits_truth_y;   //!
   TBranch        *b_ForwardTRDHits_truth_z;   //!
   TBranch        *b_ForwardTRDHits_energyDeposit;   //!
   TBranch        *b_DRICHHits_;   //!
   TBranch        *b_DRICHHits_cellID;   //!
   TBranch        *b_DRICHHits_flag;   //!
   TBranch        *b_DRICHHits_g4ID;   //!
   TBranch        *b_DRICHHits_position_x;   //!
   TBranch        *b_DRICHHits_position_y;   //!
   TBranch        *b_DRICHHits_position_z;   //!
   TBranch        *b_DRICHHits_position_t;   //!
   TBranch        *b_DRICHHits_momentum_x;   //!
   TBranch        *b_DRICHHits_momentum_y;   //!
   TBranch        *b_DRICHHits_momentum_z;   //!
   TBranch        *b_DRICHHits_momentum_t;   //!
   TBranch        *b_DRICHHits_length;   //!
   TBranch        *b_DRICHHits_truth_trackID;   //!
   TBranch        *b_DRICHHits_truth_pdgID;   //!
   TBranch        *b_DRICHHits_truth_deposit;   //!
   TBranch        *b_DRICHHits_truth_time;   //!
   TBranch        *b_DRICHHits_truth_length;   //!
   TBranch        *b_DRICHHits_truth_x;   //!
   TBranch        *b_DRICHHits_truth_y;   //!
   TBranch        *b_DRICHHits_truth_z;   //!
   TBranch        *b_DRICHHits_energy;   //!
   TBranch        *b_HcalBarrelHits_;   //!
   TBranch        *b_HcalBarrelHits_cellID;   //!
   TBranch        *b_HcalBarrelHits_flag;   //!
   TBranch        *b_HcalBarrelHits_g4ID;   //!
   TBranch        *b_HcalBarrelHits_position_x;   //!
   TBranch        *b_HcalBarrelHits_position_y;   //!
   TBranch        *b_HcalBarrelHits_position_z;   //!
   TBranch        *b_HcalBarrelHits_position_t;   //!
   TBranch        *b_HcalBarrelHits_truth_trackID;   //!
   TBranch        *b_HcalBarrelHits_truth_pdgID;   //!
   TBranch        *b_HcalBarrelHits_truth_deposit;   //!
   TBranch        *b_HcalBarrelHits_truth_time;   //!
   TBranch        *b_HcalBarrelHits_truth_length;   //!
   TBranch        *b_HcalBarrelHits_truth_x;   //!
   TBranch        *b_HcalBarrelHits_truth_y;   //!
   TBranch        *b_HcalBarrelHits_truth_z;   //!
   TBranch        *b_HcalBarrelHits_energyDeposit;   //!
   TBranch        *b_TOFEndcapHits_;   //!
   TBranch        *b_TOFEndcapHits_cellID;   //!
   TBranch        *b_TOFEndcapHits_flag;   //!
   TBranch        *b_TOFEndcapHits_g4ID;   //!
   TBranch        *b_TOFEndcapHits_position_x;   //!
   TBranch        *b_TOFEndcapHits_position_y;   //!
   TBranch        *b_TOFEndcapHits_position_z;   //!
   TBranch        *b_TOFEndcapHits_position_t;   //!
   TBranch        *b_TOFEndcapHits_momentum_x;   //!
   TBranch        *b_TOFEndcapHits_momentum_y;   //!
   TBranch        *b_TOFEndcapHits_momentum_z;   //!
   TBranch        *b_TOFEndcapHits_momentum_t;   //!
   TBranch        *b_TOFEndcapHits_length;   //!
   TBranch        *b_TOFEndcapHits_truth_trackID;   //!
   TBranch        *b_TOFEndcapHits_truth_pdgID;   //!
   TBranch        *b_TOFEndcapHits_truth_deposit;   //!
   TBranch        *b_TOFEndcapHits_truth_time;   //!
   TBranch        *b_TOFEndcapHits_truth_length;   //!
   TBranch        *b_TOFEndcapHits_truth_x;   //!
   TBranch        *b_TOFEndcapHits_truth_y;   //!
   TBranch        *b_TOFEndcapHits_truth_z;   //!
   TBranch        *b_TOFEndcapHits_energyDeposit;   //!
   TBranch        *b_EcalEndcapNHits_;   //!
   TBranch        *b_EcalEndcapNHits_cellID;   //!
   TBranch        *b_EcalEndcapNHits_flag;   //!
   TBranch        *b_EcalEndcapNHits_g4ID;   //!
   TBranch        *b_EcalEndcapNHits_position_x;   //!
   TBranch        *b_EcalEndcapNHits_position_y;   //!
   TBranch        *b_EcalEndcapNHits_position_z;   //!
   TBranch        *b_EcalEndcapNHits_position_t;   //!
   TBranch        *b_EcalEndcapNHits_truth_trackID;   //!
   TBranch        *b_EcalEndcapNHits_truth_pdgID;   //!
   TBranch        *b_EcalEndcapNHits_truth_deposit;   //!
   TBranch        *b_EcalEndcapNHits_truth_time;   //!
   TBranch        *b_EcalEndcapNHits_truth_length;   //!
   TBranch        *b_EcalEndcapNHits_truth_x;   //!
   TBranch        *b_EcalEndcapNHits_truth_y;   //!
   TBranch        *b_EcalEndcapNHits_truth_z;   //!
   TBranch        *b_EcalEndcapNHits_energyDeposit;   //!
   TBranch        *b_EcalBarrelHits_;   //!
   TBranch        *b_EcalBarrelHits_cellID;   //!
   TBranch        *b_EcalBarrelHits_flag;   //!
   TBranch        *b_EcalBarrelHits_g4ID;   //!
   TBranch        *b_EcalBarrelHits_position_x;   //!
   TBranch        *b_EcalBarrelHits_position_y;   //!
   TBranch        *b_EcalBarrelHits_position_z;   //!
   TBranch        *b_EcalBarrelHits_position_t;   //!
   TBranch        *b_EcalBarrelHits_truth_trackID;   //!
   TBranch        *b_EcalBarrelHits_truth_pdgID;   //!
   TBranch        *b_EcalBarrelHits_truth_deposit;   //!
   TBranch        *b_EcalBarrelHits_truth_time;   //!
   TBranch        *b_EcalBarrelHits_truth_length;   //!
   TBranch        *b_EcalBarrelHits_truth_x;   //!
   TBranch        *b_EcalBarrelHits_truth_y;   //!
   TBranch        *b_EcalBarrelHits_truth_z;   //!
   TBranch        *b_EcalBarrelHits_energyDeposit;   //!
   TBranch        *b_EcalBarrelScFiHits_;   //!
   TBranch        *b_EcalBarrelScFiHits_cellID;   //!
   TBranch        *b_EcalBarrelScFiHits_flag;   //!
   TBranch        *b_EcalBarrelScFiHits_g4ID;   //!
   TBranch        *b_EcalBarrelScFiHits_position_x;   //!
   TBranch        *b_EcalBarrelScFiHits_position_y;   //!
   TBranch        *b_EcalBarrelScFiHits_position_z;   //!
   TBranch        *b_EcalBarrelScFiHits_position_t;   //!
   TBranch        *b_EcalBarrelScFiHits_truth_trackID;   //!
   TBranch        *b_EcalBarrelScFiHits_truth_pdgID;   //!
   TBranch        *b_EcalBarrelScFiHits_truth_deposit;   //!
   TBranch        *b_EcalBarrelScFiHits_truth_time;   //!
   TBranch        *b_EcalBarrelScFiHits_truth_length;   //!
   TBranch        *b_EcalBarrelScFiHits_truth_x;   //!
   TBranch        *b_EcalBarrelScFiHits_truth_y;   //!
   TBranch        *b_EcalBarrelScFiHits_truth_z;   //!
   TBranch        *b_EcalBarrelScFiHits_energyDeposit;   //!
   TBranch        *b_HcalHadronEndcapHits_;   //!
   TBranch        *b_HcalHadronEndcapHits_cellID;   //!
   TBranch        *b_HcalHadronEndcapHits_flag;   //!
   TBranch        *b_HcalHadronEndcapHits_g4ID;   //!
   TBranch        *b_HcalHadronEndcapHits_position_x;   //!
   TBranch        *b_HcalHadronEndcapHits_position_y;   //!
   TBranch        *b_HcalHadronEndcapHits_position_z;   //!
   TBranch        *b_HcalHadronEndcapHits_position_t;   //!
   TBranch        *b_HcalHadronEndcapHits_truth_trackID;   //!
   TBranch        *b_HcalHadronEndcapHits_truth_pdgID;   //!
   TBranch        *b_HcalHadronEndcapHits_truth_deposit;   //!
   TBranch        *b_HcalHadronEndcapHits_truth_time;   //!
   TBranch        *b_HcalHadronEndcapHits_truth_length;   //!
   TBranch        *b_HcalHadronEndcapHits_truth_x;   //!
   TBranch        *b_HcalHadronEndcapHits_truth_y;   //!
   TBranch        *b_HcalHadronEndcapHits_truth_z;   //!
   TBranch        *b_HcalHadronEndcapHits_energyDeposit;   //!
   TBranch        *b_ForwardOffMTrackerHits_;   //!
   TBranch        *b_ForwardOffMTrackerHits_cellID;   //!
   TBranch        *b_ForwardOffMTrackerHits_flag;   //!
   TBranch        *b_ForwardOffMTrackerHits_g4ID;   //!
   TBranch        *b_ForwardOffMTrackerHits_position_x;   //!
   TBranch        *b_ForwardOffMTrackerHits_position_y;   //!
   TBranch        *b_ForwardOffMTrackerHits_position_z;   //!
   TBranch        *b_ForwardOffMTrackerHits_position_t;   //!
   TBranch        *b_ForwardOffMTrackerHits_momentum_x;   //!
   TBranch        *b_ForwardOffMTrackerHits_momentum_y;   //!
   TBranch        *b_ForwardOffMTrackerHits_momentum_z;   //!
   TBranch        *b_ForwardOffMTrackerHits_momentum_t;   //!
   TBranch        *b_ForwardOffMTrackerHits_length;   //!
   TBranch        *b_ForwardOffMTrackerHits_truth_trackID;   //!
   TBranch        *b_ForwardOffMTrackerHits_truth_pdgID;   //!
   TBranch        *b_ForwardOffMTrackerHits_truth_deposit;   //!
   TBranch        *b_ForwardOffMTrackerHits_truth_time;   //!
   TBranch        *b_ForwardOffMTrackerHits_truth_length;   //!
   TBranch        *b_ForwardOffMTrackerHits_truth_x;   //!
   TBranch        *b_ForwardOffMTrackerHits_truth_y;   //!
   TBranch        *b_ForwardOffMTrackerHits_truth_z;   //!
   TBranch        *b_ForwardOffMTrackerHits_energyDeposit;   //!
   TBranch        *b_HcalElectronEndcapHits_;   //!
   TBranch        *b_HcalElectronEndcapHits_cellID;   //!
   TBranch        *b_HcalElectronEndcapHits_flag;   //!
   TBranch        *b_HcalElectronEndcapHits_g4ID;   //!
   TBranch        *b_HcalElectronEndcapHits_position_x;   //!
   TBranch        *b_HcalElectronEndcapHits_position_y;   //!
   TBranch        *b_HcalElectronEndcapHits_position_z;   //!
   TBranch        *b_HcalElectronEndcapHits_position_t;   //!
   TBranch        *b_HcalElectronEndcapHits_truth_trackID;   //!
   TBranch        *b_HcalElectronEndcapHits_truth_pdgID;   //!
   TBranch        *b_HcalElectronEndcapHits_truth_deposit;   //!
   TBranch        *b_HcalElectronEndcapHits_truth_time;   //!
   TBranch        *b_HcalElectronEndcapHits_truth_length;   //!
   TBranch        *b_HcalElectronEndcapHits_truth_x;   //!
   TBranch        *b_HcalElectronEndcapHits_truth_y;   //!
   TBranch        *b_HcalElectronEndcapHits_truth_z;   //!
   TBranch        *b_HcalElectronEndcapHits_energyDeposit;   //!
   TBranch        *b_B0TrackerHits_;   //!
   TBranch        *b_B0TrackerHits_cellID;   //!
   TBranch        *b_B0TrackerHits_flag;   //!
   TBranch        *b_B0TrackerHits_g4ID;   //!
   TBranch        *b_B0TrackerHits_position_x;   //!
   TBranch        *b_B0TrackerHits_position_y;   //!
   TBranch        *b_B0TrackerHits_position_z;   //!
   TBranch        *b_B0TrackerHits_position_t;   //!
   TBranch        *b_B0TrackerHits_momentum_x;   //!
   TBranch        *b_B0TrackerHits_momentum_y;   //!
   TBranch        *b_B0TrackerHits_momentum_z;   //!
   TBranch        *b_B0TrackerHits_momentum_t;   //!
   TBranch        *b_B0TrackerHits_length;   //!
   TBranch        *b_B0TrackerHits_truth_trackID;   //!
   TBranch        *b_B0TrackerHits_truth_pdgID;   //!
   TBranch        *b_B0TrackerHits_truth_deposit;   //!
   TBranch        *b_B0TrackerHits_truth_time;   //!
   TBranch        *b_B0TrackerHits_truth_length;   //!
   TBranch        *b_B0TrackerHits_truth_x;   //!
   TBranch        *b_B0TrackerHits_truth_y;   //!
   TBranch        *b_B0TrackerHits_truth_z;   //!
   TBranch        *b_B0TrackerHits_energyDeposit;   //!
   TBranch        *b_B0PreshowerHits_;   //!
   TBranch        *b_B0PreshowerHits_cellID;   //!
   TBranch        *b_B0PreshowerHits_flag;   //!
   TBranch        *b_B0PreshowerHits_g4ID;   //!
   TBranch        *b_B0PreshowerHits_position_x;   //!
   TBranch        *b_B0PreshowerHits_position_y;   //!
   TBranch        *b_B0PreshowerHits_position_z;   //!
   TBranch        *b_B0PreshowerHits_position_t;   //!
   TBranch        *b_B0PreshowerHits_momentum_x;   //!
   TBranch        *b_B0PreshowerHits_momentum_y;   //!
   TBranch        *b_B0PreshowerHits_momentum_z;   //!
   TBranch        *b_B0PreshowerHits_momentum_t;   //!
   TBranch        *b_B0PreshowerHits_length;   //!
   TBranch        *b_B0PreshowerHits_truth_trackID;   //!
   TBranch        *b_B0PreshowerHits_truth_pdgID;   //!
   TBranch        *b_B0PreshowerHits_truth_deposit;   //!
   TBranch        *b_B0PreshowerHits_truth_time;   //!
   TBranch        *b_B0PreshowerHits_truth_length;   //!
   TBranch        *b_B0PreshowerHits_truth_x;   //!
   TBranch        *b_B0PreshowerHits_truth_y;   //!
   TBranch        *b_B0PreshowerHits_truth_z;   //!
   TBranch        *b_B0PreshowerHits_energyDeposit;   //!
   TBranch        *b_ffiZDCSiHits_;   //!
   TBranch        *b_ffiZDCSiHits_cellID;   //!
   TBranch        *b_ffiZDCSiHits_flag;   //!
   TBranch        *b_ffiZDCSiHits_g4ID;   //!
   TBranch        *b_ffiZDCSiHits_position_x;   //!
   TBranch        *b_ffiZDCSiHits_position_y;   //!
   TBranch        *b_ffiZDCSiHits_position_z;   //!
   TBranch        *b_ffiZDCSiHits_position_t;   //!
   TBranch        *b_ffiZDCSiHits_truth_trackID;   //!
   TBranch        *b_ffiZDCSiHits_truth_pdgID;   //!
   TBranch        *b_ffiZDCSiHits_truth_deposit;   //!
   TBranch        *b_ffiZDCSiHits_truth_time;   //!
   TBranch        *b_ffiZDCSiHits_truth_length;   //!
   TBranch        *b_ffiZDCSiHits_truth_x;   //!
   TBranch        *b_ffiZDCSiHits_truth_y;   //!
   TBranch        *b_ffiZDCSiHits_truth_z;   //!
   TBranch        *b_ffiZDCSiHits_energyDeposit;   //!
   TBranch        *b_ffiZDCPbWO4Hits_;   //!
   TBranch        *b_ffiZDCPbWO4Hits_cellID;   //!
   TBranch        *b_ffiZDCPbWO4Hits_flag;   //!
   TBranch        *b_ffiZDCPbWO4Hits_g4ID;   //!
   TBranch        *b_ffiZDCPbWO4Hits_position_x;   //!
   TBranch        *b_ffiZDCPbWO4Hits_position_y;   //!
   TBranch        *b_ffiZDCPbWO4Hits_position_z;   //!
   TBranch        *b_ffiZDCPbWO4Hits_position_t;   //!
   TBranch        *b_ffiZDCPbWO4Hits_truth_trackID;   //!
   TBranch        *b_ffiZDCPbWO4Hits_truth_pdgID;   //!
   TBranch        *b_ffiZDCPbWO4Hits_truth_deposit;   //!
   TBranch        *b_ffiZDCPbWO4Hits_truth_time;   //!
   TBranch        *b_ffiZDCPbWO4Hits_truth_length;   //!
   TBranch        *b_ffiZDCPbWO4Hits_truth_x;   //!
   TBranch        *b_ffiZDCPbWO4Hits_truth_y;   //!
   TBranch        *b_ffiZDCPbWO4Hits_truth_z;   //!
   TBranch        *b_ffiZDCPbWO4Hits_energyDeposit;   //!
   TBranch        *b_ForwardRomanPotHits_;   //!
   TBranch        *b_ForwardRomanPotHits_cellID;   //!
   TBranch        *b_ForwardRomanPotHits_flag;   //!
   TBranch        *b_ForwardRomanPotHits_g4ID;   //!
   TBranch        *b_ForwardRomanPotHits_position_x;   //!
   TBranch        *b_ForwardRomanPotHits_position_y;   //!
   TBranch        *b_ForwardRomanPotHits_position_z;   //!
   TBranch        *b_ForwardRomanPotHits_position_t;   //!
   TBranch        *b_ForwardRomanPotHits_momentum_x;   //!
   TBranch        *b_ForwardRomanPotHits_momentum_y;   //!
   TBranch        *b_ForwardRomanPotHits_momentum_z;   //!
   TBranch        *b_ForwardRomanPotHits_momentum_t;   //!
   TBranch        *b_ForwardRomanPotHits_length;   //!
   TBranch        *b_ForwardRomanPotHits_truth_trackID;   //!
   TBranch        *b_ForwardRomanPotHits_truth_pdgID;   //!
   TBranch        *b_ForwardRomanPotHits_truth_deposit;   //!
   TBranch        *b_ForwardRomanPotHits_truth_time;   //!
   TBranch        *b_ForwardRomanPotHits_truth_length;   //!
   TBranch        *b_ForwardRomanPotHits_truth_x;   //!
   TBranch        *b_ForwardRomanPotHits_truth_y;   //!
   TBranch        *b_ForwardRomanPotHits_truth_z;   //!
   TBranch        *b_ForwardRomanPotHits_energyDeposit;   //!
   TBranch        *b_ffiZDCSiWHits_;   //!
   TBranch        *b_ffiZDCSiWHits_cellID;   //!
   TBranch        *b_ffiZDCSiWHits_flag;   //!
   TBranch        *b_ffiZDCSiWHits_g4ID;   //!
   TBranch        *b_ffiZDCSiWHits_position_x;   //!
   TBranch        *b_ffiZDCSiWHits_position_y;   //!
   TBranch        *b_ffiZDCSiWHits_position_z;   //!
   TBranch        *b_ffiZDCSiWHits_position_t;   //!
   TBranch        *b_ffiZDCSiWHits_truth_trackID;   //!
   TBranch        *b_ffiZDCSiWHits_truth_pdgID;   //!
   TBranch        *b_ffiZDCSiWHits_truth_deposit;   //!
   TBranch        *b_ffiZDCSiWHits_truth_time;   //!
   TBranch        *b_ffiZDCSiWHits_truth_length;   //!
   TBranch        *b_ffiZDCSiWHits_truth_x;   //!
   TBranch        *b_ffiZDCSiWHits_truth_y;   //!
   TBranch        *b_ffiZDCSiWHits_truth_z;   //!
   TBranch        *b_ffiZDCSiWHits_energyDeposit;   //!
   TBranch        *b_ffiZDCSiPbHits_;   //!
   TBranch        *b_ffiZDCSiPbHits_cellID;   //!
   TBranch        *b_ffiZDCSiPbHits_flag;   //!
   TBranch        *b_ffiZDCSiPbHits_g4ID;   //!
   TBranch        *b_ffiZDCSiPbHits_position_x;   //!
   TBranch        *b_ffiZDCSiPbHits_position_y;   //!
   TBranch        *b_ffiZDCSiPbHits_position_z;   //!
   TBranch        *b_ffiZDCSiPbHits_position_t;   //!
   TBranch        *b_ffiZDCSiPbHits_truth_trackID;   //!
   TBranch        *b_ffiZDCSiPbHits_truth_pdgID;   //!
   TBranch        *b_ffiZDCSiPbHits_truth_deposit;   //!
   TBranch        *b_ffiZDCSiPbHits_truth_time;   //!
   TBranch        *b_ffiZDCSiPbHits_truth_length;   //!
   TBranch        *b_ffiZDCSiPbHits_truth_x;   //!
   TBranch        *b_ffiZDCSiPbHits_truth_y;   //!
   TBranch        *b_ffiZDCSiPbHits_truth_z;   //!
   TBranch        *b_ffiZDCSiPbHits_energyDeposit;   //!
   TBranch        *b_ffiZDCScintHits_;   //!
   TBranch        *b_ffiZDCScintHits_cellID;   //!
   TBranch        *b_ffiZDCScintHits_flag;   //!
   TBranch        *b_ffiZDCScintHits_g4ID;   //!
   TBranch        *b_ffiZDCScintHits_position_x;   //!
   TBranch        *b_ffiZDCScintHits_position_y;   //!
   TBranch        *b_ffiZDCScintHits_position_z;   //!
   TBranch        *b_ffiZDCScintHits_position_t;   //!
   TBranch        *b_ffiZDCScintHits_truth_trackID;   //!
   TBranch        *b_ffiZDCScintHits_truth_pdgID;   //!
   TBranch        *b_ffiZDCScintHits_truth_deposit;   //!
   TBranch        *b_ffiZDCScintHits_truth_time;   //!
   TBranch        *b_ffiZDCScintHits_truth_length;   //!
   TBranch        *b_ffiZDCScintHits_truth_x;   //!
   TBranch        *b_ffiZDCScintHits_truth_y;   //!
   TBranch        *b_ffiZDCScintHits_truth_z;   //!
   TBranch        *b_ffiZDCScintHits_energyDeposit;   //!

   events(TTree *tree=0);
   virtual ~events();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef events_cxx
events::events(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("test.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("test.root");
      }
      f->GetObject("events",tree);

   }
   Init(tree);
}

events::~events()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t events::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t events::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void events::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   mcparticles_0 = 0;
   mcparticles_1 = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("mcparticles", &mcparticles_, &b_mcparticles_);
   fChain->SetBranchAddress("mcparticles.ID", mcparticles_ID, &b_mcparticles_ID);
   fChain->SetBranchAddress("mcparticles.g4Parent", mcparticles_g4Parent, &b_mcparticles_g4Parent);
   fChain->SetBranchAddress("mcparticles.reason", mcparticles_reason, &b_mcparticles_reason);
   fChain->SetBranchAddress("mcparticles.mask", mcparticles_mask, &b_mcparticles_mask);
   fChain->SetBranchAddress("mcparticles.steps", mcparticles_steps, &b_mcparticles_steps);
   fChain->SetBranchAddress("mcparticles.secondaries", mcparticles_secondaries, &b_mcparticles_secondaries);
   fChain->SetBranchAddress("mcparticles.pdgID", mcparticles_pdgID, &b_mcparticles_pdgID);
   fChain->SetBranchAddress("mcparticles.status", mcparticles_status, &b_mcparticles_status);
   fChain->SetBranchAddress("mcparticles.colorFlow[2]", mcparticles_colorFlow, &b_mcparticles_colorFlow);
   fChain->SetBranchAddress("mcparticles.genStatus", mcparticles_genStatus, &b_mcparticles_genStatus);
   fChain->SetBranchAddress("mcparticles.charge", mcparticles_charge, &b_mcparticles_charge);
   fChain->SetBranchAddress("mcparticles.spare[1]", mcparticles_spare, &b_mcparticles_spare);
   fChain->SetBranchAddress("mcparticles.spin[3]", mcparticles_spin, &b_mcparticles_spin);
   fChain->SetBranchAddress("mcparticles.vsx", mcparticles_vsx, &b_mcparticles_vsx);
   fChain->SetBranchAddress("mcparticles.vsy", mcparticles_vsy, &b_mcparticles_vsy);
   fChain->SetBranchAddress("mcparticles.vsz", mcparticles_vsz, &b_mcparticles_vsz);
   fChain->SetBranchAddress("mcparticles.vex", mcparticles_vex, &b_mcparticles_vex);
   fChain->SetBranchAddress("mcparticles.vey", mcparticles_vey, &b_mcparticles_vey);
   fChain->SetBranchAddress("mcparticles.vez", mcparticles_vez, &b_mcparticles_vez);
   fChain->SetBranchAddress("mcparticles.psx", mcparticles_psx, &b_mcparticles_psx);
   fChain->SetBranchAddress("mcparticles.psy", mcparticles_psy, &b_mcparticles_psy);
   fChain->SetBranchAddress("mcparticles.psz", mcparticles_psz, &b_mcparticles_psz);
   fChain->SetBranchAddress("mcparticles.pex", mcparticles_pex, &b_mcparticles_pex);
   fChain->SetBranchAddress("mcparticles.pey", mcparticles_pey, &b_mcparticles_pey);
   fChain->SetBranchAddress("mcparticles.pez", mcparticles_pez, &b_mcparticles_pez);
   fChain->SetBranchAddress("mcparticles.mass", mcparticles_mass, &b_mcparticles_mass);
   fChain->SetBranchAddress("mcparticles.time", mcparticles_time, &b_mcparticles_time);
   fChain->SetBranchAddress("mcparticles.properTime", mcparticles_properTime, &b_mcparticles_properTime);
   fChain->SetBranchAddress("mcparticles.parents_begin", mcparticles_parents_begin, &b_mcparticles_parents_begin);
   fChain->SetBranchAddress("mcparticles.parents_end", mcparticles_parents_end, &b_mcparticles_parents_end);
   fChain->SetBranchAddress("mcparticles.daughters_begin", mcparticles_daughters_begin, &b_mcparticles_daughters_begin);
   fChain->SetBranchAddress("mcparticles.daughters_end", mcparticles_daughters_end, &b_mcparticles_daughters_end);
   fChain->SetBranchAddress("mcparticles_0", &mcparticles_0, &b_mcparticles_0);
   fChain->SetBranchAddress("mcparticles_1", &mcparticles_1, &b_mcparticles_1);
   fChain->SetBranchAddress("EcalEndcapPHits", &EcalEndcapPHits_, &b_EcalEndcapPHits_);
   fChain->SetBranchAddress("EcalEndcapPHits.cellID", EcalEndcapPHits_cellID, &b_EcalEndcapPHits_cellID);
   fChain->SetBranchAddress("EcalEndcapPHits.flag", EcalEndcapPHits_flag, &b_EcalEndcapPHits_flag);
   fChain->SetBranchAddress("EcalEndcapPHits.g4ID", EcalEndcapPHits_g4ID, &b_EcalEndcapPHits_g4ID);
   fChain->SetBranchAddress("EcalEndcapPHits.position.x", EcalEndcapPHits_position_x, &b_EcalEndcapPHits_position_x);
   fChain->SetBranchAddress("EcalEndcapPHits.position.y", EcalEndcapPHits_position_y, &b_EcalEndcapPHits_position_y);
   fChain->SetBranchAddress("EcalEndcapPHits.position.z", EcalEndcapPHits_position_z, &b_EcalEndcapPHits_position_z);
   fChain->SetBranchAddress("EcalEndcapPHits.position.t", EcalEndcapPHits_position_t, &b_EcalEndcapPHits_position_t);
   fChain->SetBranchAddress("EcalEndcapPHits.truth.trackID", EcalEndcapPHits_truth_trackID, &b_EcalEndcapPHits_truth_trackID);
   fChain->SetBranchAddress("EcalEndcapPHits.truth.pdgID", EcalEndcapPHits_truth_pdgID, &b_EcalEndcapPHits_truth_pdgID);
   fChain->SetBranchAddress("EcalEndcapPHits.truth.deposit", EcalEndcapPHits_truth_deposit, &b_EcalEndcapPHits_truth_deposit);
   fChain->SetBranchAddress("EcalEndcapPHits.truth.time", EcalEndcapPHits_truth_time, &b_EcalEndcapPHits_truth_time);
   fChain->SetBranchAddress("EcalEndcapPHits.truth.length", EcalEndcapPHits_truth_length, &b_EcalEndcapPHits_truth_length);
   fChain->SetBranchAddress("EcalEndcapPHits.truth.x", EcalEndcapPHits_truth_x, &b_EcalEndcapPHits_truth_x);
   fChain->SetBranchAddress("EcalEndcapPHits.truth.y", EcalEndcapPHits_truth_y, &b_EcalEndcapPHits_truth_y);
   fChain->SetBranchAddress("EcalEndcapPHits.truth.z", EcalEndcapPHits_truth_z, &b_EcalEndcapPHits_truth_z);
   fChain->SetBranchAddress("EcalEndcapPHits.energyDeposit", EcalEndcapPHits_energyDeposit, &b_EcalEndcapPHits_energyDeposit);
   fChain->SetBranchAddress("BarrelTOFHits", &BarrelTOFHits_, &b_BarrelTOFHits_);
   fChain->SetBranchAddress("BarrelTOFHits.cellID", BarrelTOFHits_cellID, &b_BarrelTOFHits_cellID);
   fChain->SetBranchAddress("BarrelTOFHits.flag", BarrelTOFHits_flag, &b_BarrelTOFHits_flag);
   fChain->SetBranchAddress("BarrelTOFHits.g4ID", BarrelTOFHits_g4ID, &b_BarrelTOFHits_g4ID);
   fChain->SetBranchAddress("BarrelTOFHits.position.x", BarrelTOFHits_position_x, &b_BarrelTOFHits_position_x);
   fChain->SetBranchAddress("BarrelTOFHits.position.y", BarrelTOFHits_position_y, &b_BarrelTOFHits_position_y);
   fChain->SetBranchAddress("BarrelTOFHits.position.z", BarrelTOFHits_position_z, &b_BarrelTOFHits_position_z);
   fChain->SetBranchAddress("BarrelTOFHits.position.t", BarrelTOFHits_position_t, &b_BarrelTOFHits_position_t);
   fChain->SetBranchAddress("BarrelTOFHits.momentum.x", BarrelTOFHits_momentum_x, &b_BarrelTOFHits_momentum_x);
   fChain->SetBranchAddress("BarrelTOFHits.momentum.y", BarrelTOFHits_momentum_y, &b_BarrelTOFHits_momentum_y);
   fChain->SetBranchAddress("BarrelTOFHits.momentum.z", BarrelTOFHits_momentum_z, &b_BarrelTOFHits_momentum_z);
   fChain->SetBranchAddress("BarrelTOFHits.momentum.t", BarrelTOFHits_momentum_t, &b_BarrelTOFHits_momentum_t);
   fChain->SetBranchAddress("BarrelTOFHits.length", BarrelTOFHits_length, &b_BarrelTOFHits_length);
   fChain->SetBranchAddress("BarrelTOFHits.truth.trackID", BarrelTOFHits_truth_trackID, &b_BarrelTOFHits_truth_trackID);
   fChain->SetBranchAddress("BarrelTOFHits.truth.pdgID", BarrelTOFHits_truth_pdgID, &b_BarrelTOFHits_truth_pdgID);
   fChain->SetBranchAddress("BarrelTOFHits.truth.deposit", BarrelTOFHits_truth_deposit, &b_BarrelTOFHits_truth_deposit);
   fChain->SetBranchAddress("BarrelTOFHits.truth.time", BarrelTOFHits_truth_time, &b_BarrelTOFHits_truth_time);
   fChain->SetBranchAddress("BarrelTOFHits.truth.length", BarrelTOFHits_truth_length, &b_BarrelTOFHits_truth_length);
   fChain->SetBranchAddress("BarrelTOFHits.truth.x", BarrelTOFHits_truth_x, &b_BarrelTOFHits_truth_x);
   fChain->SetBranchAddress("BarrelTOFHits.truth.y", BarrelTOFHits_truth_y, &b_BarrelTOFHits_truth_y);
   fChain->SetBranchAddress("BarrelTOFHits.truth.z", BarrelTOFHits_truth_z, &b_BarrelTOFHits_truth_z);
   fChain->SetBranchAddress("BarrelTOFHits.energyDeposit", BarrelTOFHits_energyDeposit, &b_BarrelTOFHits_energyDeposit);
   fChain->SetBranchAddress("VertexBarrelHits", &VertexBarrelHits_, &b_VertexBarrelHits_);
   fChain->SetBranchAddress("VertexBarrelHits.cellID", VertexBarrelHits_cellID, &b_VertexBarrelHits_cellID);
   fChain->SetBranchAddress("VertexBarrelHits.flag", VertexBarrelHits_flag, &b_VertexBarrelHits_flag);
   fChain->SetBranchAddress("VertexBarrelHits.g4ID", VertexBarrelHits_g4ID, &b_VertexBarrelHits_g4ID);
   fChain->SetBranchAddress("VertexBarrelHits.position.x", VertexBarrelHits_position_x, &b_VertexBarrelHits_position_x);
   fChain->SetBranchAddress("VertexBarrelHits.position.y", VertexBarrelHits_position_y, &b_VertexBarrelHits_position_y);
   fChain->SetBranchAddress("VertexBarrelHits.position.z", VertexBarrelHits_position_z, &b_VertexBarrelHits_position_z);
   fChain->SetBranchAddress("VertexBarrelHits.position.t", VertexBarrelHits_position_t, &b_VertexBarrelHits_position_t);
   fChain->SetBranchAddress("VertexBarrelHits.momentum.x", VertexBarrelHits_momentum_x, &b_VertexBarrelHits_momentum_x);
   fChain->SetBranchAddress("VertexBarrelHits.momentum.y", VertexBarrelHits_momentum_y, &b_VertexBarrelHits_momentum_y);
   fChain->SetBranchAddress("VertexBarrelHits.momentum.z", VertexBarrelHits_momentum_z, &b_VertexBarrelHits_momentum_z);
   fChain->SetBranchAddress("VertexBarrelHits.momentum.t", VertexBarrelHits_momentum_t, &b_VertexBarrelHits_momentum_t);
   fChain->SetBranchAddress("VertexBarrelHits.length", VertexBarrelHits_length, &b_VertexBarrelHits_length);
   fChain->SetBranchAddress("VertexBarrelHits.truth.trackID", VertexBarrelHits_truth_trackID, &b_VertexBarrelHits_truth_trackID);
   fChain->SetBranchAddress("VertexBarrelHits.truth.pdgID", VertexBarrelHits_truth_pdgID, &b_VertexBarrelHits_truth_pdgID);
   fChain->SetBranchAddress("VertexBarrelHits.truth.deposit", VertexBarrelHits_truth_deposit, &b_VertexBarrelHits_truth_deposit);
   fChain->SetBranchAddress("VertexBarrelHits.truth.time", VertexBarrelHits_truth_time, &b_VertexBarrelHits_truth_time);
   fChain->SetBranchAddress("VertexBarrelHits.truth.length", VertexBarrelHits_truth_length, &b_VertexBarrelHits_truth_length);
   fChain->SetBranchAddress("VertexBarrelHits.truth.x", VertexBarrelHits_truth_x, &b_VertexBarrelHits_truth_x);
   fChain->SetBranchAddress("VertexBarrelHits.truth.y", VertexBarrelHits_truth_y, &b_VertexBarrelHits_truth_y);
   fChain->SetBranchAddress("VertexBarrelHits.truth.z", VertexBarrelHits_truth_z, &b_VertexBarrelHits_truth_z);
   fChain->SetBranchAddress("VertexBarrelHits.energyDeposit", VertexBarrelHits_energyDeposit, &b_VertexBarrelHits_energyDeposit);
   fChain->SetBranchAddress("VertexEndcapHits", &VertexEndcapHits_, &b_VertexEndcapHits_);
   fChain->SetBranchAddress("VertexEndcapHits.cellID", VertexEndcapHits_cellID, &b_VertexEndcapHits_cellID);
   fChain->SetBranchAddress("VertexEndcapHits.flag", VertexEndcapHits_flag, &b_VertexEndcapHits_flag);
   fChain->SetBranchAddress("VertexEndcapHits.g4ID", VertexEndcapHits_g4ID, &b_VertexEndcapHits_g4ID);
   fChain->SetBranchAddress("VertexEndcapHits.position.x", VertexEndcapHits_position_x, &b_VertexEndcapHits_position_x);
   fChain->SetBranchAddress("VertexEndcapHits.position.y", VertexEndcapHits_position_y, &b_VertexEndcapHits_position_y);
   fChain->SetBranchAddress("VertexEndcapHits.position.z", VertexEndcapHits_position_z, &b_VertexEndcapHits_position_z);
   fChain->SetBranchAddress("VertexEndcapHits.position.t", VertexEndcapHits_position_t, &b_VertexEndcapHits_position_t);
   fChain->SetBranchAddress("VertexEndcapHits.momentum.x", VertexEndcapHits_momentum_x, &b_VertexEndcapHits_momentum_x);
   fChain->SetBranchAddress("VertexEndcapHits.momentum.y", VertexEndcapHits_momentum_y, &b_VertexEndcapHits_momentum_y);
   fChain->SetBranchAddress("VertexEndcapHits.momentum.z", VertexEndcapHits_momentum_z, &b_VertexEndcapHits_momentum_z);
   fChain->SetBranchAddress("VertexEndcapHits.momentum.t", VertexEndcapHits_momentum_t, &b_VertexEndcapHits_momentum_t);
   fChain->SetBranchAddress("VertexEndcapHits.length", VertexEndcapHits_length, &b_VertexEndcapHits_length);
   fChain->SetBranchAddress("VertexEndcapHits.truth.trackID", VertexEndcapHits_truth_trackID, &b_VertexEndcapHits_truth_trackID);
   fChain->SetBranchAddress("VertexEndcapHits.truth.pdgID", VertexEndcapHits_truth_pdgID, &b_VertexEndcapHits_truth_pdgID);
   fChain->SetBranchAddress("VertexEndcapHits.truth.deposit", VertexEndcapHits_truth_deposit, &b_VertexEndcapHits_truth_deposit);
   fChain->SetBranchAddress("VertexEndcapHits.truth.time", VertexEndcapHits_truth_time, &b_VertexEndcapHits_truth_time);
   fChain->SetBranchAddress("VertexEndcapHits.truth.length", VertexEndcapHits_truth_length, &b_VertexEndcapHits_truth_length);
   fChain->SetBranchAddress("VertexEndcapHits.truth.x", VertexEndcapHits_truth_x, &b_VertexEndcapHits_truth_x);
   fChain->SetBranchAddress("VertexEndcapHits.truth.y", VertexEndcapHits_truth_y, &b_VertexEndcapHits_truth_y);
   fChain->SetBranchAddress("VertexEndcapHits.truth.z", VertexEndcapHits_truth_z, &b_VertexEndcapHits_truth_z);
   fChain->SetBranchAddress("VertexEndcapHits.energyDeposit", VertexEndcapHits_energyDeposit, &b_VertexEndcapHits_energyDeposit);
   fChain->SetBranchAddress("TrackerBarrelHits", &TrackerBarrelHits_, &b_TrackerBarrelHits_);
   fChain->SetBranchAddress("TrackerBarrelHits.cellID", TrackerBarrelHits_cellID, &b_TrackerBarrelHits_cellID);
   fChain->SetBranchAddress("TrackerBarrelHits.flag", TrackerBarrelHits_flag, &b_TrackerBarrelHits_flag);
   fChain->SetBranchAddress("TrackerBarrelHits.g4ID", TrackerBarrelHits_g4ID, &b_TrackerBarrelHits_g4ID);
   fChain->SetBranchAddress("TrackerBarrelHits.position.x", TrackerBarrelHits_position_x, &b_TrackerBarrelHits_position_x);
   fChain->SetBranchAddress("TrackerBarrelHits.position.y", TrackerBarrelHits_position_y, &b_TrackerBarrelHits_position_y);
   fChain->SetBranchAddress("TrackerBarrelHits.position.z", TrackerBarrelHits_position_z, &b_TrackerBarrelHits_position_z);
   fChain->SetBranchAddress("TrackerBarrelHits.position.t", TrackerBarrelHits_position_t, &b_TrackerBarrelHits_position_t);
   fChain->SetBranchAddress("TrackerBarrelHits.momentum.x", TrackerBarrelHits_momentum_x, &b_TrackerBarrelHits_momentum_x);
   fChain->SetBranchAddress("TrackerBarrelHits.momentum.y", TrackerBarrelHits_momentum_y, &b_TrackerBarrelHits_momentum_y);
   fChain->SetBranchAddress("TrackerBarrelHits.momentum.z", TrackerBarrelHits_momentum_z, &b_TrackerBarrelHits_momentum_z);
   fChain->SetBranchAddress("TrackerBarrelHits.momentum.t", TrackerBarrelHits_momentum_t, &b_TrackerBarrelHits_momentum_t);
   fChain->SetBranchAddress("TrackerBarrelHits.length", TrackerBarrelHits_length, &b_TrackerBarrelHits_length);
   fChain->SetBranchAddress("TrackerBarrelHits.truth.trackID", TrackerBarrelHits_truth_trackID, &b_TrackerBarrelHits_truth_trackID);
   fChain->SetBranchAddress("TrackerBarrelHits.truth.pdgID", TrackerBarrelHits_truth_pdgID, &b_TrackerBarrelHits_truth_pdgID);
   fChain->SetBranchAddress("TrackerBarrelHits.truth.deposit", TrackerBarrelHits_truth_deposit, &b_TrackerBarrelHits_truth_deposit);
   fChain->SetBranchAddress("TrackerBarrelHits.truth.time", TrackerBarrelHits_truth_time, &b_TrackerBarrelHits_truth_time);
   fChain->SetBranchAddress("TrackerBarrelHits.truth.length", TrackerBarrelHits_truth_length, &b_TrackerBarrelHits_truth_length);
   fChain->SetBranchAddress("TrackerBarrelHits.truth.x", TrackerBarrelHits_truth_x, &b_TrackerBarrelHits_truth_x);
   fChain->SetBranchAddress("TrackerBarrelHits.truth.y", TrackerBarrelHits_truth_y, &b_TrackerBarrelHits_truth_y);
   fChain->SetBranchAddress("TrackerBarrelHits.truth.z", TrackerBarrelHits_truth_z, &b_TrackerBarrelHits_truth_z);
   fChain->SetBranchAddress("TrackerBarrelHits.energyDeposit", TrackerBarrelHits_energyDeposit, &b_TrackerBarrelHits_energyDeposit);
   fChain->SetBranchAddress("TrackerEndcapHits", &TrackerEndcapHits_, &b_TrackerEndcapHits_);
   fChain->SetBranchAddress("TrackerEndcapHits.cellID", TrackerEndcapHits_cellID, &b_TrackerEndcapHits_cellID);
   fChain->SetBranchAddress("TrackerEndcapHits.flag", TrackerEndcapHits_flag, &b_TrackerEndcapHits_flag);
   fChain->SetBranchAddress("TrackerEndcapHits.g4ID", TrackerEndcapHits_g4ID, &b_TrackerEndcapHits_g4ID);
   fChain->SetBranchAddress("TrackerEndcapHits.position.x", TrackerEndcapHits_position_x, &b_TrackerEndcapHits_position_x);
   fChain->SetBranchAddress("TrackerEndcapHits.position.y", TrackerEndcapHits_position_y, &b_TrackerEndcapHits_position_y);
   fChain->SetBranchAddress("TrackerEndcapHits.position.z", TrackerEndcapHits_position_z, &b_TrackerEndcapHits_position_z);
   fChain->SetBranchAddress("TrackerEndcapHits.position.t", TrackerEndcapHits_position_t, &b_TrackerEndcapHits_position_t);
   fChain->SetBranchAddress("TrackerEndcapHits.momentum.x", TrackerEndcapHits_momentum_x, &b_TrackerEndcapHits_momentum_x);
   fChain->SetBranchAddress("TrackerEndcapHits.momentum.y", TrackerEndcapHits_momentum_y, &b_TrackerEndcapHits_momentum_y);
   fChain->SetBranchAddress("TrackerEndcapHits.momentum.z", TrackerEndcapHits_momentum_z, &b_TrackerEndcapHits_momentum_z);
   fChain->SetBranchAddress("TrackerEndcapHits.momentum.t", TrackerEndcapHits_momentum_t, &b_TrackerEndcapHits_momentum_t);
   fChain->SetBranchAddress("TrackerEndcapHits.length", TrackerEndcapHits_length, &b_TrackerEndcapHits_length);
   fChain->SetBranchAddress("TrackerEndcapHits.truth.trackID", TrackerEndcapHits_truth_trackID, &b_TrackerEndcapHits_truth_trackID);
   fChain->SetBranchAddress("TrackerEndcapHits.truth.pdgID", TrackerEndcapHits_truth_pdgID, &b_TrackerEndcapHits_truth_pdgID);
   fChain->SetBranchAddress("TrackerEndcapHits.truth.deposit", TrackerEndcapHits_truth_deposit, &b_TrackerEndcapHits_truth_deposit);
   fChain->SetBranchAddress("TrackerEndcapHits.truth.time", TrackerEndcapHits_truth_time, &b_TrackerEndcapHits_truth_time);
   fChain->SetBranchAddress("TrackerEndcapHits.truth.length", TrackerEndcapHits_truth_length, &b_TrackerEndcapHits_truth_length);
   fChain->SetBranchAddress("TrackerEndcapHits.truth.x", TrackerEndcapHits_truth_x, &b_TrackerEndcapHits_truth_x);
   fChain->SetBranchAddress("TrackerEndcapHits.truth.y", TrackerEndcapHits_truth_y, &b_TrackerEndcapHits_truth_y);
   fChain->SetBranchAddress("TrackerEndcapHits.truth.z", TrackerEndcapHits_truth_z, &b_TrackerEndcapHits_truth_z);
   fChain->SetBranchAddress("TrackerEndcapHits.energyDeposit", TrackerEndcapHits_energyDeposit, &b_TrackerEndcapHits_energyDeposit);
   fChain->SetBranchAddress("ForwardTRDHits", &ForwardTRDHits_, &b_ForwardTRDHits_);
   fChain->SetBranchAddress("ForwardTRDHits.cellID", ForwardTRDHits_cellID, &b_ForwardTRDHits_cellID);
   fChain->SetBranchAddress("ForwardTRDHits.flag", ForwardTRDHits_flag, &b_ForwardTRDHits_flag);
   fChain->SetBranchAddress("ForwardTRDHits.g4ID", ForwardTRDHits_g4ID, &b_ForwardTRDHits_g4ID);
   fChain->SetBranchAddress("ForwardTRDHits.position.x", ForwardTRDHits_position_x, &b_ForwardTRDHits_position_x);
   fChain->SetBranchAddress("ForwardTRDHits.position.y", ForwardTRDHits_position_y, &b_ForwardTRDHits_position_y);
   fChain->SetBranchAddress("ForwardTRDHits.position.z", ForwardTRDHits_position_z, &b_ForwardTRDHits_position_z);
   fChain->SetBranchAddress("ForwardTRDHits.position.t", ForwardTRDHits_position_t, &b_ForwardTRDHits_position_t);
   fChain->SetBranchAddress("ForwardTRDHits.momentum.x", ForwardTRDHits_momentum_x, &b_ForwardTRDHits_momentum_x);
   fChain->SetBranchAddress("ForwardTRDHits.momentum.y", ForwardTRDHits_momentum_y, &b_ForwardTRDHits_momentum_y);
   fChain->SetBranchAddress("ForwardTRDHits.momentum.z", ForwardTRDHits_momentum_z, &b_ForwardTRDHits_momentum_z);
   fChain->SetBranchAddress("ForwardTRDHits.momentum.t", ForwardTRDHits_momentum_t, &b_ForwardTRDHits_momentum_t);
   fChain->SetBranchAddress("ForwardTRDHits.length", ForwardTRDHits_length, &b_ForwardTRDHits_length);
   fChain->SetBranchAddress("ForwardTRDHits.truth.trackID", ForwardTRDHits_truth_trackID, &b_ForwardTRDHits_truth_trackID);
   fChain->SetBranchAddress("ForwardTRDHits.truth.pdgID", ForwardTRDHits_truth_pdgID, &b_ForwardTRDHits_truth_pdgID);
   fChain->SetBranchAddress("ForwardTRDHits.truth.deposit", ForwardTRDHits_truth_deposit, &b_ForwardTRDHits_truth_deposit);
   fChain->SetBranchAddress("ForwardTRDHits.truth.time", ForwardTRDHits_truth_time, &b_ForwardTRDHits_truth_time);
   fChain->SetBranchAddress("ForwardTRDHits.truth.length", ForwardTRDHits_truth_length, &b_ForwardTRDHits_truth_length);
   fChain->SetBranchAddress("ForwardTRDHits.truth.x", ForwardTRDHits_truth_x, &b_ForwardTRDHits_truth_x);
   fChain->SetBranchAddress("ForwardTRDHits.truth.y", ForwardTRDHits_truth_y, &b_ForwardTRDHits_truth_y);
   fChain->SetBranchAddress("ForwardTRDHits.truth.z", ForwardTRDHits_truth_z, &b_ForwardTRDHits_truth_z);
   fChain->SetBranchAddress("ForwardTRDHits.energyDeposit", ForwardTRDHits_energyDeposit, &b_ForwardTRDHits_energyDeposit);
   fChain->SetBranchAddress("DRICHHits", &DRICHHits_, &b_DRICHHits_);
   fChain->SetBranchAddress("DRICHHits.cellID", DRICHHits_cellID, &b_DRICHHits_cellID);
   fChain->SetBranchAddress("DRICHHits.flag", DRICHHits_flag, &b_DRICHHits_flag);
   fChain->SetBranchAddress("DRICHHits.g4ID", DRICHHits_g4ID, &b_DRICHHits_g4ID);
   fChain->SetBranchAddress("DRICHHits.position.x", DRICHHits_position_x, &b_DRICHHits_position_x);
   fChain->SetBranchAddress("DRICHHits.position.y", DRICHHits_position_y, &b_DRICHHits_position_y);
   fChain->SetBranchAddress("DRICHHits.position.z", DRICHHits_position_z, &b_DRICHHits_position_z);
   fChain->SetBranchAddress("DRICHHits.position.t", DRICHHits_position_t, &b_DRICHHits_position_t);
   fChain->SetBranchAddress("DRICHHits.momentum.x", DRICHHits_momentum_x, &b_DRICHHits_momentum_x);
   fChain->SetBranchAddress("DRICHHits.momentum.y", DRICHHits_momentum_y, &b_DRICHHits_momentum_y);
   fChain->SetBranchAddress("DRICHHits.momentum.z", DRICHHits_momentum_z, &b_DRICHHits_momentum_z);
   fChain->SetBranchAddress("DRICHHits.momentum.t", DRICHHits_momentum_t, &b_DRICHHits_momentum_t);
   fChain->SetBranchAddress("DRICHHits.length", DRICHHits_length, &b_DRICHHits_length);
   fChain->SetBranchAddress("DRICHHits.truth.trackID", DRICHHits_truth_trackID, &b_DRICHHits_truth_trackID);
   fChain->SetBranchAddress("DRICHHits.truth.pdgID", DRICHHits_truth_pdgID, &b_DRICHHits_truth_pdgID);
   fChain->SetBranchAddress("DRICHHits.truth.deposit", DRICHHits_truth_deposit, &b_DRICHHits_truth_deposit);
   fChain->SetBranchAddress("DRICHHits.truth.time", DRICHHits_truth_time, &b_DRICHHits_truth_time);
   fChain->SetBranchAddress("DRICHHits.truth.length", DRICHHits_truth_length, &b_DRICHHits_truth_length);
   fChain->SetBranchAddress("DRICHHits.truth.x", DRICHHits_truth_x, &b_DRICHHits_truth_x);
   fChain->SetBranchAddress("DRICHHits.truth.y", DRICHHits_truth_y, &b_DRICHHits_truth_y);
   fChain->SetBranchAddress("DRICHHits.truth.z", DRICHHits_truth_z, &b_DRICHHits_truth_z);
   fChain->SetBranchAddress("DRICHHits.energy", DRICHHits_energy, &b_DRICHHits_energy);
   fChain->SetBranchAddress("HcalBarrelHits", &HcalBarrelHits_, &b_HcalBarrelHits_);
   fChain->SetBranchAddress("HcalBarrelHits.cellID", HcalBarrelHits_cellID, &b_HcalBarrelHits_cellID);
   fChain->SetBranchAddress("HcalBarrelHits.flag", HcalBarrelHits_flag, &b_HcalBarrelHits_flag);
   fChain->SetBranchAddress("HcalBarrelHits.g4ID", HcalBarrelHits_g4ID, &b_HcalBarrelHits_g4ID);
   fChain->SetBranchAddress("HcalBarrelHits.position.x", HcalBarrelHits_position_x, &b_HcalBarrelHits_position_x);
   fChain->SetBranchAddress("HcalBarrelHits.position.y", HcalBarrelHits_position_y, &b_HcalBarrelHits_position_y);
   fChain->SetBranchAddress("HcalBarrelHits.position.z", HcalBarrelHits_position_z, &b_HcalBarrelHits_position_z);
   fChain->SetBranchAddress("HcalBarrelHits.position.t", HcalBarrelHits_position_t, &b_HcalBarrelHits_position_t);
   fChain->SetBranchAddress("HcalBarrelHits.truth.trackID", HcalBarrelHits_truth_trackID, &b_HcalBarrelHits_truth_trackID);
   fChain->SetBranchAddress("HcalBarrelHits.truth.pdgID", HcalBarrelHits_truth_pdgID, &b_HcalBarrelHits_truth_pdgID);
   fChain->SetBranchAddress("HcalBarrelHits.truth.deposit", HcalBarrelHits_truth_deposit, &b_HcalBarrelHits_truth_deposit);
   fChain->SetBranchAddress("HcalBarrelHits.truth.time", HcalBarrelHits_truth_time, &b_HcalBarrelHits_truth_time);
   fChain->SetBranchAddress("HcalBarrelHits.truth.length", HcalBarrelHits_truth_length, &b_HcalBarrelHits_truth_length);
   fChain->SetBranchAddress("HcalBarrelHits.truth.x", HcalBarrelHits_truth_x, &b_HcalBarrelHits_truth_x);
   fChain->SetBranchAddress("HcalBarrelHits.truth.y", HcalBarrelHits_truth_y, &b_HcalBarrelHits_truth_y);
   fChain->SetBranchAddress("HcalBarrelHits.truth.z", HcalBarrelHits_truth_z, &b_HcalBarrelHits_truth_z);
   fChain->SetBranchAddress("HcalBarrelHits.energyDeposit", HcalBarrelHits_energyDeposit, &b_HcalBarrelHits_energyDeposit);
   fChain->SetBranchAddress("TOFEndcapHits", &TOFEndcapHits_, &b_TOFEndcapHits_);
   fChain->SetBranchAddress("TOFEndcapHits.cellID", TOFEndcapHits_cellID, &b_TOFEndcapHits_cellID);
   fChain->SetBranchAddress("TOFEndcapHits.flag", TOFEndcapHits_flag, &b_TOFEndcapHits_flag);
   fChain->SetBranchAddress("TOFEndcapHits.g4ID", TOFEndcapHits_g4ID, &b_TOFEndcapHits_g4ID);
   fChain->SetBranchAddress("TOFEndcapHits.position.x", TOFEndcapHits_position_x, &b_TOFEndcapHits_position_x);
   fChain->SetBranchAddress("TOFEndcapHits.position.y", TOFEndcapHits_position_y, &b_TOFEndcapHits_position_y);
   fChain->SetBranchAddress("TOFEndcapHits.position.z", TOFEndcapHits_position_z, &b_TOFEndcapHits_position_z);
   fChain->SetBranchAddress("TOFEndcapHits.position.t", TOFEndcapHits_position_t, &b_TOFEndcapHits_position_t);
   fChain->SetBranchAddress("TOFEndcapHits.momentum.x", TOFEndcapHits_momentum_x, &b_TOFEndcapHits_momentum_x);
   fChain->SetBranchAddress("TOFEndcapHits.momentum.y", TOFEndcapHits_momentum_y, &b_TOFEndcapHits_momentum_y);
   fChain->SetBranchAddress("TOFEndcapHits.momentum.z", TOFEndcapHits_momentum_z, &b_TOFEndcapHits_momentum_z);
   fChain->SetBranchAddress("TOFEndcapHits.momentum.t", TOFEndcapHits_momentum_t, &b_TOFEndcapHits_momentum_t);
   fChain->SetBranchAddress("TOFEndcapHits.length", TOFEndcapHits_length, &b_TOFEndcapHits_length);
   fChain->SetBranchAddress("TOFEndcapHits.truth.trackID", TOFEndcapHits_truth_trackID, &b_TOFEndcapHits_truth_trackID);
   fChain->SetBranchAddress("TOFEndcapHits.truth.pdgID", TOFEndcapHits_truth_pdgID, &b_TOFEndcapHits_truth_pdgID);
   fChain->SetBranchAddress("TOFEndcapHits.truth.deposit", TOFEndcapHits_truth_deposit, &b_TOFEndcapHits_truth_deposit);
   fChain->SetBranchAddress("TOFEndcapHits.truth.time", TOFEndcapHits_truth_time, &b_TOFEndcapHits_truth_time);
   fChain->SetBranchAddress("TOFEndcapHits.truth.length", TOFEndcapHits_truth_length, &b_TOFEndcapHits_truth_length);
   fChain->SetBranchAddress("TOFEndcapHits.truth.x", TOFEndcapHits_truth_x, &b_TOFEndcapHits_truth_x);
   fChain->SetBranchAddress("TOFEndcapHits.truth.y", TOFEndcapHits_truth_y, &b_TOFEndcapHits_truth_y);
   fChain->SetBranchAddress("TOFEndcapHits.truth.z", TOFEndcapHits_truth_z, &b_TOFEndcapHits_truth_z);
   fChain->SetBranchAddress("TOFEndcapHits.energyDeposit", TOFEndcapHits_energyDeposit, &b_TOFEndcapHits_energyDeposit);
   fChain->SetBranchAddress("EcalEndcapNHits", &EcalEndcapNHits_, &b_EcalEndcapNHits_);
   fChain->SetBranchAddress("EcalEndcapNHits.cellID", EcalEndcapNHits_cellID, &b_EcalEndcapNHits_cellID);
   fChain->SetBranchAddress("EcalEndcapNHits.flag", EcalEndcapNHits_flag, &b_EcalEndcapNHits_flag);
   fChain->SetBranchAddress("EcalEndcapNHits.g4ID", EcalEndcapNHits_g4ID, &b_EcalEndcapNHits_g4ID);
   fChain->SetBranchAddress("EcalEndcapNHits.position.x", EcalEndcapNHits_position_x, &b_EcalEndcapNHits_position_x);
   fChain->SetBranchAddress("EcalEndcapNHits.position.y", EcalEndcapNHits_position_y, &b_EcalEndcapNHits_position_y);
   fChain->SetBranchAddress("EcalEndcapNHits.position.z", EcalEndcapNHits_position_z, &b_EcalEndcapNHits_position_z);
   fChain->SetBranchAddress("EcalEndcapNHits.position.t", EcalEndcapNHits_position_t, &b_EcalEndcapNHits_position_t);
   fChain->SetBranchAddress("EcalEndcapNHits.truth.trackID", EcalEndcapNHits_truth_trackID, &b_EcalEndcapNHits_truth_trackID);
   fChain->SetBranchAddress("EcalEndcapNHits.truth.pdgID", EcalEndcapNHits_truth_pdgID, &b_EcalEndcapNHits_truth_pdgID);
   fChain->SetBranchAddress("EcalEndcapNHits.truth.deposit", EcalEndcapNHits_truth_deposit, &b_EcalEndcapNHits_truth_deposit);
   fChain->SetBranchAddress("EcalEndcapNHits.truth.time", EcalEndcapNHits_truth_time, &b_EcalEndcapNHits_truth_time);
   fChain->SetBranchAddress("EcalEndcapNHits.truth.length", EcalEndcapNHits_truth_length, &b_EcalEndcapNHits_truth_length);
   fChain->SetBranchAddress("EcalEndcapNHits.truth.x", EcalEndcapNHits_truth_x, &b_EcalEndcapNHits_truth_x);
   fChain->SetBranchAddress("EcalEndcapNHits.truth.y", EcalEndcapNHits_truth_y, &b_EcalEndcapNHits_truth_y);
   fChain->SetBranchAddress("EcalEndcapNHits.truth.z", EcalEndcapNHits_truth_z, &b_EcalEndcapNHits_truth_z);
   fChain->SetBranchAddress("EcalEndcapNHits.energyDeposit", EcalEndcapNHits_energyDeposit, &b_EcalEndcapNHits_energyDeposit);
   fChain->SetBranchAddress("EcalBarrelHits", &EcalBarrelHits_, &b_EcalBarrelHits_);
   fChain->SetBranchAddress("EcalBarrelHits.cellID", EcalBarrelHits_cellID, &b_EcalBarrelHits_cellID);
   fChain->SetBranchAddress("EcalBarrelHits.flag", EcalBarrelHits_flag, &b_EcalBarrelHits_flag);
   fChain->SetBranchAddress("EcalBarrelHits.g4ID", EcalBarrelHits_g4ID, &b_EcalBarrelHits_g4ID);
   fChain->SetBranchAddress("EcalBarrelHits.position.x", EcalBarrelHits_position_x, &b_EcalBarrelHits_position_x);
   fChain->SetBranchAddress("EcalBarrelHits.position.y", EcalBarrelHits_position_y, &b_EcalBarrelHits_position_y);
   fChain->SetBranchAddress("EcalBarrelHits.position.z", EcalBarrelHits_position_z, &b_EcalBarrelHits_position_z);
   fChain->SetBranchAddress("EcalBarrelHits.position.t", EcalBarrelHits_position_t, &b_EcalBarrelHits_position_t);
   fChain->SetBranchAddress("EcalBarrelHits.truth.trackID", EcalBarrelHits_truth_trackID, &b_EcalBarrelHits_truth_trackID);
   fChain->SetBranchAddress("EcalBarrelHits.truth.pdgID", EcalBarrelHits_truth_pdgID, &b_EcalBarrelHits_truth_pdgID);
   fChain->SetBranchAddress("EcalBarrelHits.truth.deposit", EcalBarrelHits_truth_deposit, &b_EcalBarrelHits_truth_deposit);
   fChain->SetBranchAddress("EcalBarrelHits.truth.time", EcalBarrelHits_truth_time, &b_EcalBarrelHits_truth_time);
   fChain->SetBranchAddress("EcalBarrelHits.truth.length", EcalBarrelHits_truth_length, &b_EcalBarrelHits_truth_length);
   fChain->SetBranchAddress("EcalBarrelHits.truth.x", EcalBarrelHits_truth_x, &b_EcalBarrelHits_truth_x);
   fChain->SetBranchAddress("EcalBarrelHits.truth.y", EcalBarrelHits_truth_y, &b_EcalBarrelHits_truth_y);
   fChain->SetBranchAddress("EcalBarrelHits.truth.z", EcalBarrelHits_truth_z, &b_EcalBarrelHits_truth_z);
   fChain->SetBranchAddress("EcalBarrelHits.energyDeposit", EcalBarrelHits_energyDeposit, &b_EcalBarrelHits_energyDeposit);
   fChain->SetBranchAddress("EcalBarrelScFiHits", &EcalBarrelScFiHits_, &b_EcalBarrelScFiHits_);
   fChain->SetBranchAddress("EcalBarrelScFiHits.cellID", EcalBarrelScFiHits_cellID, &b_EcalBarrelScFiHits_cellID);
   fChain->SetBranchAddress("EcalBarrelScFiHits.flag", EcalBarrelScFiHits_flag, &b_EcalBarrelScFiHits_flag);
   fChain->SetBranchAddress("EcalBarrelScFiHits.g4ID", EcalBarrelScFiHits_g4ID, &b_EcalBarrelScFiHits_g4ID);
   fChain->SetBranchAddress("EcalBarrelScFiHits.position.x", EcalBarrelScFiHits_position_x, &b_EcalBarrelScFiHits_position_x);
   fChain->SetBranchAddress("EcalBarrelScFiHits.position.y", EcalBarrelScFiHits_position_y, &b_EcalBarrelScFiHits_position_y);
   fChain->SetBranchAddress("EcalBarrelScFiHits.position.z", EcalBarrelScFiHits_position_z, &b_EcalBarrelScFiHits_position_z);
   fChain->SetBranchAddress("EcalBarrelScFiHits.position.t", EcalBarrelScFiHits_position_t, &b_EcalBarrelScFiHits_position_t);
   fChain->SetBranchAddress("EcalBarrelScFiHits.truth.trackID", EcalBarrelScFiHits_truth_trackID, &b_EcalBarrelScFiHits_truth_trackID);
   fChain->SetBranchAddress("EcalBarrelScFiHits.truth.pdgID", EcalBarrelScFiHits_truth_pdgID, &b_EcalBarrelScFiHits_truth_pdgID);
   fChain->SetBranchAddress("EcalBarrelScFiHits.truth.deposit", EcalBarrelScFiHits_truth_deposit, &b_EcalBarrelScFiHits_truth_deposit);
   fChain->SetBranchAddress("EcalBarrelScFiHits.truth.time", EcalBarrelScFiHits_truth_time, &b_EcalBarrelScFiHits_truth_time);
   fChain->SetBranchAddress("EcalBarrelScFiHits.truth.length", EcalBarrelScFiHits_truth_length, &b_EcalBarrelScFiHits_truth_length);
   fChain->SetBranchAddress("EcalBarrelScFiHits.truth.x", EcalBarrelScFiHits_truth_x, &b_EcalBarrelScFiHits_truth_x);
   fChain->SetBranchAddress("EcalBarrelScFiHits.truth.y", EcalBarrelScFiHits_truth_y, &b_EcalBarrelScFiHits_truth_y);
   fChain->SetBranchAddress("EcalBarrelScFiHits.truth.z", EcalBarrelScFiHits_truth_z, &b_EcalBarrelScFiHits_truth_z);
   fChain->SetBranchAddress("EcalBarrelScFiHits.energyDeposit", EcalBarrelScFiHits_energyDeposit, &b_EcalBarrelScFiHits_energyDeposit);
   fChain->SetBranchAddress("HcalHadronEndcapHits", &HcalHadronEndcapHits_, &b_HcalHadronEndcapHits_);
   fChain->SetBranchAddress("HcalHadronEndcapHits.cellID", HcalHadronEndcapHits_cellID, &b_HcalHadronEndcapHits_cellID);
   fChain->SetBranchAddress("HcalHadronEndcapHits.flag", HcalHadronEndcapHits_flag, &b_HcalHadronEndcapHits_flag);
   fChain->SetBranchAddress("HcalHadronEndcapHits.g4ID", HcalHadronEndcapHits_g4ID, &b_HcalHadronEndcapHits_g4ID);
   fChain->SetBranchAddress("HcalHadronEndcapHits.position.x", HcalHadronEndcapHits_position_x, &b_HcalHadronEndcapHits_position_x);
   fChain->SetBranchAddress("HcalHadronEndcapHits.position.y", HcalHadronEndcapHits_position_y, &b_HcalHadronEndcapHits_position_y);
   fChain->SetBranchAddress("HcalHadronEndcapHits.position.z", HcalHadronEndcapHits_position_z, &b_HcalHadronEndcapHits_position_z);
   fChain->SetBranchAddress("HcalHadronEndcapHits.position.t", HcalHadronEndcapHits_position_t, &b_HcalHadronEndcapHits_position_t);
   fChain->SetBranchAddress("HcalHadronEndcapHits.truth.trackID", HcalHadronEndcapHits_truth_trackID, &b_HcalHadronEndcapHits_truth_trackID);
   fChain->SetBranchAddress("HcalHadronEndcapHits.truth.pdgID", HcalHadronEndcapHits_truth_pdgID, &b_HcalHadronEndcapHits_truth_pdgID);
   fChain->SetBranchAddress("HcalHadronEndcapHits.truth.deposit", HcalHadronEndcapHits_truth_deposit, &b_HcalHadronEndcapHits_truth_deposit);
   fChain->SetBranchAddress("HcalHadronEndcapHits.truth.time", HcalHadronEndcapHits_truth_time, &b_HcalHadronEndcapHits_truth_time);
   fChain->SetBranchAddress("HcalHadronEndcapHits.truth.length", HcalHadronEndcapHits_truth_length, &b_HcalHadronEndcapHits_truth_length);
   fChain->SetBranchAddress("HcalHadronEndcapHits.truth.x", HcalHadronEndcapHits_truth_x, &b_HcalHadronEndcapHits_truth_x);
   fChain->SetBranchAddress("HcalHadronEndcapHits.truth.y", HcalHadronEndcapHits_truth_y, &b_HcalHadronEndcapHits_truth_y);
   fChain->SetBranchAddress("HcalHadronEndcapHits.truth.z", HcalHadronEndcapHits_truth_z, &b_HcalHadronEndcapHits_truth_z);
   fChain->SetBranchAddress("HcalHadronEndcapHits.energyDeposit", HcalHadronEndcapHits_energyDeposit, &b_HcalHadronEndcapHits_energyDeposit);
   fChain->SetBranchAddress("ForwardOffMTrackerHits", &ForwardOffMTrackerHits_, &b_ForwardOffMTrackerHits_);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.cellID", &ForwardOffMTrackerHits_cellID, &b_ForwardOffMTrackerHits_cellID);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.flag", &ForwardOffMTrackerHits_flag, &b_ForwardOffMTrackerHits_flag);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.g4ID", &ForwardOffMTrackerHits_g4ID, &b_ForwardOffMTrackerHits_g4ID);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.position.x", &ForwardOffMTrackerHits_position_x, &b_ForwardOffMTrackerHits_position_x);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.position.y", &ForwardOffMTrackerHits_position_y, &b_ForwardOffMTrackerHits_position_y);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.position.z", &ForwardOffMTrackerHits_position_z, &b_ForwardOffMTrackerHits_position_z);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.position.t", &ForwardOffMTrackerHits_position_t, &b_ForwardOffMTrackerHits_position_t);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.momentum.x", &ForwardOffMTrackerHits_momentum_x, &b_ForwardOffMTrackerHits_momentum_x);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.momentum.y", &ForwardOffMTrackerHits_momentum_y, &b_ForwardOffMTrackerHits_momentum_y);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.momentum.z", &ForwardOffMTrackerHits_momentum_z, &b_ForwardOffMTrackerHits_momentum_z);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.momentum.t", &ForwardOffMTrackerHits_momentum_t, &b_ForwardOffMTrackerHits_momentum_t);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.length", &ForwardOffMTrackerHits_length, &b_ForwardOffMTrackerHits_length);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.truth.trackID", &ForwardOffMTrackerHits_truth_trackID, &b_ForwardOffMTrackerHits_truth_trackID);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.truth.pdgID", &ForwardOffMTrackerHits_truth_pdgID, &b_ForwardOffMTrackerHits_truth_pdgID);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.truth.deposit", &ForwardOffMTrackerHits_truth_deposit, &b_ForwardOffMTrackerHits_truth_deposit);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.truth.time", &ForwardOffMTrackerHits_truth_time, &b_ForwardOffMTrackerHits_truth_time);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.truth.length", &ForwardOffMTrackerHits_truth_length, &b_ForwardOffMTrackerHits_truth_length);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.truth.x", &ForwardOffMTrackerHits_truth_x, &b_ForwardOffMTrackerHits_truth_x);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.truth.y", &ForwardOffMTrackerHits_truth_y, &b_ForwardOffMTrackerHits_truth_y);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.truth.z", &ForwardOffMTrackerHits_truth_z, &b_ForwardOffMTrackerHits_truth_z);
   fChain->SetBranchAddress("ForwardOffMTrackerHits.energyDeposit", &ForwardOffMTrackerHits_energyDeposit, &b_ForwardOffMTrackerHits_energyDeposit);
   fChain->SetBranchAddress("HcalElectronEndcapHits", &HcalElectronEndcapHits_, &b_HcalElectronEndcapHits_);
   fChain->SetBranchAddress("HcalElectronEndcapHits.cellID", HcalElectronEndcapHits_cellID, &b_HcalElectronEndcapHits_cellID);
   fChain->SetBranchAddress("HcalElectronEndcapHits.flag", HcalElectronEndcapHits_flag, &b_HcalElectronEndcapHits_flag);
   fChain->SetBranchAddress("HcalElectronEndcapHits.g4ID", HcalElectronEndcapHits_g4ID, &b_HcalElectronEndcapHits_g4ID);
   fChain->SetBranchAddress("HcalElectronEndcapHits.position.x", HcalElectronEndcapHits_position_x, &b_HcalElectronEndcapHits_position_x);
   fChain->SetBranchAddress("HcalElectronEndcapHits.position.y", HcalElectronEndcapHits_position_y, &b_HcalElectronEndcapHits_position_y);
   fChain->SetBranchAddress("HcalElectronEndcapHits.position.z", HcalElectronEndcapHits_position_z, &b_HcalElectronEndcapHits_position_z);
   fChain->SetBranchAddress("HcalElectronEndcapHits.position.t", HcalElectronEndcapHits_position_t, &b_HcalElectronEndcapHits_position_t);
   fChain->SetBranchAddress("HcalElectronEndcapHits.truth.trackID", HcalElectronEndcapHits_truth_trackID, &b_HcalElectronEndcapHits_truth_trackID);
   fChain->SetBranchAddress("HcalElectronEndcapHits.truth.pdgID", HcalElectronEndcapHits_truth_pdgID, &b_HcalElectronEndcapHits_truth_pdgID);
   fChain->SetBranchAddress("HcalElectronEndcapHits.truth.deposit", HcalElectronEndcapHits_truth_deposit, &b_HcalElectronEndcapHits_truth_deposit);
   fChain->SetBranchAddress("HcalElectronEndcapHits.truth.time", HcalElectronEndcapHits_truth_time, &b_HcalElectronEndcapHits_truth_time);
   fChain->SetBranchAddress("HcalElectronEndcapHits.truth.length", HcalElectronEndcapHits_truth_length, &b_HcalElectronEndcapHits_truth_length);
   fChain->SetBranchAddress("HcalElectronEndcapHits.truth.x", HcalElectronEndcapHits_truth_x, &b_HcalElectronEndcapHits_truth_x);
   fChain->SetBranchAddress("HcalElectronEndcapHits.truth.y", HcalElectronEndcapHits_truth_y, &b_HcalElectronEndcapHits_truth_y);
   fChain->SetBranchAddress("HcalElectronEndcapHits.truth.z", HcalElectronEndcapHits_truth_z, &b_HcalElectronEndcapHits_truth_z);
   fChain->SetBranchAddress("HcalElectronEndcapHits.energyDeposit", HcalElectronEndcapHits_energyDeposit, &b_HcalElectronEndcapHits_energyDeposit);
   fChain->SetBranchAddress("B0TrackerHits", &B0TrackerHits_, &b_B0TrackerHits_);
   fChain->SetBranchAddress("B0TrackerHits.cellID", &B0TrackerHits_cellID, &b_B0TrackerHits_cellID);
   fChain->SetBranchAddress("B0TrackerHits.flag", &B0TrackerHits_flag, &b_B0TrackerHits_flag);
   fChain->SetBranchAddress("B0TrackerHits.g4ID", &B0TrackerHits_g4ID, &b_B0TrackerHits_g4ID);
   fChain->SetBranchAddress("B0TrackerHits.position.x", &B0TrackerHits_position_x, &b_B0TrackerHits_position_x);
   fChain->SetBranchAddress("B0TrackerHits.position.y", &B0TrackerHits_position_y, &b_B0TrackerHits_position_y);
   fChain->SetBranchAddress("B0TrackerHits.position.z", &B0TrackerHits_position_z, &b_B0TrackerHits_position_z);
   fChain->SetBranchAddress("B0TrackerHits.position.t", &B0TrackerHits_position_t, &b_B0TrackerHits_position_t);
   fChain->SetBranchAddress("B0TrackerHits.momentum.x", &B0TrackerHits_momentum_x, &b_B0TrackerHits_momentum_x);
   fChain->SetBranchAddress("B0TrackerHits.momentum.y", &B0TrackerHits_momentum_y, &b_B0TrackerHits_momentum_y);
   fChain->SetBranchAddress("B0TrackerHits.momentum.z", &B0TrackerHits_momentum_z, &b_B0TrackerHits_momentum_z);
   fChain->SetBranchAddress("B0TrackerHits.momentum.t", &B0TrackerHits_momentum_t, &b_B0TrackerHits_momentum_t);
   fChain->SetBranchAddress("B0TrackerHits.length", &B0TrackerHits_length, &b_B0TrackerHits_length);
   fChain->SetBranchAddress("B0TrackerHits.truth.trackID", &B0TrackerHits_truth_trackID, &b_B0TrackerHits_truth_trackID);
   fChain->SetBranchAddress("B0TrackerHits.truth.pdgID", &B0TrackerHits_truth_pdgID, &b_B0TrackerHits_truth_pdgID);
   fChain->SetBranchAddress("B0TrackerHits.truth.deposit", &B0TrackerHits_truth_deposit, &b_B0TrackerHits_truth_deposit);
   fChain->SetBranchAddress("B0TrackerHits.truth.time", &B0TrackerHits_truth_time, &b_B0TrackerHits_truth_time);
   fChain->SetBranchAddress("B0TrackerHits.truth.length", &B0TrackerHits_truth_length, &b_B0TrackerHits_truth_length);
   fChain->SetBranchAddress("B0TrackerHits.truth.x", &B0TrackerHits_truth_x, &b_B0TrackerHits_truth_x);
   fChain->SetBranchAddress("B0TrackerHits.truth.y", &B0TrackerHits_truth_y, &b_B0TrackerHits_truth_y);
   fChain->SetBranchAddress("B0TrackerHits.truth.z", &B0TrackerHits_truth_z, &b_B0TrackerHits_truth_z);
   fChain->SetBranchAddress("B0TrackerHits.energyDeposit", &B0TrackerHits_energyDeposit, &b_B0TrackerHits_energyDeposit);
   fChain->SetBranchAddress("B0PreshowerHits", &B0PreshowerHits_, &b_B0PreshowerHits_);
   fChain->SetBranchAddress("B0PreshowerHits.cellID", B0PreshowerHits_cellID, &b_B0PreshowerHits_cellID);
   fChain->SetBranchAddress("B0PreshowerHits.flag", B0PreshowerHits_flag, &b_B0PreshowerHits_flag);
   fChain->SetBranchAddress("B0PreshowerHits.g4ID", B0PreshowerHits_g4ID, &b_B0PreshowerHits_g4ID);
   fChain->SetBranchAddress("B0PreshowerHits.position.x", B0PreshowerHits_position_x, &b_B0PreshowerHits_position_x);
   fChain->SetBranchAddress("B0PreshowerHits.position.y", B0PreshowerHits_position_y, &b_B0PreshowerHits_position_y);
   fChain->SetBranchAddress("B0PreshowerHits.position.z", B0PreshowerHits_position_z, &b_B0PreshowerHits_position_z);
   fChain->SetBranchAddress("B0PreshowerHits.position.t", B0PreshowerHits_position_t, &b_B0PreshowerHits_position_t);
   fChain->SetBranchAddress("B0PreshowerHits.momentum.x", B0PreshowerHits_momentum_x, &b_B0PreshowerHits_momentum_x);
   fChain->SetBranchAddress("B0PreshowerHits.momentum.y", B0PreshowerHits_momentum_y, &b_B0PreshowerHits_momentum_y);
   fChain->SetBranchAddress("B0PreshowerHits.momentum.z", B0PreshowerHits_momentum_z, &b_B0PreshowerHits_momentum_z);
   fChain->SetBranchAddress("B0PreshowerHits.momentum.t", B0PreshowerHits_momentum_t, &b_B0PreshowerHits_momentum_t);
   fChain->SetBranchAddress("B0PreshowerHits.length", B0PreshowerHits_length, &b_B0PreshowerHits_length);
   fChain->SetBranchAddress("B0PreshowerHits.truth.trackID", B0PreshowerHits_truth_trackID, &b_B0PreshowerHits_truth_trackID);
   fChain->SetBranchAddress("B0PreshowerHits.truth.pdgID", B0PreshowerHits_truth_pdgID, &b_B0PreshowerHits_truth_pdgID);
   fChain->SetBranchAddress("B0PreshowerHits.truth.deposit", B0PreshowerHits_truth_deposit, &b_B0PreshowerHits_truth_deposit);
   fChain->SetBranchAddress("B0PreshowerHits.truth.time", B0PreshowerHits_truth_time, &b_B0PreshowerHits_truth_time);
   fChain->SetBranchAddress("B0PreshowerHits.truth.length", B0PreshowerHits_truth_length, &b_B0PreshowerHits_truth_length);
   fChain->SetBranchAddress("B0PreshowerHits.truth.x", B0PreshowerHits_truth_x, &b_B0PreshowerHits_truth_x);
   fChain->SetBranchAddress("B0PreshowerHits.truth.y", B0PreshowerHits_truth_y, &b_B0PreshowerHits_truth_y);
   fChain->SetBranchAddress("B0PreshowerHits.truth.z", B0PreshowerHits_truth_z, &b_B0PreshowerHits_truth_z);
   fChain->SetBranchAddress("B0PreshowerHits.energyDeposit", B0PreshowerHits_energyDeposit, &b_B0PreshowerHits_energyDeposit);
   fChain->SetBranchAddress("ffiZDCSiHits", &ffiZDCSiHits_, &b_ffiZDCSiHits_);
   fChain->SetBranchAddress("ffiZDCSiHits.cellID", &ffiZDCSiHits_cellID, &b_ffiZDCSiHits_cellID);
   fChain->SetBranchAddress("ffiZDCSiHits.flag", &ffiZDCSiHits_flag, &b_ffiZDCSiHits_flag);
   fChain->SetBranchAddress("ffiZDCSiHits.g4ID", &ffiZDCSiHits_g4ID, &b_ffiZDCSiHits_g4ID);
   fChain->SetBranchAddress("ffiZDCSiHits.position.x", &ffiZDCSiHits_position_x, &b_ffiZDCSiHits_position_x);
   fChain->SetBranchAddress("ffiZDCSiHits.position.y", &ffiZDCSiHits_position_y, &b_ffiZDCSiHits_position_y);
   fChain->SetBranchAddress("ffiZDCSiHits.position.z", &ffiZDCSiHits_position_z, &b_ffiZDCSiHits_position_z);
   fChain->SetBranchAddress("ffiZDCSiHits.position.t", &ffiZDCSiHits_position_t, &b_ffiZDCSiHits_position_t);
   fChain->SetBranchAddress("ffiZDCSiHits.truth.trackID", &ffiZDCSiHits_truth_trackID, &b_ffiZDCSiHits_truth_trackID);
   fChain->SetBranchAddress("ffiZDCSiHits.truth.pdgID", &ffiZDCSiHits_truth_pdgID, &b_ffiZDCSiHits_truth_pdgID);
   fChain->SetBranchAddress("ffiZDCSiHits.truth.deposit", &ffiZDCSiHits_truth_deposit, &b_ffiZDCSiHits_truth_deposit);
   fChain->SetBranchAddress("ffiZDCSiHits.truth.time", &ffiZDCSiHits_truth_time, &b_ffiZDCSiHits_truth_time);
   fChain->SetBranchAddress("ffiZDCSiHits.truth.length", &ffiZDCSiHits_truth_length, &b_ffiZDCSiHits_truth_length);
   fChain->SetBranchAddress("ffiZDCSiHits.truth.x", &ffiZDCSiHits_truth_x, &b_ffiZDCSiHits_truth_x);
   fChain->SetBranchAddress("ffiZDCSiHits.truth.y", &ffiZDCSiHits_truth_y, &b_ffiZDCSiHits_truth_y);
   fChain->SetBranchAddress("ffiZDCSiHits.truth.z", &ffiZDCSiHits_truth_z, &b_ffiZDCSiHits_truth_z);
   fChain->SetBranchAddress("ffiZDCSiHits.energyDeposit", &ffiZDCSiHits_energyDeposit, &b_ffiZDCSiHits_energyDeposit);
   fChain->SetBranchAddress("ffiZDCPbWO4Hits", &ffiZDCPbWO4Hits_, &b_ffiZDCPbWO4Hits_);
   fChain->SetBranchAddress("ffiZDCPbWO4Hits.cellID", &ffiZDCPbWO4Hits_cellID, &b_ffiZDCPbWO4Hits_cellID);
   fChain->SetBranchAddress("ffiZDCPbWO4Hits.flag", &ffiZDCPbWO4Hits_flag, &b_ffiZDCPbWO4Hits_flag);
   fChain->SetBranchAddress("ffiZDCPbWO4Hits.g4ID", &ffiZDCPbWO4Hits_g4ID, &b_ffiZDCPbWO4Hits_g4ID);
   fChain->SetBranchAddress("ffiZDCPbWO4Hits.position.x", &ffiZDCPbWO4Hits_position_x, &b_ffiZDCPbWO4Hits_position_x);
   fChain->SetBranchAddress("ffiZDCPbWO4Hits.position.y", &ffiZDCPbWO4Hits_position_y, &b_ffiZDCPbWO4Hits_position_y);
   fChain->SetBranchAddress("ffiZDCPbWO4Hits.position.z", &ffiZDCPbWO4Hits_position_z, &b_ffiZDCPbWO4Hits_position_z);
   fChain->SetBranchAddress("ffiZDCPbWO4Hits.position.t", &ffiZDCPbWO4Hits_position_t, &b_ffiZDCPbWO4Hits_position_t);
   fChain->SetBranchAddress("ffiZDCPbWO4Hits.truth.trackID", &ffiZDCPbWO4Hits_truth_trackID, &b_ffiZDCPbWO4Hits_truth_trackID);
   fChain->SetBranchAddress("ffiZDCPbWO4Hits.truth.pdgID", &ffiZDCPbWO4Hits_truth_pdgID, &b_ffiZDCPbWO4Hits_truth_pdgID);
   fChain->SetBranchAddress("ffiZDCPbWO4Hits.truth.deposit", &ffiZDCPbWO4Hits_truth_deposit, &b_ffiZDCPbWO4Hits_truth_deposit);
   fChain->SetBranchAddress("ffiZDCPbWO4Hits.truth.time", &ffiZDCPbWO4Hits_truth_time, &b_ffiZDCPbWO4Hits_truth_time);
   fChain->SetBranchAddress("ffiZDCPbWO4Hits.truth.length", &ffiZDCPbWO4Hits_truth_length, &b_ffiZDCPbWO4Hits_truth_length);
   fChain->SetBranchAddress("ffiZDCPbWO4Hits.truth.x", &ffiZDCPbWO4Hits_truth_x, &b_ffiZDCPbWO4Hits_truth_x);
   fChain->SetBranchAddress("ffiZDCPbWO4Hits.truth.y", &ffiZDCPbWO4Hits_truth_y, &b_ffiZDCPbWO4Hits_truth_y);
   fChain->SetBranchAddress("ffiZDCPbWO4Hits.truth.z", &ffiZDCPbWO4Hits_truth_z, &b_ffiZDCPbWO4Hits_truth_z);
   fChain->SetBranchAddress("ffiZDCPbWO4Hits.energyDeposit", &ffiZDCPbWO4Hits_energyDeposit, &b_ffiZDCPbWO4Hits_energyDeposit);
   fChain->SetBranchAddress("ForwardRomanPotHits", &ForwardRomanPotHits_, &b_ForwardRomanPotHits_);
   fChain->SetBranchAddress("ForwardRomanPotHits.cellID", &ForwardRomanPotHits_cellID, &b_ForwardRomanPotHits_cellID);
   fChain->SetBranchAddress("ForwardRomanPotHits.flag", &ForwardRomanPotHits_flag, &b_ForwardRomanPotHits_flag);
   fChain->SetBranchAddress("ForwardRomanPotHits.g4ID", &ForwardRomanPotHits_g4ID, &b_ForwardRomanPotHits_g4ID);
   fChain->SetBranchAddress("ForwardRomanPotHits.position.x", &ForwardRomanPotHits_position_x, &b_ForwardRomanPotHits_position_x);
   fChain->SetBranchAddress("ForwardRomanPotHits.position.y", &ForwardRomanPotHits_position_y, &b_ForwardRomanPotHits_position_y);
   fChain->SetBranchAddress("ForwardRomanPotHits.position.z", &ForwardRomanPotHits_position_z, &b_ForwardRomanPotHits_position_z);
   fChain->SetBranchAddress("ForwardRomanPotHits.position.t", &ForwardRomanPotHits_position_t, &b_ForwardRomanPotHits_position_t);
   fChain->SetBranchAddress("ForwardRomanPotHits.momentum.x", &ForwardRomanPotHits_momentum_x, &b_ForwardRomanPotHits_momentum_x);
   fChain->SetBranchAddress("ForwardRomanPotHits.momentum.y", &ForwardRomanPotHits_momentum_y, &b_ForwardRomanPotHits_momentum_y);
   fChain->SetBranchAddress("ForwardRomanPotHits.momentum.z", &ForwardRomanPotHits_momentum_z, &b_ForwardRomanPotHits_momentum_z);
   fChain->SetBranchAddress("ForwardRomanPotHits.momentum.t", &ForwardRomanPotHits_momentum_t, &b_ForwardRomanPotHits_momentum_t);
   fChain->SetBranchAddress("ForwardRomanPotHits.length", &ForwardRomanPotHits_length, &b_ForwardRomanPotHits_length);
   fChain->SetBranchAddress("ForwardRomanPotHits.truth.trackID", &ForwardRomanPotHits_truth_trackID, &b_ForwardRomanPotHits_truth_trackID);
   fChain->SetBranchAddress("ForwardRomanPotHits.truth.pdgID", &ForwardRomanPotHits_truth_pdgID, &b_ForwardRomanPotHits_truth_pdgID);
   fChain->SetBranchAddress("ForwardRomanPotHits.truth.deposit", &ForwardRomanPotHits_truth_deposit, &b_ForwardRomanPotHits_truth_deposit);
   fChain->SetBranchAddress("ForwardRomanPotHits.truth.time", &ForwardRomanPotHits_truth_time, &b_ForwardRomanPotHits_truth_time);
   fChain->SetBranchAddress("ForwardRomanPotHits.truth.length", &ForwardRomanPotHits_truth_length, &b_ForwardRomanPotHits_truth_length);
   fChain->SetBranchAddress("ForwardRomanPotHits.truth.x", &ForwardRomanPotHits_truth_x, &b_ForwardRomanPotHits_truth_x);
   fChain->SetBranchAddress("ForwardRomanPotHits.truth.y", &ForwardRomanPotHits_truth_y, &b_ForwardRomanPotHits_truth_y);
   fChain->SetBranchAddress("ForwardRomanPotHits.truth.z", &ForwardRomanPotHits_truth_z, &b_ForwardRomanPotHits_truth_z);
   fChain->SetBranchAddress("ForwardRomanPotHits.energyDeposit", &ForwardRomanPotHits_energyDeposit, &b_ForwardRomanPotHits_energyDeposit);
   fChain->SetBranchAddress("ffiZDCSiWHits", &ffiZDCSiWHits_, &b_ffiZDCSiWHits_);
   fChain->SetBranchAddress("ffiZDCSiWHits.cellID", &ffiZDCSiWHits_cellID, &b_ffiZDCSiWHits_cellID);
   fChain->SetBranchAddress("ffiZDCSiWHits.flag", &ffiZDCSiWHits_flag, &b_ffiZDCSiWHits_flag);
   fChain->SetBranchAddress("ffiZDCSiWHits.g4ID", &ffiZDCSiWHits_g4ID, &b_ffiZDCSiWHits_g4ID);
   fChain->SetBranchAddress("ffiZDCSiWHits.position.x", &ffiZDCSiWHits_position_x, &b_ffiZDCSiWHits_position_x);
   fChain->SetBranchAddress("ffiZDCSiWHits.position.y", &ffiZDCSiWHits_position_y, &b_ffiZDCSiWHits_position_y);
   fChain->SetBranchAddress("ffiZDCSiWHits.position.z", &ffiZDCSiWHits_position_z, &b_ffiZDCSiWHits_position_z);
   fChain->SetBranchAddress("ffiZDCSiWHits.position.t", &ffiZDCSiWHits_position_t, &b_ffiZDCSiWHits_position_t);
   fChain->SetBranchAddress("ffiZDCSiWHits.truth.trackID", &ffiZDCSiWHits_truth_trackID, &b_ffiZDCSiWHits_truth_trackID);
   fChain->SetBranchAddress("ffiZDCSiWHits.truth.pdgID", &ffiZDCSiWHits_truth_pdgID, &b_ffiZDCSiWHits_truth_pdgID);
   fChain->SetBranchAddress("ffiZDCSiWHits.truth.deposit", &ffiZDCSiWHits_truth_deposit, &b_ffiZDCSiWHits_truth_deposit);
   fChain->SetBranchAddress("ffiZDCSiWHits.truth.time", &ffiZDCSiWHits_truth_time, &b_ffiZDCSiWHits_truth_time);
   fChain->SetBranchAddress("ffiZDCSiWHits.truth.length", &ffiZDCSiWHits_truth_length, &b_ffiZDCSiWHits_truth_length);
   fChain->SetBranchAddress("ffiZDCSiWHits.truth.x", &ffiZDCSiWHits_truth_x, &b_ffiZDCSiWHits_truth_x);
   fChain->SetBranchAddress("ffiZDCSiWHits.truth.y", &ffiZDCSiWHits_truth_y, &b_ffiZDCSiWHits_truth_y);
   fChain->SetBranchAddress("ffiZDCSiWHits.truth.z", &ffiZDCSiWHits_truth_z, &b_ffiZDCSiWHits_truth_z);
   fChain->SetBranchAddress("ffiZDCSiWHits.energyDeposit", &ffiZDCSiWHits_energyDeposit, &b_ffiZDCSiWHits_energyDeposit);
   fChain->SetBranchAddress("ffiZDCSiPbHits", &ffiZDCSiPbHits_, &b_ffiZDCSiPbHits_);
   fChain->SetBranchAddress("ffiZDCSiPbHits.cellID", &ffiZDCSiPbHits_cellID, &b_ffiZDCSiPbHits_cellID);
   fChain->SetBranchAddress("ffiZDCSiPbHits.flag", &ffiZDCSiPbHits_flag, &b_ffiZDCSiPbHits_flag);
   fChain->SetBranchAddress("ffiZDCSiPbHits.g4ID", &ffiZDCSiPbHits_g4ID, &b_ffiZDCSiPbHits_g4ID);
   fChain->SetBranchAddress("ffiZDCSiPbHits.position.x", &ffiZDCSiPbHits_position_x, &b_ffiZDCSiPbHits_position_x);
   fChain->SetBranchAddress("ffiZDCSiPbHits.position.y", &ffiZDCSiPbHits_position_y, &b_ffiZDCSiPbHits_position_y);
   fChain->SetBranchAddress("ffiZDCSiPbHits.position.z", &ffiZDCSiPbHits_position_z, &b_ffiZDCSiPbHits_position_z);
   fChain->SetBranchAddress("ffiZDCSiPbHits.position.t", &ffiZDCSiPbHits_position_t, &b_ffiZDCSiPbHits_position_t);
   fChain->SetBranchAddress("ffiZDCSiPbHits.truth.trackID", &ffiZDCSiPbHits_truth_trackID, &b_ffiZDCSiPbHits_truth_trackID);
   fChain->SetBranchAddress("ffiZDCSiPbHits.truth.pdgID", &ffiZDCSiPbHits_truth_pdgID, &b_ffiZDCSiPbHits_truth_pdgID);
   fChain->SetBranchAddress("ffiZDCSiPbHits.truth.deposit", &ffiZDCSiPbHits_truth_deposit, &b_ffiZDCSiPbHits_truth_deposit);
   fChain->SetBranchAddress("ffiZDCSiPbHits.truth.time", &ffiZDCSiPbHits_truth_time, &b_ffiZDCSiPbHits_truth_time);
   fChain->SetBranchAddress("ffiZDCSiPbHits.truth.length", &ffiZDCSiPbHits_truth_length, &b_ffiZDCSiPbHits_truth_length);
   fChain->SetBranchAddress("ffiZDCSiPbHits.truth.x", &ffiZDCSiPbHits_truth_x, &b_ffiZDCSiPbHits_truth_x);
   fChain->SetBranchAddress("ffiZDCSiPbHits.truth.y", &ffiZDCSiPbHits_truth_y, &b_ffiZDCSiPbHits_truth_y);
   fChain->SetBranchAddress("ffiZDCSiPbHits.truth.z", &ffiZDCSiPbHits_truth_z, &b_ffiZDCSiPbHits_truth_z);
   fChain->SetBranchAddress("ffiZDCSiPbHits.energyDeposit", &ffiZDCSiPbHits_energyDeposit, &b_ffiZDCSiPbHits_energyDeposit);
   fChain->SetBranchAddress("ffiZDCScintHits", &ffiZDCScintHits_, &b_ffiZDCScintHits_);
   fChain->SetBranchAddress("ffiZDCScintHits.cellID", &ffiZDCScintHits_cellID, &b_ffiZDCScintHits_cellID);
   fChain->SetBranchAddress("ffiZDCScintHits.flag", &ffiZDCScintHits_flag, &b_ffiZDCScintHits_flag);
   fChain->SetBranchAddress("ffiZDCScintHits.g4ID", &ffiZDCScintHits_g4ID, &b_ffiZDCScintHits_g4ID);
   fChain->SetBranchAddress("ffiZDCScintHits.position.x", &ffiZDCScintHits_position_x, &b_ffiZDCScintHits_position_x);
   fChain->SetBranchAddress("ffiZDCScintHits.position.y", &ffiZDCScintHits_position_y, &b_ffiZDCScintHits_position_y);
   fChain->SetBranchAddress("ffiZDCScintHits.position.z", &ffiZDCScintHits_position_z, &b_ffiZDCScintHits_position_z);
   fChain->SetBranchAddress("ffiZDCScintHits.position.t", &ffiZDCScintHits_position_t, &b_ffiZDCScintHits_position_t);
   fChain->SetBranchAddress("ffiZDCScintHits.truth.trackID", &ffiZDCScintHits_truth_trackID, &b_ffiZDCScintHits_truth_trackID);
   fChain->SetBranchAddress("ffiZDCScintHits.truth.pdgID", &ffiZDCScintHits_truth_pdgID, &b_ffiZDCScintHits_truth_pdgID);
   fChain->SetBranchAddress("ffiZDCScintHits.truth.deposit", &ffiZDCScintHits_truth_deposit, &b_ffiZDCScintHits_truth_deposit);
   fChain->SetBranchAddress("ffiZDCScintHits.truth.time", &ffiZDCScintHits_truth_time, &b_ffiZDCScintHits_truth_time);
   fChain->SetBranchAddress("ffiZDCScintHits.truth.length", &ffiZDCScintHits_truth_length, &b_ffiZDCScintHits_truth_length);
   fChain->SetBranchAddress("ffiZDCScintHits.truth.x", &ffiZDCScintHits_truth_x, &b_ffiZDCScintHits_truth_x);
   fChain->SetBranchAddress("ffiZDCScintHits.truth.y", &ffiZDCScintHits_truth_y, &b_ffiZDCScintHits_truth_y);
   fChain->SetBranchAddress("ffiZDCScintHits.truth.z", &ffiZDCScintHits_truth_z, &b_ffiZDCScintHits_truth_z);
   fChain->SetBranchAddress("ffiZDCScintHits.energyDeposit", &ffiZDCScintHits_energyDeposit, &b_ffiZDCScintHits_energyDeposit);
   Notify();
}

Bool_t events::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void events::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t events::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef events_cxx
