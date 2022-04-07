/*
  Warnings:

  - Added the required column `modPackage` to the `Mod` table without a default value. This is not possible if the table is not empty.
  - Added the required column `modVersion` to the `Mod` table without a default value. This is not possible if the table is not empty.

*/
-- AlterTable
ALTER TABLE `mod` ADD COLUMN `modPackage` VARCHAR(191) NOT NULL,
    ADD COLUMN `modVersion` VARCHAR(191) NOT NULL;

-- CreateTable
CREATE TABLE `Invite` (
    `id` INTEGER NOT NULL,
    `code` VARCHAR(191) NOT NULL,
    `userId` INTEGER NOT NULL,
    `createdAt` DATETIME(3) NOT NULL DEFAULT CURRENT_TIMESTAMP(3),
    `updatedAt` DATETIME(3) NOT NULL DEFAULT CURRENT_TIMESTAMP(3),

    PRIMARY KEY (`id`)
) DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
