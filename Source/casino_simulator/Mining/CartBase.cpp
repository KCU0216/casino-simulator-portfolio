// Portfolio excerpt: selected integration code from the team project.
// This file contains excerpts and is not a standalone translation unit.

// Original source lines 87-97
	FVector ToTarget = *TargetLocation - GetActorLocation();
	ToTarget.Z = 0.0f;

	FVector CurrentVelocity = CartMesh->GetPhysicsLinearVelocity();
	CurrentVelocity.Z = 0.0f;

	const FVector SpringForce = ToTarget * CarrySpringStrength;
	const FVector DampingForce = -CurrentVelocity * CarryDampingStrength;
	const FVector CarryForce = (SpringForce + DampingForce).GetClampedToMaxSize(MaxCarryForce);

	CartMesh->AddForce(CarryForce);
