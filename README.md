Dgdollartest2 integration/staging tree
================================

http://www.dgdollartest2.org

Copyright (c) 2009-2013 Dgdollartest2 Developers
Copyright (c) 2011-2013 Dgdollartest2 Developers

What is Dgdollartest2?
----------------

Dgdollartest2 is a lite version of Dgdollartest2 using scrypt as a proof-of-work algorithm.
 - 2.5 minute block targets
 - subsidy halves in 840k blocks (~4 years)
 - ~84 million total coins

The rest is the same as Dgdollartest2.
 - 50 coins per block
 - 2016 blocks to retarget difficulty

For more information, as well as an immediately useable, binary version of
the Dgdollartest2 client sofware, see http://www.dgdollartest2.org.

License
-------

Dgdollartest2 is released under the terms of the MIT license. See `COPYING` for more
information or see http://opensource.org/licenses/MIT.

Development process
-------------------

Developers work in their own trees, then submit pull requests when they think
their feature or bug fix is ready.

If it is a simple/trivial/non-controversial change, then one of the Dgdollartest2
development team members simply pulls it.

If it is a *more complicated or potentially controversial* change, then the patch
submitter will be asked to start a discussion (if they haven't already) on the
[mailing list](http://sourceforge.net/mailarchive/forum.php?forum_name=dgdollartest2-development).

The patch will be accepted if there is broad consensus that it is a good thing.
Developers should expect to rework and resubmit patches if the code doesn't
match the project's coding conventions (see `doc/coding.txt`) or are
controversial.

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/dgdollartest2/dgdollartest2/tags) are created
regularly to indicate new official, stable release versions of Dgdollartest2.

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test. Please be patient and help out, and
remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write unit tests for new code, and to
submit new unit tests for old code.

Unit tests for the core code are in `src/test/`. To compile and run them:

    cd src; make -f makefile.unix test

Unit tests for the GUI code are in `src/qt/test/`. To compile and run them:

    qmake DGDOLLARTEST2_QT_TEST=1 -o Makefile.test dgdollartest2-qt.pro
    make -f Makefile.test
    ./dgdollartest2-qt_test

