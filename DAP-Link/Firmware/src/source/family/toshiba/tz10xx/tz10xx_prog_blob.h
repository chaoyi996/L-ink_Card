/* Flash OS Routines (Automagically Generated)
 * Copyright (c) 2009-2019 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

static const uint32_t tz10xx_flash_prog_blob[] = {
    0xE00ABE00, 0x062D780D, 0x24084068, 0xD3000040, 0x1E644058, 0x1C49D1FA, 0x2A001E52, 0x4770D1F2,
    0x43f8e92d, 0xf44f2206, 0xf44f7144, 0xf0007080, 0xbb20f938, 0x7480f44f, 0xf44f00a5, 0xf44f52fa, 
    0xf04f760c, 0xf04f0c01, 0xf04f0800, 0x270f2340, 0x629c2005, 0x631e62dd, 0x0100f8c3, 0xc034f8c3, 
    0x50faf44f, 0x10a0f8d3, 0x0f01f011, 0xb158d00a, 0x70a0f8c3, 0x0200f8d3, 0x46409000, 0x2001b130, 
    0x83f8e8bd, 0xd1ed1e40, 0xe7f74660, 0xf0109800, 0xd1010f02, 0xd1db1e52, 0xe8bd2000, 0x49ad83f8, 
    0xf8c12000, 0x2a030154, 0xf04fd103, 0x20012140, 0x20006508, 0x20004770, 0xe92d4770, 0xf7ff45f8, 
    0x2800ffaf, 0x2060bf08, 0xbf00d12f, 0xd1fc1e40, 0xf44f22c7, 0xf44f7144, 0xf0007080, 0xbb20f8e2, 
    0xf44f2200, 0x00a57480, 0x760cf44f, 0x0c01f04f, 0xf04f4692, 0x270f2340, 0x7810f242, 0x629c2005, 
    0x631e62dd, 0x0100f8c3, 0xc034f8c3, 0x50faf44f, 0x10a0f8d3, 0x0f01f011, 0xb158d00a, 0x70a0f8c3, 
    0x0200f8d3, 0x46509000, 0x2001b130, 0x85f8e8bd, 0xd1ed1e40, 0xe7f74660, 0xf0109800, 0xbf180f01, 
    0x60e0f642, 0xbf00d005, 0xd1fc1e40, 0x45421c52, 0x2000dbd4, 0x85f8e8bd, 0x4604b510, 0xff60f7ff, 
    0xbf082800, 0xd1102160, 0x1e49bf00, 0xba20d1fc, 0x0220f040, 0xf44f4978, 0xf0007080, 0xb920f892, 
    0xf8aaf000, 0xbf082800, 0x2001bd10, 0xe92dbd10, 0x461543f8, 0x4606460c, 0xff42f7ff, 0xd17a2800, 
    0x2c40f04f, 0x7780f44f, 0xf8cc2135, 0x00b87028, 0x002cf8cc, 0x720cf44f, 0x2030f8cc, 0x1100f8cc, 
    0xf8cc2201, 0xf44f2034, 0xf8dc51fa, 0xf01330a0, 0xd00a0f01, 0x210fb159, 0x10a0f8cc, 0x1200f8dc, 
    0x21009100, 0xd1562900, 0x1e49e003, 0x4611d1ed, 0x9900e7f8, 0x8164f8df, 0x0f02f011, 0x0101f1a4, 
    0x6101ea48, 0xf44fd00b, 0xf8cc7381, 0xf8cc3028, 0xf8cc002c, 0xba301030, 0x0032f040, 0xf8cce008, 
    0xf8cc7028, 0xf8cc002c, 0xba301030, 0x0002f040, 0x0100f8cc, 0xf0242000, 0x2c000103, 0xf020d907, 
    0x4e470303, 0x503358eb, 0x42841d00, 0x42a1d8f7, 0xf021d006, 0xf1010003, 0x58282140, 0x0200f8c1, 
    0xd2082ce0, 0xeba02008, 0xeb001054, 0x00800040, 0x1e40bf00, 0xf8ccd1fc, 0xf44f2034, 0xf8dc50fa, 
    0xf01110a0, 0xd0090f02, 0xf000b128, 0x2800f825, 0xe8bdbf08, 0x200183f8, 0x83f8e8bd, 0xd1ee1e40, 
    0xf04fe7f9, 0x62982340, 0x62d81518, 0xf8c36319, 0x20012100, 0xf44f6358, 0xf8d350fa, 0xf01110a0, 
    0xd0050f02, 0x200fb130, 0x00a0f8c3, 0x47702000, 0xd1f21e40, 0x47702001, 0x01f8e92d, 0x7480f44f, 
    0xf44f00a5, 0xf44f52fa, 0xf04f760c, 0xf04f0c01, 0xf04f0800, 0x270f2340, 0x629c2005, 0x631e62dd, 
    0x0100f8c3, 0xc034f8c3, 0x50faf44f, 0x10a0f8d3, 0x0f01f011, 0xb160d00b, 0x70a0f8c3, 0x0200f8d3, 
    0x46409000, 0xe8bdb138, 0x200101f8, 0x1e404770, 0x4660d1ec, 0x9800e7f6, 0x0f01f010, 0x2000bf18, 
    0x1c40d004, 0xdbfc2864, 0xd1d51e52, 0x01f8e8bd, 0x47702000, 0x4004a000, 0x00030310, 0x00030330, 
    0x40004200, 0x00000000, 
};

/**
* List of start and size for each size of flash sector
* The size will apply to all sectors between the listed address and the next address
* in the list.
* The last pair in the list will have sectors starting at that address and ending
* at address start + size.
*/
static const sector_info_t sectors_info[] = {
    {0, 1024},
};

static const program_target_t flash = {
    0x2000009F, // Init
    0x200000B7, // UnInit
    0x200000BB, // EraseChip
    0x20000159, // EraseSector
    0x2000018F, // ProgramPage
    0x0,        // Verify
    
    // BKPT : start of blob + 1
    // RSB  : blob start + header + rw data offset
    // RSP  : stack pointer
    {
        0x20000000 + 0x00000001,
        0x20000000 + 0x00000020 + 0x00000344,
        0x20000800
    },

    0x20000000 + 0x00000A00,   // mem buffer location
    0x20000000,                // location to write prog_blob in target RAM
    sizeof(tz10xx_flash_prog_blob), // prog_blob size
    tz10xx_flash_prog_blob,         // address of prog_blob
    0x00000100                 // ram_to_flash_bytes_to_be_written
};
