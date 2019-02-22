#pragma once

#include "CoreMinimal.h"

/**
 * Helpers relating to the world
 */
namespace Helpers {
	class CUBICVOXEL_API WorldHelpers
	{
	public:

		static const int chunkXY = 16;
		static const int chunkZ = 256;
		static const int chunksX = 4;
		static const int chunksY = 4;

		WorldHelpers() = default;
		~WorldHelpers() = default;

		static int VectorToIndex(FIntVector vector);

		static FIntVector IndexToVector(int index);

		static FVector IndexToFVector(int index);
	};
}
