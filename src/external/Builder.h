/*
#
#  Copyright 2013-present Roman Kushnarenko
#  Licensed under the Apache License, Version 2.0 (the 'License')
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#  http://www.apache.org/licenses/LICENSE-2.0
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an 'AS IS' BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.
#  https://github.com/sromku/polygon-contains-point
#
#
#   The 2D polygon. <br>
#   @see {@link Builder}
#   @author Roman Kushnarenko (sromku@gmail.com)
#*/

#ifndef BUILDER_H
#define BUILDER_H

#include <vector>
#include "external/BoundingBox.h"
#include "external/ExternalLine.h"
#include "external/ExternalPoint.h"
#include "external/ExternalPolygon.h"

using std::vector;

class Builder {
public:
    Builder();
    Builder addVertex(ExternalPoint);
    void updateBoundingBox(ExternalPoint);
//    Builder * close();
    ExternalPolygon build();

private:
    void validate();
    vector<ExternalPoint> vertexes;
    vector<ExternalLine> sides;
    BoundingBox boundingBox;
    bool firstPoint;
    bool isClosed;
};

#endif  // BUILDER_H
