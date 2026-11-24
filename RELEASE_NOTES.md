# BreathOfFire4 Recompiled release notes

## v0.1.0 - first release (SLES-03552, Europe)

- **16:9 widescreen** (3D game mode with screen-X culling hooks, so polygons outside the old 4:3 area are drawn).
- **60 fps** instead of PAL 50 Hz (PAL timing is forced to NTSC 60 Hz; `PSX_FORCE_60HZ=0` restores 50 Hz).

Only the very beginning of the game was tested; widescreen glitches may still exist.

Save states from other builds do not load. Native memory-card saves are unaffected.
