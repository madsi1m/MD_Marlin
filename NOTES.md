# Notes

## Settings

```
Send: M503
Recv: echo:  G21    ; Units in mm (mm)
Recv: echo:  M149 C ; Units in Celsius
Recv: 
Recv: echo:; Filament settings: Disabled
Recv: echo:  M200 D1.75
Recv: echo:  M200 D0
Recv: echo:; Steps per unit:
Recv: echo: M92 X80.00 Y80.00 Z400.00 E410.00
Recv: echo:; Maximum feedrates (units/s):
Recv: echo:  M203 X100.00 Y100.00 Z12.00 E120.00
Recv: echo:; Maximum Acceleration (units/s2):
Recv: echo:  M201 X800.00 Y800.00 Z100.00 E5000.00
Recv: echo:; Acceleration (units/s2): P<print_accel> R<retract_accel> T<travel_accel>
Recv: echo:  M204 P800.00 R1000.00 T800.00
Recv: echo:; Advanced: B<min_segment_time_us> S<min_feedrate> T<min_travel_feedrate> J<junc_dev>
Recv: echo:  M205 B20000.00 S0.00 T0.00 J0.10
Recv: echo:; Home offset:
Recv: echo:  M206 X0.00 Y0.00 Z0.00
Recv: echo:; Auto Bed Leveling:
Recv: echo:  M420 S1 Z1.00
Recv: echo:  G29 W I0 J0 Z-0.18500
Recv: echo:  G29 W I1 J0 Z-0.17750
Recv: echo:  G29 W I2 J0 Z-0.15000
Recv: echo:  G29 W I3 J0 Z-0.14500
Recv: echo:  G29 W I4 J0 Z-0.10000
Recv: echo:  G29 W I0 J1 Z-0.11500
Recv: echo:  G29 W I1 J1 Z-0.10500
Recv: echo:  G29 W I2 J1 Z-0.10000
Recv: echo:  G29 W I3 J1 Z-0.09000
Recv: echo:  G29 W I4 J1 Z-0.02750
Recv: echo:  G29 W I0 J2 Z0.01500
Recv: echo:  G29 W I1 J2 Z0.01250
Recv: echo:  G29 W I2 J2 Z0.01500
Recv: echo:  G29 W I3 J2 Z-0.00500
Recv: echo:  G29 W I4 J2 Z0.04750
Recv: echo:  G29 W I0 J3 Z0.09750
Recv: echo:  G29 W I1 J3 Z0.10000
Recv: echo:  G29 W I2 J3 Z0.17500
Recv: echo:  G29 W I3 J3 Z0.10750
Recv: echo:  G29 W I4 J3 Z0.17500
Recv: echo:  G29 W I0 J4 Z0.28000
Recv: echo:  G29 W I1 J4 Z0.25250
Recv: echo:  G29 W I2 J4 Z0.23750
Recv: echo:  G29 W I3 J4 Z0.23750
Recv: echo:  G29 W I4 J4 Z0.27000
Recv: echo:; Material heatup parameters:
Recv: echo:  M145 S0 H140 B65 F0
Recv: echo:  M145 S1 H215 B65 F0
Recv: echo:; PID settings:
Recv: echo:  M301 P21.73 I1.54 D76.55
Recv: echo:; Z-Probe Offset (mm):
Recv: echo:  M851 X-44.00 Y-4.00 Z-3.38
Recv: echo:; Stepper driver current:
Recv: echo:  M906 X580 Y580 Z580
Recv: echo:  M906 T0 E650
Recv: 
Recv: echo:; Hybrid Threshold:
Recv: echo:  M913 X100 Y100 Z10
Recv: echo:  M913 T0 E272
Recv: 
Recv: echo:; Driver stepping mode:
Recv: echo:  M569 S1 X Y Z
Recv: echo:  M569 S1 T0 E
Recv: echo:; Linear Advance:
Recv: echo:  M900 K0.00
Recv: echo:; Filament load/unload lengths:
Recv: echo:  M603 L350.00 U400.00
Recv: ok
```

## Merge with upstream

```
git remote add upstream https://github.com/MarlinFirmware/Marlin.git

git fetch upstream
git merge upstream/bugfix-2.0.x
```
