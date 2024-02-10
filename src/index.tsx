const Planarian = require('./NativePlanarian').default;

export function multiply(a: number, b: number): number {
  return Planarian.multiply(a, b);
}
