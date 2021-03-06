# github.com/ALTUSNETS\

/*
 * README.android describes in high-level the LLVM changes that we cannot push
 * upstream to the llvm.org repository:
 *  - Changes due to Android's build system.
 *  - Changes due to Android's toolchain.
 *  - Changes due to the limitations in Android-based consumer electronics.
 *
 * Some of them are to-dos. If and when they are done, there will no longer be
 * merge conflicts with upstream on those parts.
 *
 * The file contains useful hints when we try to resolve future 3-way merge
 * conflicts.
 */

* For Honeycomb: Synced to upstream r112347
* For Honeycomb MR1: Synced to upstream r119349
* For Honeycomb MR2: Synced to upstream r119349
* For Ice Cream Sandwich: Synced to upstream r135574
* For Ice Cream Sandwich MR1: Synced to upstream r142531
* For Ice Cream Sandwich MR2: Synced to upstream r146715
* For Jellybean: Synced to upstream r155088
* For Jellybean MR1: Synced to upstream r162325
* For Jellybean MR2: Synced to upstream r177345
* For Key Lime Pie: Synced to upstream r187914

* Recent downstreaming on 2013/8/8: Synced to r187914 (Contact srhines for merge questions.)
* Recent downstreaming on 2013/6/13: Synced to r183849 (Contact srhines for merge questions.)
* Recent downstreaming on 2013/5/3: Synced to r180944 (Contact srhines for merge questions.)
* Recent downstreaming on 2013/3/18: Synced to r177345 (Contact srhines for merge questions.)
* Recent downstreaming on 2013/3/5: Synced to r176138 (Contact srhines for merge questions.)
* Recent downstreaming on 2013/1/8: Synced to r171906 (Contact srhines for merge questions.)
* Recent downstreaming on 2012/8/23: Synced to r162325 (srhines for merge questions)
* Recent downstreaming on 2012/8/3: Synced to r160673 (sliao for merge questions)
* Recent downstreaming on 2012/4/24: Synced to r155088 (sliao for merge questions)
* Recent downstreaming on 2012/3/24: Synced to r153220 (sliao & srhines for merge questions)
* Recent downstreaming on 2012/3/5: Synced to r152062 (srhines & sliao for merge questions)
* Recent downstreaming on 2011/12/17: Synced to r146715 (loganchien & sliao for merge questions)
* Recent downstreaming on 2011/11/26: Synced to r145117 (loganchien & sliao for merge questions)
* Recent downstreaming on 2011/11/17: Synced to r144605 (loganchien & sliao for merge questions)
* Recent downstreaming on 2011/11/14: Synced to r144355 (srhines for merge questions)
* Recent downstreaming on 2011/10/22: Synced to r142531 (sliao & loganchien for merge questions)
* Recent downstreaming on 2011/7/21:  Synced to r135574 (sliao & loganchien for merge questions)
* Recent downstreaming on 2011/7/18:  Synced to r135359 (sliao for merge questions)
* Recent downstreaming on 2011/7/2:   Synced to r134305 (sliao for merge questions)
* Recent downstreaming on 2011/6/30:  Synced to r133721 (sliao for merge questions)
* Recent downstreaming on 2011/6/22:  Synced to r133163 (sliao for merge questions)
* Recent downstreaming on 2011/4/8:   Synced to r129173 (sliao for merge questions)
* Recent downstreaming on 2011/3/11:  Synced from r119349 to r127120 (sliao for merge questions)

* We add Android's *.mk files that are specific to Android's build system.

* Changes for enabling both host and device builds.

