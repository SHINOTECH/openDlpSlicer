/*Copyright Sebastien Tricoire (29/05/2011)

3dsman@free.fr

This software is a computer program whose purpose is to slice 3d models in realtime and control hardware of a dlp 3d printer.
You can find more information here: http://forum.allinbox.com/aspectgeek/AutresElectronique/3dprint-logiciel-slicer-sujet_8661_1.htm

This software is governed by the CeCILL license under French law and
abiding by the rules of distribution of free software.  You can  use,
modify and/or redistribute the software under the terms of the CeCILL
license as circulated by CEA, CNRS and INRIA at the following URL
"http://www.cecill.info".

As a counterpart to the access to the source code and  rights to copy,
modify and redistribute granted by the license, users are provided only
with a limited warranty  and the software's author,  the holder of the
economic rights,  and the successive licensors  have only  limited
liability.

In this respect, the user's attention is drawn to the risks associated
with loading,  using,  modifying and/or developing or reproducing the
software by the user in light of its specific status of free software,
that may mean  that it is complicated to manipulate,  and  that  also
therefore means  that it is reserved for developers  and  experienced
professionals having in-depth computer knowledge. Users are therefore
encouraged to load and test the software's suitability as regards their
requirements in conditions enabling the security of their systems and/or
data to be ensured and,  more generally, to use and operate it in the
same conditions as regards security.

The fact that you are presently reading this means that you have had
knowledge of the CeCILL license and that you accept its terms.
*/


#ifndef PREFS_H
#define PREFS_H

//#define TIXML_USE_STL
#include <string>

#include "OBJFile.h"
using namespace std;
class Prefs
{
    public:
        Prefs();
        ~Prefs();
        bool Load();
        bool Save();
        void SetThickness(float value);
        void SetSpeed(float value);
        void SetRatio(float value);
        float GetThickness();
        float GetExposure();
        Coord GetVolume();
        string GetCommand();
        int GetSteps();
    protected:
        void Init_params();
        float Thickness;
        float Exposure;
        Coord Volume;
        string Command;
        int Steps;
};

#endif // MESH_H
