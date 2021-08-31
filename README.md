# trd_rec
EIC GEM TRD reconstruction and analysis using ML and AI

## Links

- [Documentation site](https://doc.athena-eic.org/en/latest/)
- [Tutorial](https://eic.phy.anl.gov/tutorials/eic_tutorial/getting-started/quickstart/)
- [Detailed GEM TRD MR](https://eicweb.phy.anl.gov/EIC/detectors/athena/-/merge_requests/123)
- [GPS (particle gun](https://geant4-userdoc.web.cern.ch/UsersGuides/ForApplicationDeveloper/html/GettingStarted/generalParticleSource.html)
- [Containers](https://hub.docker.com/r/eicweb/jug_xl/tags?page=1&ordering=last_updated)


```bash
git clone -b 59-detailed-forward-gem-trd https://eicweb.phy.anl.gov/EIC/detectors/athena.git
git clone https://eicweb.phy.anl.gov/EIC/detectors/ip6.git
ln -s ../ip6/ip6 athena/ip6
ln -s ../ip6/ip6 athena/ip6

cd 
cmake -B build -S . -DCMAKE_INSTALL_PREFIX=$ATHENA_PREFIX -DCMAKE_CXX_STANDARD=17
cmake --build build -j4 -- install
```

## To start work

- Know how geometry, everything is defined 
   - simplified xml file is below
   - ce_ecal_crystal_glass.xml
   
- Generate some events (particle gun, no event display)
   ```
   npsim --runType run --compactFile gemtrd_athena.xml --random.seed 1 --macro macro/gemtrd_gps.mac --outputFile test.root --enableG4GPS
   ```

- Display geometry (and events maybe)
    - Web display:
       ```
       dd_web_display athena/cal_athena.xml
       ```
    - Geant4 event display (from athena directory)
       ```
       npsim --runType vis --compactFile gemtrd_athena.xml --random.seed 1 --macro macro/gemtrd_vis.mac --outputFile test.root --enableG4GPS --enableQtUI
       ```
- How to process the events


### npsim explanation

```bash
npsim 
   --runType vis                      # enables event display, --runType run - no event display
   --compactFile gemtrd_athena.xml    # detector file 
   --random.seed 1                    # the random seed
   --macro macro/forward_trd_vis.mac  # Geant4 macro file
   --outputFile test.root             # Output file name with events
   --enableG4GPS                      # Enable particle gun inside geant
   --enableQtUI                       # Switches to QT event display
```

## XML model

Global definitions live in `compact/definitions.xml`

## Commands

Look at variables (search a variable and look at its value)

```bash
npdet_info search RICH --value gemtrd_athena.xml
```

## Root browser

```bash
root
> TBrowser tb

```