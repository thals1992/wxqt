/* Geodesy by Mike Gavaghan
 *
 * http://www.gavaghan.org/blog/free-source-code/geodesy-library-vincentys-formula/
 *
 * This code may be freely used and modified on any personal or professional
 * project.  It comes with no warranty.
 *
 * BitCoin tips graciously accepted at 1FB63FYQMy7hpC2ANVhZ5mSgAZEtY1aVLf
 */

#ifndef EXTERNALGEODETICCURVE_H
#define EXTERNALGEODETICCURVE_H

class ExternalGeodeticCurve {
public:
    ExternalGeodeticCurve(double, double, double);
    double ellipsoidalDistance;
    double azimuth;
    double reverseAzimuth;
};

#endif  // EXTERNALGEODETICCURVE_H