#include "WorldHelpers.h"

int Helpers::WorldHelpers::VectorToIndex(FIntVector vector)
{
	if (vector.X < 0 || vector.X >= chunkXY || vector.Y < 0 || vector.Y >= chunkXY || vector.Z < 0 || vector.Z >= chunkZ)
		return -1;

	return (vector.Z * chunkXY * chunkXY) + (vector.Y * chunkXY) + vector.X;
}

FIntVector Helpers::WorldHelpers::IndexToVector(int index)
{
	int z = index / (chunkXY * chunkXY);
	int y = (index - z * chunkXY * chunkXY) / chunkXY;
	int x = index - z * chunkXY * chunkXY - y * chunkXY;

	return FIntVector(x, y, z);
}

FVector Helpers::WorldHelpers::IndexToFVector(int index)
{

	int z = index / (chunkXY * chunkXY);
	int y = (index - z * chunkXY * chunkXY) / chunkXY;
	int x = index - z * chunkXY * chunkXY - y * chunkXY;

	return FVector(x, y, z);
}
