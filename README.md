Soundcoin integration/staging tree
================================

![Soundcoin Logo](https://raw.githubusercontent.com/dakk/soundcoin/master-0.8/share/pixmaps/bitcoin128.png)


Copyright (c) 2009-2014 Bitcoin Developers<br>
Copyright (c) 2011-2014 Litecoin Developers<br>
Copyright (c) 2014 Soundcoin Developers<br>


What is Soundcoin?
----------------

Soundcoin is a lite version of Bitcoin using scrypt as a proof-of-work algorithm,
with some different parameters.
 - 3 minute block targets
 - subsidy halves in 840k blocks (~4 years)
 - ~500 million total coins
 - 1000 coins per block
 - 1440 blocks to retarget difficulty



License
-------

Soundcoin is released under the terms of the MIT license. See `COPYING` for more
information or see http://opensource.org/licenses/MIT.


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

    qmake BITCOIN_QT_TEST=1 -o Makefile.test soundcoin-qt.pro
    make -f Makefile.test
    ./soundcoin-qt_test

