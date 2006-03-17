ZEXALL results for hardware z80 (zx-spectrum)

<adc,sbc> hl,<bc,de,hl,sp>...OK
add hl,<bc,de,hl,sp>.........OK
add ix,<bc,de,ix,sp>.........OK
add iy,<bc,de,iy,sp>.........OK
aluop a,nn...................OK
aluop a,<b,c,d,e,h,l,(hl),a>.   CRC:1dfd7864 expected:06c7aa8e
aluop a,<ixh,ixl,iyh,iyl>....OK
aluop a,(<ix,iy>+1)..........   CRC:52185ea5 expected:d3f2d74a
bit n,(<ix,iy>+1)............   CRC:e1d4a896 expected:83534ee1
bit n,<b,c,d,e,h,l,(hl),a>...   CRC:f554d742 expected:5e020e98
cpd<r>.......................   CRC:d06b9c15 expected:134b622d
cpi<r>.......................   CRC:683e7b2a expected:2da42d19
<daa,cpl,scf,ccf>............OK
<inc,dec> a..................OK
<inc,dec> b..................OK
<inc,dec> bc.................OK
<inc,dec> c..................OK
<inc,dec> d..................OK
<inc,dec> de.................OK
<inc,dec> e..................OK
<inc,dec> h..................OK
<inc,dec> hl.................OK
<inc,dec> ix.................OK
<inc,dec> iy.................OK
<inc,dec> l..................OK
<inc,dec> (hl)...............   CRC:1ca0ece9 expected:28295ece
<inc,dec> sp.................OK
<inc,dec> (<ix,iy>+1)........   CRC:ff601665 expected:0b95a8ea
<inc,dec> ixh................OK
<inc,dec> ixl................OK
<inc,dec> iyh................OK
<inc,dec> iyl................OK
ld <bc,de>,(nnnn)............OK
ld hl,(nnnn).................OK
ld sp,(nnnn).................OK
ld <ix,iy>,(nnnn)............OK
ld (nnnn),<bc,de>............OK
ld (nnnn),hl.................OK
ld (nnnn),sp.................OK
ld (nnnn),<ix,iy>............OK
ld <bc,de,hl,sp>,nnnn........OK
ld <ix,iy>,nnnn..............OK
ld a,<(bc),(de)>.............   CRC:3bc66a71 expected:b0818935
ld <b,c,d,e,h,l,(hl),a>,nn...OK
ld (<ix,iy>+1),nn............   CRC:e80cff11 expected:26db477e
ld <b,c,d,e>,(<ix,iy>+1).....   CRC:360f0182 expected:cc1106a8
ld <h,l>,(<ix,iy>+1).........   CRC:b7ba0c9c expected:fa2a4d03
ld a,(<ix,iy>+1).............   CRC:e75a1e63 expected:a5e9ac64
ld <ixh,ixl,iyh,iyl>,nn......OK
ld <bcdehla>,<bcdehla>.......   CRC:437589be expected:744b0118
ld <bcdexya>,<bcdexya>.......   CRC:f163ae1a expected:478ba36b
ld a,(nnnn) / ld (nnnn),a....OK
ldd<r> (1)...................   CRC:39e295ed expected:94f42769
ldd<r> (2)...................   CRC:94cb8f65 expected:39dd3de1
ldi<r> (1)...................   CRC:5a940255 expected:f782b0d1
ldi<r> (2)...................   CRC:44fc622a expected:e9ead0ae
neg..........................OK
<rrd,rld>....................   CRC:1bbc0551 expected:ff823e77
<rlca,rrca,rla,rra>..........OK
shf/rot (<ix,iy>+1)..........   CRC:4c0653f1 expected:710034cb
shf/rot <b,c,d,e,h,l,(hl),a>.   CRC:36bc1fc3 expected:a4255833
<set,res> n,<bcdehl(hl)a>....   CRC:775e8975 expected:8b57f008
<set,res> n,(<ix,iy>+1)......   CRC:fa9f51d4 expected:cc63f98a
ld (<ix,iy>+1),<b,c,d,e>.....   CRC:dc962025 expected:04626abf
ld (<ix,iy>+1),<h,l>.........   CRC:278ac9ae expected:6a1a8831
ld (<ix,iy>+1),a.............   CRC:d1022a13 expected:ccbe5a96
ld (<bc,de>),a...............   CRC:19caed2f expected:7a4c114f
Tests complete
