/*
 * @file rigid_body.h 
 * @Basic rigid_body class.
 * @author Tianxiang Zhang
 * 
 * This file is part of Physika, a versatile physics simulation library.
 * Copyright (C) 2013 Physika Group.
 *
 * This Source Code Form is subject to the terms of the GNU General Public License v2.0. 
 * If a copy of the GPL was not distributed with this file, you can obtain one at:
 * http://www.gnu.org/licenses/gpl-2.0.html
 *
 */

#ifndef PHYSIKA_DYNAMICS_RIGID_BODY_RIGID_BODY_H_
#define PHYSIKA_DYNAMICS_RIGID_BODY_RIGID_BODY_H_

#include "Physika_Core/Transform/transform.h"

namespace Physika{

template <typename Scalar,int Dim> class CollidableObject;
template <typename Scalar,int Dim> class Vector;
template <typename Scalar> class SurfaceMesh;

template <typename Scalar,int Dim>
class RigidBody
{
public:
	//constructors && deconstructors
	RigidBody();
	virtual ~RigidBody();
protected:
	//basic properties of a rigid body
	Transform<double>* transform_;
	Scalar mass_;
	bool is_fixed_;
	
};

} //end of namespace Physika

#endif //PHYSIKA_DYNAMICS_RIGID_BODY_RIGID_BODY_H_